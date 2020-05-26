
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<STDLIB.h>
#include<TIME.h>
//#include<alloc.h>


#include "shiplib.h"
#include "alienlibrary.h"
#include "score_library.h"




/*function declaration*/
int CHK_BULLET_HIT();
int SHOOT_BULLET(int);
void SHOOT_IF();
void MOVE_SHIP();

void alien();
int movealien(int);
void ShootAlienBullet(int);
void AlienBullet(int,int);

void CHKSHIPDIED(int,int);
void star_movement();

void border();
int status_screen();
int update_score_screen();
int update_info_screen();


int update_life();


/*GLOBAL VARIABLES*/

int maxx=getmaxx();
int maxy=getmaxy();
/*bullet level*/
int blvl=400;
/*bullet x  position*/
static int hbpos[12]={100,100,100,100,100,100,100,100,100,100,100,100};
/*individual bullets y position*/
int vbpos[12]={428,428,428,428,428,428,428,428,428,428,428,428};
/*trigger bullet*/
int T_B[12]={110,111,112,113,114,115,116,117,118,119,120,121};

/*TRIGGER COUNT*/
int TRIGGER_COUNT=0;
/*horizontal ship position*/
int HSpos=100;
/*vertical ship pos*/
int VSpos=430;
/*NEXT BALL NO FOR hbpos*/
int NEXT_BALL_NO=0;

/*CURRENT BALL NO*/
int CURRENT_BALL_NO=-1;
//int *C_B_N=&CURRENT_BALL_NO;

//**CHECK BULLET HIT ALIENS**//
/*FLAG for to check bullet hit an alien*/
int HIT[14]={0,0,0,0,0,0,0,0,0,0,0,0,0,0};//if Hit {value=666}

//AN FLAG FOR BALL IF IT HIT ALIENS
int HITBALL[12]={0,0,0,0,0,0,0,0,0,0,0,0};//if hit(value==555)

//
int AposX[14]={30,60,90,120,150,180,210,210,240,270,300,330,360,390};
int AposY[14]={30,30,30,30,30,30,30,60,60,60,60,60,60,60};
int Adirection[14]={1,1,1,1,1,1,1,-1,-1,-1,-1,-1,-1,-1};

int ABposX[14][12]={100,100,100,100,100,100,100,100,100,100,100,100};
int ABposY[14][12]={20,20,20,20,20,20,20,20,20,20,20,20};

int ABno[14]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

int TRIGGERAB[14][12]={0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int alternate=1;//to alternate function either -1 or 1

int movestar=1;//to delay movement of star

int SCORE=0;//score

int GAME_LEVEL=1;//level for gameplay and alines

int LIVES=3;//life of player

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");


border();
setviewport(10,10,410,getmaxy()-20,0);


status_screen();
//update_life();

while(1)
{
 START:


 switch (CHK_BULLET_HIT())
 {
   case 999:
	goto END;

   case 10101:
	{while(1){
		setviewport(10,10,410,getmaxy()-20,0);

		star_movement();
		 alien();

		switch (CHK_BULLET_HIT()){
			case 999:
				goto END;
			case 10101:
				goto START;
		}

		 SHOOT_IF();
	   //      update_life();


		delay(100);
		clearviewport();
	}
	}
  }
}
END:
getch();
}






//*2nd called FUNCTION*//
/*conditions to shoot bullet*/
void SHOOT_IF()
{
		if(T_B[0]==111){

			SHOOT_BULLET(0);
		}

		if(T_B[1]==112){


			SHOOT_BULLET(1);


		}
		if(T_B[2]==113){

			SHOOT_BULLET(2);

		}

		if(T_B[3]==114){

			SHOOT_BULLET(3);

		}

		if(T_B[4]==115){

			SHOOT_BULLET(4);

		}

		if(T_B[5]==116){

			SHOOT_BULLET(5);

		}

		if(T_B[6]==117){

			SHOOT_BULLET(6);

		}


		if(T_B[7]==118){

			SHOOT_BULLET(7);


		}

		if(T_B[8]==119){
			SHOOT_BULLET(8);


		}

		if(T_B[9]==120){
			SHOOT_BULLET(9);


		}

		if(T_B[10]==121){
			SHOOT_BULLET(10);


		}

		if(T_B[11]==122){
			SHOOT_BULLET(11);
		}


}


