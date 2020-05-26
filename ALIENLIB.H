#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>


void draw_alien002(int x,int y);
void draw_alien0021(int x,int y);  //alien octupus
void draw_alien0022(int x,int y);


void draw_alien002(int x,int y)
{
	static alt=1;
	if(alt>0)
	{draw_alien0021(x,y);}
	else{draw_alien0022(x,y);}
	alt*=(-1);
}
void draw_alien0021(int x,int y)
{

     int a2c=5;


	/*first row*/
	putpixel(x-5,y-10,a2c);
	putpixel(x-4,y-10,a2c);
	putpixel(x-3,y-10,a2c);
	putpixel(x-2,y-10,a2c);
	putpixel(x-1,y-10,a2c);
	putpixel(x,y-10,a2c);
	putpixel(x+1,y-10,a2c);
	putpixel(x+2,y-10,a2c);
	putpixel(x+3,y-10,a2c);
	putpixel(x+4,y-10,a2c);
	putpixel(x+5,y-10,a2c);

	/*second row*/
	putpixel(x-5,y-9,a2c);
	putpixel(x-4,y-9,a2c);
	putpixel(x-3,y-9,a2c);
	putpixel(x-2,y-9,a2c);
	putpixel(x-1,y-9,a2c);
	putpixel(x,y-9,a2c);
	putpixel(x+1,y-9,a2c);
	putpixel(x+2,y-9,a2c);
	putpixel(x+3,y-9,a2c);
	putpixel(x+4,y-9,a2c);
	putpixel(x+5,y-9,a2c);

	/*3rd row*/
	putpixel(x-5,y-8,a2c);
	putpixel(x-4,y-8,a2c);
	putpixel(x-3,y-8,a2c);
	putpixel(x-2,y-8,a2c);
	putpixel(x-1,y-8,a2c);
	putpixel(x,y-8,a2c);
	putpixel(x+1,y-8,a2c);
	putpixel(x+2,y-8,a2c);
	putpixel(x+3,y-8,a2c);
	putpixel(x+4,y-8,a2c);
	putpixel(x+5,y-8,a2c);

	/*4 row*/
	putpixel(x-5,y-7,a2c);
	putpixel(x-4,y-7,a2c);
	putpixel(x-3,y-7,a2c);
	putpixel(x-2,y-7,a2c);
	putpixel(x+2,y-7,a2c);
	putpixel(x+3,y-7,a2c);
	putpixel(x+4,y-7,a2c);
	putpixel(x+5,y-7,a2c);

	/*5th row */
	putpixel(x-5,y-6,a2c);
	putpixel(x-4,y-6,a2c);
	putpixel(x-3,y-6,a2c);
	putpixel(x-2,y-6,a2c);
	putpixel(x+2,y-6,a2c);
	putpixel(x+3,y-6,a2c);
	putpixel(x+4,y-6,a2c);
	putpixel(x+5,y-6,a2c);


	/*6 row*/
	putpixel(x-10,y-5,a2c);
	putpixel(x-9,y-5,a2c);
	putpixel(x-8,y-5,a2c);
	putpixel(x-7,y-5,a2c);
	putpixel(x-6,y-5,a2c);
	putpixel(x-5,y-5,a2c);
	putpixel(x-4,y-5,a2c);
	putpixel(x-3,y-5,a2c);
	putpixel(x-2,y-5,a2c);
	putpixel(x+2,y-5,a2c);
	putpixel(x+3,y-5,a2c);
	putpixel(x+4,y-5,a2c);
	putpixel(x+5,y-5,a2c);
	putpixel(x+6,y-5,a2c);
	putpixel(x+7,y-5,a2c);
	putpixel(x+8,y-5,a2c);
	putpixel(x+9,y-5,a2c);
	putpixel(x+10,y-5,a2c);

	/*7th row*/
	putpixel(x-10,y-4,a2c);
	putpixel(x-9,y-4,a2c);
	putpixel(x-8,y-4,a2c);
	putpixel(x-7,y-4,a2c);
	putpixel(x-6,y-4,a2c);
	putpixel(x-5,y-4,a2c);
	putpixel(x-4,y-4,a2c);
	putpixel(x-3,y-4,a2c);
	putpixel(x-2,y-4,a2c);
	putpixel(x+2,y-4,a2c);
	putpixel(x+3,y-4,a2c);
	putpixel(x+4,y-4,a2c);
	putpixel(x+5,y-4,a2c);
	putpixel(x+6,y-4,a2c);
	putpixel(x+7,y-4,a2c);
	putpixel(x+8,y-4,a2c);
	putpixel(x+9,y-4,a2c);
	putpixel(x+10,y-4,a2c);


	/*8th row*/
	putpixel(x-10,y-3,a2c);
	putpixel(x-9,y-3,a2c);
	putpixel(x-5,y-3,a2c);
	putpixel(x-4,y-3,a2c);
	putpixel(x-3,y-3,a2c);
	putpixel(x-2,y-3,a2c);
	 putpixel(x-1,y-3,a2c);
	putpixel(x,y-3,a2c);
	putpixel(x+1,y-3,a2c);
	putpixel(x+2,y-3,a2c);
	putpixel(x+3,y-3,a2c);
	putpixel(x+4,y-3,a2c);
	putpixel(x+5,y-3,a2c);
	putpixel(x+9,y-3,a2c);
	putpixel(x+10,y-3,a2c);

	/*9th row*/
	putpixel(x-10,y-2,a2c);
	putpixel(x-9,y-2,a2c);
	putpixel(x-5,y-2,a2c);
	putpixel(x-4,y-2,a2c);
	putpixel(x-3,y-2,a2c);
	putpixel(x-2,y-2,a2c);
	 putpixel(x-1,y-2,a2c);
	putpixel(x,y-2,a2c);
	putpixel(x+1,y-2,a2c);
	putpixel(x+2,y-2,a2c);
	putpixel(x+3,y-2,a2c);
	putpixel(x+4,y-2,a2c);
	putpixel(x+5,y-2,a2c);
	putpixel(x+9,y-2,a2c);
	putpixel(x+10,y-2,a2c);


	/*10 th row*/
	putpixel(x-10,y-1,a2c);
	putpixel(x-9,y-1,a2c);
	putpixel(x-5,y-1,a2c);
	putpixel(x-4,y-1,a2c);
	putpixel(x-3,y-1,a2c);
	putpixel(x-2,y-1,a2c);
	 putpixel(x-1,y-1,a2c);
	putpixel(x,y-1,a2c);
	putpixel(x+1,y-1,a2c);
	putpixel(x+2,y-1,a2c);
	putpixel(x+3,y-1,a2c);
	putpixel(x+4,y-1,a2c);
	putpixel(x+5,y-1,a2c);
	putpixel(x+9,y-1,a2c);
	putpixel(x+10,y-1,a2c);

	/*11 row*/
	putpixel(x-10,y,a2c);
	putpixel(x-9,y,a2c);
	putpixel(x-5,y,a2c);
	putpixel(x-4,y,a2c);
	putpixel(x-3,y,a2c);
	putpixel(x-2,y,a2c);
	 putpixel(x-1,y,a2c);
	putpixel(x,y,a2c);
	putpixel(x+1,y,a2c);
	putpixel(x+2,y,a2c);
	putpixel(x+3,y,a2c);
	putpixel(x+4,y,a2c);
	putpixel(x+5,y,a2c);
	 putpixel(x+9,y,a2c);
	 putpixel(x+10,y,a2c);

	/*12 row*/
	putpixel(x-7,y+1,a2c);
	putpixel(x-6,y+1,a2c);
	putpixel(x-5,y+1,a2c);
	 putpixel(x-1,y+1,a2c);
	putpixel(x,y+1,a2c);
	putpixel(x+1,y+1,a2c);
	putpixel(x+5,y+1,a2c);
	putpixel(x+6,y+1,a2c);
	putpixel(x+7,y+1,a2c);


	/*13 row*/
	putpixel(x-7,y+2,a2c);
	putpixel(x-6,y+2,a2c);
	putpixel(x-5,y+2,a2c);
	 putpixel(x-1,y+2,a2c);
	putpixel(x,y+2,a2c);
	putpixel(x+1,y+2,a2c);
	putpixel(x+5,y+2,a2c);
	putpixel(x+6,y+2,a2c);
	putpixel(x+7,y+2,a2c);


	/*14 row*/
	putpixel(x-7,y+3,a2c);
	putpixel(x-6,y+3,a2c);
	putpixel(x-5,y+3,a2c);
	 putpixel(x-1,y+3,a2c);
	putpixel(x,y+3,a2c);
	putpixel(x+1,y+3,a2c);
	putpixel(x+5,y+3,a2c);
	putpixel(x+6,y+3,a2c);
	putpixel(x+7,y+3,a2c);

	/*15 row*/
	putpixel(x-7,y+4,a2c);
	putpixel(x-6,y+4,a2c);
	putpixel(x-5,y+4,a2c);
	 putpixel(x-1,y+4,a2c);
	putpixel(x,y+4,a2c);
	putpixel(x+1,y+4,a2c);
	putpixel(x+5,y+4,a2c);
	putpixel(x+6,y+4,a2c);
	putpixel(x+7,y+4,a2c);

	/*16 row*/
	putpixel(x-9,y+5,a2c);
	putpixel(x-8,y+5,a2c);
	putpixel(x-7,y+5,a2c);
	putpixel(x-6,y+5,a2c);
	putpixel(x,y+5,a2c);
	putpixel(x-1,y+5,a2c);
	putpixel(x+1,y+5,a2c);
	putpixel(x+6,y+5,a2c);
	putpixel(x+7,y+5,a2c);
	putpixel(x+8,y+5,a2c);
	putpixel(x+9,y+5,a2c);

	/*17 row*/
	putpixel(x-9,y+6,a2c);
	putpixel(x-8,y+6,a2c);
	putpixel(x-7,y+6,a2c);
	putpixel(x-6,y+6,a2c);
	putpixel(x,y+6,a2c);
	putpixel(x-1,y+6,a2c);
	putpixel(x+1,y+6,a2c);
	putpixel(x+6,y+6,a2c);
	putpixel(x+7,y+6,a2c);
	putpixel(x+8,y+6,a2c);
	putpixel(x+9,y+6,a2c);

	/*18 row*/
	putpixel(x,y+7,a2c);
	putpixel(x-1,y+7,a2c);
	putpixel(x+1,y+7,a2c);

	/*19 row*/
	putpixel(x,y+8,a2c);
	putpixel(x-1,y+8,a2c);
	putpixel(x+1,y+8,a2c);

	/*20 row*/
	putpixel(x,y+9,a2c);
	putpixel(x-1,y+9,a2c);
	putpixel(x+1,y+9,a2c);

	/*21 row*/
	putpixel(x-1,y+10,a2c);
	putpixel(x,y+10,a2c);
	putpixel(x+1,y+10,a2c);






}

