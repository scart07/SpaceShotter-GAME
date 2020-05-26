#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<graphics.h>



void display_number(int x, int y, int no);

/*
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");

	setcolor(15);
	bar(200,100,400,200);
	setfillstyle(SOLID_FILL,0);
	bar(210,110,390,190);

	display_number(230,150,1);
	display_number(300,150,9);

	getch();



}
*/

void display_number(int x,int y,int no)
{

	if(no==0)
	{
		setfillstyle(SOLID_FILL,4);
		bar(x-15,y-20,x+15,y+20);
	       setfillstyle(SOLID_FILL,0);
	       bar(x-11,y-15,x+11,y+15);
	}


	if(no==1)
	{
		setfillstyle(SOLID_FILL,4);
		bar(x-15,y-20,x+15,y+20);
		setfillstyle(SOLID_FILL,0);
		bar(x-15,y-20,x+9,y+20);

	}
	if(no==2)
	{
		setfillstyle(SOLID_FILL,4);
		bar(x-15,y-20,x+15,y+20);
		setfillstyle(SOLID_FILL,0);
		bar(x-15,y-15,x+10,y-4);
		bar(x-10,y+5,x+15,y+15);
	}

	if(no==3)
	{
		setfillstyle(SOLID_FILL,4);
		bar(x-15,y-20,x+15,y+20);
	       setfillstyle(SOLID_FILL,0);
	       bar(x-15,y-15,x+10,y-5);
	       bar(x-15,y+3,x+10,y+15);
	}

	if(no==4)
	{
		setfillstyle(SOLID_FILL,4);
		bar(x-15,y-20,x+15,y+20);
	       setfillstyle(SOLID_FILL,0);
	       bar(x-10,y-20,x+10,y-3);
	       bar(x-15,y+5,x+10,y+20);
	}


	if(no==5)
	{
		setfillstyle(SOLID_FILL,4);
		bar(x-15,y-20,x+15,y+20);
	       setfillstyle(SOLID_FILL,0);
	       bar(x-10,y-15,x+15,y-4);
	       bar(x-15,y+4,x+10,y+15);
	}



	if(no==6)
	{
		setfillstyle(SOLID_FILL,4);
		bar(x-15,y-20,x+15,y+20);
	       setfillstyle(SOLID_FILL,0);
	       bar(x-10,y-15,x+15,y-4);
	       bar(x-10,y+4,x+10,y+15);
	}



	if(no==7)
	{
		setfillstyle(SOLID_FILL,4);
		bar(x-15,y-20,x+15,y+20);
	       setfillstyle(SOLID_FILL,0);
	       bar(x-15,y-15,x+10,y+20);
	}


	if(no==8)
	{
		setfillstyle(SOLID_FILL,4);
		bar(x-15,y-20,x+15,y+20);
	       setfillstyle(SOLID_FILL,0);
	       bar(x-10,y-15,x+10,y-4);
	       bar(x-10,y+4,x+10,y+15);
	}



	if(no==9)
	{
		setfillstyle(SOLID_FILL,4);
		bar(x-15,y-20,x+15,y+20);
	       setfillstyle(SOLID_FILL,0);
	       bar(x-10,y-15,x+10,y-3);
	       bar(x-15,y+3,x+10,y+15);
	}


}