/*1st called*/
int CHK_BULLET_HIT()
{

	if(kbhit())
	{
		int userInput=getch();

		/*MOVEMENT OF THE SPACE SHIP*/
		/*MOVE SHIP UP or FORWARD*/
		if(userInput=='w' || userInput=='W')
		{
			if(VSpos>20)
			VSpos-=7;
		}
		/*MOVE SHIP DOWN*/
		if(userInput=='s' || userInput=='S')
		{
			if(VSpos<=430)
			VSpos+=7;
		}
		/*MOVE TO LEFT*/
		if(userInput==65 || userInput==97 || userInput==75){
			if(HSpos>=30)
			HSpos-=7;
		}

		/*MOVE TO RIGHT*/
		if(userInput==68 || userInput==100 || userInput==80){
			if(HSpos<380)
			HSpos+=7;

		}

		/*if SPACE bar is hit for shooting bullet*/
		if(userInput==32)
		{

			if(TRIGGER_COUNT>=12)
			{
				/* NEXT_BALL_NO=0; */
				TRIGGER_COUNT=0;
				CURRENT_BALL_NO=-1;
			}
			if(TRIGGER_COUNT<12)
			{
				TRIGGER_COUNT++;
				CURRENT_BALL_NO++;
			       //**	NEXT_BALL_NO++;   **//
			}
			int tempT_B=110;
			for(int k=0;k<TRIGGER_COUNT;k++)
			{

				tempT_B++;
				T_B[CURRENT_BALL_NO]=tempT_B;

			}
			hbpos[CURRENT_BALL_NO]=HSpos;
			vbpos[CURRENT_BALL_NO]=VSpos-14;


		}
		/*CONDITION FOR ESCAPING */
		if(userInput==27)
		{
			return(999);//end
		}

		/*CONDITION FOR PAUSING*/
		if(userInput=='P' || userInput=='p')
		{
			outtextxy(450,380,"paused");
			return(10101);
		}


	}
	//**DIPLAY SHIP **//

      draw_ship002(HSpos,VSpos);

return(0);

}



int SHOOT_BULLET(int BALL_NO){
	if(vbpos[BALL_NO]>-1 && HITBALL[BALL_NO] != 555){
		setcolor(10);
		setfillstyle(SOLID_FILL,14);
		circle(hbpos[BALL_NO],vbpos[BALL_NO],1);
		putpixel(hbpos[BALL_NO],vbpos[BALL_NO]+2,10);

		floodfill(hbpos[BALL_NO],vbpos[BALL_NO],10);
	}

       ///*** REinitialize current ball or bullet ***///
		if(vbpos[BALL_NO]<0){
			vbpos[BALL_NO]=428;
			hbpos[BALL_NO]=100;
			T_B[BALL_NO]=110;
			HITBALL[BALL_NO]=0;

		}
	vbpos[BALL_NO]-=15;


return(1);
}



int movealien(int alienno)
{

	if(Adirection[alienno]>0)
	{
		if(alienno<7)
		{
			if(AposX[6]>=380 )
			{
				Adirection[alienno]=-1;
			}

		}
		else
		{
			if(AposX[13]>=380)
			{
				Adirection[alienno]=-1;
			}
		}
			AposX[alienno]+=10;

		return(1);
	}
	if(Adirection[alienno]<0)
	{
		AposX[alienno]-=10;
		if(alienno<7)
		{
			if(AposX[0]<=10)
			{
				Adirection[alienno]=1;
			}
		}
		else
		{
			if(AposX[7]<=10)
			{
				Adirection[alienno]=1;
			}
		}
		return(1);
	}


return(0);
}