void draw_alien0022(int x,int y)
{
     int a2c=5;


	/*first row*/
	putpixel(x-5,y-10,a2c);
	putpixel(x-4,y-10,a2c);
	putpixel(x-3,y-10,a2c);
	putpixel(x-2,y-10,a2c);
	putpixel(x-1,y-10,a2c);
	putpixel(x,y-10,a2c);
	putpixel(x+1,y-10,a2c);
	putpixel(x+2,y-10,a2c);
	putpixel(x+3,y-10,a2c);
	putpixel(x+4,y-10,a2c);
	putpixel(x+5,y-10,a2c);

	/*second row*/
	putpixel(x-5,y-9,a2c);
	putpixel(x-4,y-9,a2c);
	putpixel(x-3,y-9,a2c);
	putpixel(x-2,y-9,a2c);
	putpixel(x-1,y-9,a2c);
	putpixel(x,y-9,a2c);
	putpixel(x+1,y-9,a2c);
	putpixel(x+2,y-9,a2c);
	putpixel(x+3,y-9,a2c);
	putpixel(x+4,y-9,a2c);
	putpixel(x+5,y-9,a2c);

	/*3rd row*/
	putpixel(x-5,y-8,a2c);
	putpixel(x-4,y-8,a2c);
	putpixel(x-3,y-8,a2c);
	putpixel(x-2,y-8,a2c);
	putpixel(x-1,y-8,a2c);
	putpixel(x,y-8,a2c);
	putpixel(x+1,y-8,a2c);
	putpixel(x+2,y-8,a2c);
	putpixel(x+3,y-8,a2c);
	putpixel(x+4,y-8,a2c);
	putpixel(x+5,y-8,a2c);

	/*4 row*/
	putpixel(x-5,y-7,a2c);
	putpixel(x-4,y-7,a2c);
	putpixel(x-3,y-7,a2c);
	putpixel(x-2,y-7,a2c);
	putpixel(x+2,y-7,a2c);
	putpixel(x+3,y-7,a2c);
	putpixel(x+4,y-7,a2c);
	putpixel(x+5,y-7,a2c);

	/*5th row */
	putpixel(x-5,y-6,a2c);
	putpixel(x-4,y-6,a2c);
	putpixel(x-3,y-6,a2c);
	putpixel(x-2,y-6,a2c);
	putpixel(x+2,y-6,a2c);
	putpixel(x+3,y-6,a2c);
	putpixel(x+4,y-6,a2c);
	putpixel(x+5,y-6,a2c);


	/*6 row*/
	putpixel(x-10,y-5,a2c);
	putpixel(x-9,y-5,a2c);
	putpixel(x-8,y-5,a2c);
	putpixel(x-7,y-5,a2c);
	putpixel(x-6,y-5,a2c);
	putpixel(x-5,y-5,a2c);
	putpixel(x-4,y-5,a2c);
	putpixel(x-3,y-5,a2c);
	putpixel(x-2,y-5,a2c);
	putpixel(x+2,y-5,a2c);
	putpixel(x+3,y-5,a2c);
	putpixel(x+4,y-5,a2c);
	putpixel(x+5,y-5,a2c);
	putpixel(x+6,y-5,a2c);
	putpixel(x+7,y-5,a2c);
	putpixel(x+8,y-5,a2c);
	putpixel(x+9,y-5,a2c);
	putpixel(x+10,y-5,a2c);

	/*7th row*/
	putpixel(x-10,y-4,a2c);
	putpixel(x-9,y-4,a2c);
	putpixel(x-8,y-4,a2c);
	putpixel(x-7,y-4,a2c);
	putpixel(x-6,y-4,a2c);
	putpixel(x-5,y-4,a2c);
	putpixel(x-4,y-4,a2c);
	putpixel(x-3,y-4,a2c);
	putpixel(x-2,y-4,a2c);
	putpixel(x+2,y-4,a2c);
	putpixel(x+3,y-4,a2c);
	putpixel(x+4,y-4,a2c);
	putpixel(x+5,y-4,a2c);
	putpixel(x+6,y-4,a2c);
	putpixel(x+7,y-4,a2c);
	putpixel(x+8,y-4,a2c);
	putpixel(x+9,y-4,a2c);
	putpixel(x+10,y-4,a2c);


	/*8th row*/
	putpixel(x-10,y-3,a2c);
	putpixel(x-9,y-3,a2c);
	putpixel(x-5,y-3,a2c);
	putpixel(x-4,y-3,a2c);
	putpixel(x-3,y-3,a2c);
	putpixel(x-2,y-3,a2c);
	 putpixel(x-1,y-3,a2c);
	putpixel(x,y-3,a2c);
	putpixel(x+1,y-3,a2c);
	putpixel(x+2,y-3,a2c);
	putpixel(x+3,y-3,a2c);
	putpixel(x+4,y-3,a2c);
	putpixel(x+5,y-3,a2c);
	putpixel(x+9,y-3,a2c);
	putpixel(x+10,y-3,a2c);

	/*9th row*/
	putpixel(x-10,y-2,a2c);
	putpixel(x-9,y-2,a2c);
	putpixel(x-5,y-2,a2c);
	putpixel(x-4,y-2,a2c);
	putpixel(x-3,y-2,a2c);
	putpixel(x-2,y-2,a2c);
	 putpixel(x-1,y-2,a2c);
	putpixel(x,y-2,a2c);
	putpixel(x+1,y-2,a2c);
	putpixel(x+2,y-2,a2c);
	putpixel(x+3,y-2,a2c);
	putpixel(x+4,y-2,a2c);
	putpixel(x+5,y-2,a2c);
	putpixel(x+9,y-2,a2c);
	putpixel(x+10,y-2,a2c);


	/*10 th row*/
      //	putpixel(x-10,y-1,a2c);
      //	putpixel(x-9,y-1,a2c);
	putpixel(x-5,y-1,a2c);
	putpixel(x-4,y-1,a2c);
	putpixel(x-3,y-1,a2c);
	putpixel(x-2,y-1,a2c);
	 putpixel(x-1,y-1,a2c);
	putpixel(x,y-1,a2c);
	putpixel(x+1,y-1,a2c);
	putpixel(x+2,y-1,a2c);
	putpixel(x+3,y-1,a2c);
	putpixel(x+4,y-1,a2c);
	putpixel(x+5,y-1,a2c);
      //	putpixel(x+9,y-1,a2c);
      //	putpixel(x+10,y-1,a2c);

	/*11 row*/
     //	putpixel(x-10,y,a2c);
    //	putpixel(x-9,y,a2c);
	putpixel(x-5,y,a2c);
	putpixel(x-4,y,a2c);
	putpixel(x-3,y,a2c);
	putpixel(x-2,y,a2c);
	 putpixel(x-1,y,a2c);
	putpixel(x,y,a2c);
	putpixel(x+1,y,a2c);
	putpixel(x+2,y,a2c);
	putpixel(x+3,y,a2c);
	putpixel(x+4,y,a2c);
	putpixel(x+5,y,a2c);
    //	 putpixel(x+9,y,a2c);
    //	 putpixel(x+10,y,a2c);

	/*12 row*/
	putpixel(x-7,y+1,a2c);
	putpixel(x-6,y+1,a2c);
	putpixel(x-5,y+1,a2c);
	 putpixel(x-1,y+1,a2c);
	putpixel(x,y+1,a2c);
	putpixel(x+1,y+1,a2c);
	putpixel(x+5,y+1,a2c);
	putpixel(x+6,y+1,a2c);
	putpixel(x+7,y+1,a2c);


	/*13 row*/
	putpixel(x-7,y+2,a2c);
	putpixel(x-6,y+2,a2c);
	putpixel(x-5,y+2,a2c);
	 putpixel(x-1,y+2,a2c);
	putpixel(x,y+2,a2c);
	putpixel(x+1,y+2,a2c);
	putpixel(x+5,y+2,a2c);
	putpixel(x+6,y+2,a2c);
	putpixel(x+7,y+2,a2c);


	/*14 row*/
	putpixel(x-7,y+3,a2c);
	putpixel(x-6,y+3,a2c);
	putpixel(x-5,y+3,a2c);
	 putpixel(x-1,y+3,a2c);
	putpixel(x,y+3,a2c);
	putpixel(x+1,y+3,a2c);
	putpixel(x+5,y+3,a2c);
	putpixel(x+6,y+3,a2c);
	putpixel(x+7,y+3,a2c);

	/*15 row*/
	putpixel(x-7,y+4,a2c);
	putpixel(x-6,y+4,a2c);
	putpixel(x-5,y+4,a2c);
	putpixel(x-4,y+4,a2c);
	 putpixel(x-1,y+4,a2c);
	putpixel(x,y+4,a2c);
	putpixel(x+1,y+4,a2c);
	putpixel(x+4,y+4,a2c);
	putpixel(x+5,y+4,a2c);
	putpixel(x+6,y+4,a2c);
	putpixel(x+7,y+4,a2c);

	/*16 row*/
       //	putpixel(x-9,y+5,a2c);
	putpixel(x-6,y+5,a2c);
	putpixel(x-5,y+5,a2c);
	putpixel(x-4,y+5,a2c);
	putpixel(x,y+5,a2c);
	putpixel(x-1,y+5,a2c);
	putpixel(x+1,y+5,a2c);

	putpixel(x+4,y+5,a2c);
	putpixel(x+5,y+5,a2c);
	putpixel(x+6,y+5,a2c);
      //	putpixel(x+9,y+5,a2c);

	/*17 row*/
     //	putpixel(x-9,y+6,a2c);
	putpixel(x-6,y+6,a2c);
	putpixel(x-5,y+6,a2c);
	putpixel(x-4,y+6,a2c);
	putpixel(x,y+6,a2c);
	putpixel(x-1,y+6,a2c);
	putpixel(x+1,y+6,a2c);
	putpixel(x+4,y+6,a2c);
	putpixel(x+5,y+6,a2c);
	putpixel(x+6,y+6,a2c);
      //	putpixel(x+7,y+6,a2c);
       //	putpixel(x+8,y+6,a2c);
     //	putpixel(x+9,y+6,a2c);

	/*18 row*/
	putpixel(x-6,y+7,a2c);
	putpixel(x-5,y+7,a2c);
	putpixel(x-4,y+7,a2c);
	putpixel(x,y+7,a2c);
	putpixel(x-1,y+7,a2c);
	putpixel(x+1,y+7,a2c);
	putpixel(x+4,y+7,a2c);
	putpixel(x+5,y+7,a2c);
	putpixel(x+6,y+7,a2c);




	/*19 row*/
	putpixel(x-6,y+8,a2c);
	putpixel(x-5,y+8,a2c);
	putpixel(x-4,y+8,a2c);
	putpixel(x,y+8,a2c);
	putpixel(x-1,y+8,a2c);
	putpixel(x+1,y+8,a2c);
	putpixel(x+4,y+8,a2c);
	putpixel(x+5,y+8,a2c);
	putpixel(x+6,y+8,a2c);



	/*20 row*/
	putpixel(x,y+9,a2c);
	putpixel(x-1,y+9,a2c);
	putpixel(x+1,y+9,a2c);

	/*21 row*/
      //	putpixel(x-1,y+10,a2c);
 //	putpixel(x,y+10,a2c);
   //	putpixel(x+1,y+10,a2c);






}