void alien()
{
static int diedaliencount=0;
static int alienhitcount[14]={0,0,0,0,0,0,0,0,0,0,0,0,0,0};


for(int j=0;j<14;j++)
{
	movealien(j);
      for(int i=0;i<12;i++)
      {
	if(HIT[j]!=666) // check if alien no is already hit or not
	{
		if( hbpos[i]>=(AposX[j]-10) && hbpos[i]<=(AposX[j]+10) && vbpos[i]>=(AposY[j]-10) && vbpos[i]<=(AposY[j]+10) ) //check alien got hit
		 {
				alienhitcount[j]++;
				diedaliencount++;


				SCORE=SCORE+2;

				if(GAME_LEVEL==1 && alienhitcount[j]==1)
				{
				HIT[j]=666;
				}

				if(GAME_LEVEL==2 && alienhitcount[j]==2)
				{
				HIT[j]=666;
				}

				HITBALL[i]=555;

				if( (diedaliencount/GAME_LEVEL)==14)
				{
				GAME_LEVEL++;
				diedaliencount=0;
				       for(int count=0;count<14;count++)
				       {
					alienhitcount[count]=0;
					HIT[count]=0;
					}
				}


				status_screen();
		 }
	}

      }
	 if(HIT[j]!=666) //if ALIEN NOT hit
	{
		  if(alternate<=10)
		  {   draw_alien0022(AposX[j],AposY[j]);
		  }
		  if(alternate>10)
		  {
			draw_alien0021(AposX[j],AposY[j]);
		  }
		alternate++;
		if(alternate>=20)
		{
			alternate=1;
		}
	}
ShootAlienBullet(j);
}



}


void ShootAlienBullet(int alienno)
{
	int randno=random(300);
	if(randno>=15 && randno<=20 )
	    {
	      ABno[alienno]++;
		if(HIT[alienno]!=666)
		{
		    TRIGGERAB[alienno][ABno[alienno]]=222;
		 //   sound(100);
		  //  delay(20);
		  //  nosound();

		}
		else
		{
			TRIGGERAB[alienno][ABno[alienno]]=0;
		}

	     ABposX[alienno][ABno[alienno]]=AposX[alienno];
	     ABposY[alienno][ABno[alienno]]=AposY[alienno];
	     if(ABno[alienno]>=11)
	     {ABno[alienno]=-1;
		}


	}
	for(int i=0;i<12;i++)
	{
		if(TRIGGERAB[alienno][i]==222)

		{
			AlienBullet(alienno,i);
		}
	}

}


void AlienBullet(int alienno,int tABno)
{

		setcolor(5);
		setfillstyle(SOLID_FILL,5);

		  //	bar(ABposX[tABno]-2,ABposY[tABno]-2,ABposX[tABno]+2,ABposY[tABno]+2);
		circle(ABposX[alienno][tABno],ABposY[alienno][tABno],1);
		putpixel(ABposX[alienno][tABno],ABposY[alienno][tABno]-2,5);
		putpixel(ABposX[alienno][tABno]-1,ABposY[alienno][tABno]-2,5);
		putpixel(ABposX[alienno][tABno]+1,ABposY[alienno][tABno]-2,5);



		 floodfill(ABposX[alienno][tABno],ABposY[alienno][tABno],5);
		CHKSHIPDIED(alienno,tABno);
		ABposY[alienno][tABno]+=8;//move alien bullet

		if(ABposY[alienno][tABno]>435)        //reinitialize alien bullet
		{
			ABposY[alienno][tABno]=20;
			TRIGGERAB[alienno][tABno]=0;

		}


}







void CHKSHIPDIED(int alienno,int tABno)
{       int ASH=0,ABSH=0;
   //   if( ABposX[alienno][tABno]>=(HSpos-15) && ABposX[alienno][tABno]<=(HSpos+15) && ABposY[alienno][tABno]>=(VSpos-10) && ABposY[alienno][tABno]<=(VSpos+10) )		outtextxy(430,200, "YOU ARE DEAD!!!!");
     // {
      //	outtextxy(430,200, "YOU ARE DEAD!!!!");
      // }
    //  if(AposX[alienno]>=(HSpos-15) && AposX[alienno]<=(HSpos+15) && AposY[alienno]>=(VSpos-10) && AposY[alienno]<=(VSpos+10) )

      for(int x=-10;x<=10;x++)
      {
	for(int y=-10;y<=10;y++)
	{
		if( (AposX[alienno]+x)>=(HSpos-15) && (AposX[alienno]+x)<=(HSpos+15) && (AposY[alienno]+y)>=(VSpos-10) && (AposY[alienno]+y)<=(VSpos+10) )
			 ASH=1;//ship got hit by alien
		else
			 ASH=0;
		if ( ABposX[alienno][tABno]>=(HSpos-15) && ABposX[alienno][tABno]<=(HSpos+15) && ABposY[alienno][tABno]>=(VSpos-10) && ABposY[alienno][tABno]<=(VSpos+10) )
			 ABSH=1;//ship got hit by alien bullet
		else
			 ABSH=0;

			if(ASH==1 || ABSH==1)  //if ship got hit by alien or bullet
			{
				outtextxy(450,400, "YOU GOT HIT!!!!");
				LIVES--;

		       }
	}
      }



}




void star_movement()
{
int x,y;
	for(int i=1;i<=4;i++)
	{

		 x=random(390);
		 y=random(437);
		 putpixel(x,y,14);
	       x=random(390);
		 y=random(437);

	      putpixel(x,y,5);

	}

}



void border()
{
	setcolor(15);
	setfillstyle(SOLID_FILL,15);



	bar3d(0,0,415,480,1,1);
	setcolor(3);
	setfillstyle(SOLID_FILL,3);
	bar(10,10,410,470);
}




int status_screen()
{
	//score screen
	setcolor(15);
	setfillstyle(SOLID_FILL,15);
	bar(425,10,630,140);
	setfillstyle(SOLID_FILL,3);
	bar(427,12,628,138);
	setfillstyle(SOLID_FILL,0);
	bar(430,15,625,135);
	update_score_screen();


       //display game status and istruction
       setcolor(15);
       setfillstyle(SOLID_FILL,15);
       bar3d(425,150,630,470,1,1);
       setfillstyle(SOLID_FILL,11);
       bar(427,155,625,465);
       setfillstyle(SOLID_FILL,0);
	bar(430,158,622,462);
       update_info_screen();


 return(0);

}


int update_score_screen()
{
	int s1=0,s2=0,s3=0,s4=0;
	settextstyle(8,0,4);
	outtextxy(440,20,"SCORE");

	s1=SCORE/1000;
	s2=(SCORE/100)-(SCORE/1000*10);
	s3=(SCORE/10)-(SCORE/100*10);
	s4=SCORE-(SCORE/10*10);

	display_number(470,90,s1);
	display_number(510,90,s2);
	display_number(550,90,s3);
	display_number(590,90,s4);


return(0);
}


int update_info_screen()
{

      //	setviewport(430,160,620,460,0);
	setcolor(5);
	settextstyle(7,0,2);
	outtextxy(440,165,"Instruction");

	setcolor(10);
	settextstyle(0,0,1);
	outtextxy(435,205,"->Use w,a,s,d to move");
	outtextxy(435,225,"->Use 'space' button ");
	outtextxy(435,245,"  to shoot ");
	outtextxy(435,265,"->Press 'P' to pause ");
	outtextxy(435,285,"  and play ");

	if(GAME_LEVEL==1)
	{
		outtextxy(460,335,"LEVEL1");
	 }
	 if(GAME_LEVEL==2)
	 {
		outtextxy(460,335,"      ");
		outtextxy(460,335,"LEVEL2");
	 }

return(0);
}



int update_life()
{
	setcolor(6);
    //	settextstyle(9,0,1);
	outtextxy(450,440,"LIVES:");
	for(int i=0;i<LIVES;i++)
	{
		setcolor(7);
		setfillstyle(SOLID_FILL,7);
		bar(500+(i*20),435,510+(i*20),450);


	}

return(0);
}