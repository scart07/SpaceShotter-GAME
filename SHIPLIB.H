#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<iostream.h>



void draw_ship001(int x,int y);
void draw_ship002(int x, int y);




void draw_ship001(int x, int y)
{
	setcolor(10);
	setfillstyle(SOLID_FILL,14);
	rectangle(x-3,y+1,x+3,y+15);
	floodfill(x,y+2,10);

	line(x,y-15,x-2,y+1);
	line(x,y-15,x+2,y+1);
	circle(x,y+2,2);
	floodfill(x,y-10,10);

	/*right wings*/
	line(x+3,y+3,x+20,y+7);
	line(x+3,y+12,x+20,y+12);

	line(x+20,y+4,x+20,y+15);
	floodfill(x+5,y+5,10);
	rectangle(x+10,y-2,x+11,y+10);
	rectangle(x+9,y+10,x+12,y+15);
	floodfill(x+10,y+14,10);

	/*left wing*/
	line(x-3,y+3,x-20,y+7);
	line(x-3,y+12,x-20,y+12);
	line(x-20,y+4,x-20,y+15);
	floodfill(x-5,y+5,10);
	rectangle(x-10,y-2,x-11,y+10);
	rectangle(x-9,y+10,x-12,y+15);
	floodfill(x-10,y+14,10);


}



void draw_ship002(int x,int y)
{

	/*1st row*/
	for(int i1=-20;i1<=20;i1++)
	{
		if(i1>=-1 && i1<=1)
		putpixel(x+i1,y-10,7);
	}

	/*2 row*/
		for(int i2=-20;i2<=20;i2++)
	{
		if(i2>=-1 && i2<=1)
		putpixel(x+i2,y-9,7);
	}


	/*3 row*/
		for(int i3=-20;i3<=20;i3++)
	{
		if(i3>=-1 && i3<=1)
		putpixel(x+i3,y-8,7);
	}

	/*4 row*/
		for(int i4=-20;i4<=20;i4++)
	{
		if(i4>=-1 && i4<=1)
		putpixel(x+i4,y-7,7);
	}


	/*5 row*/
		for(int i5=-20;i5<=20;i5++)
	{
		if(i5>=-3 && i5<=3)
		putpixel(x+i5,y-6,7);
	}


	/*6 row*/
		for(int i6=-20;i6<=20;i6++)
	{
		if(i6>=-3 && i6<=3)
		putpixel(x+i6,y-5,7);
	}


	/*7 row*/
		for(int i7=-20;i7<=20;i7++)
	{
		if(i7>=-3 && i7<=3)
		putpixel(x+i7,y-4,7);

	}
	putpixel(x-9,y-4,4);
	putpixel(x-8,y-4,4);
	putpixel(x+8,y-4,4);
	putpixel(x+9,y-4,4);


	/*8 row*/
		for(int i8=-20;i8<=20;i8++)
	{
		if(i8>=-3 && i8<=3)
		putpixel(x+i8,y-3,7);
	}
		putpixel(x-9,y-3,4);
	putpixel(x-8,y-3,4);
	putpixel(x+8,y-3,4);
	putpixel(x+9,y-3,4);



	/*9 row*/
		for(int i9=-20;i9<=20;i9++)
	{
		if(i9>=-3 && i9<=3)
		putpixel(x+i9,y-2,7);
	}

	putpixel(x-9,y-2,7);
	putpixel(x-8,y-2,7);
	putpixel(x+8,y-2,7);
	putpixel(x+9,y-2,7);

	/*10 row*/
		for(int i10=-20;i10<=20;i10++)
	{
		if(i10>=-5 && i10<=5)
		putpixel(x+i10,y-1,7);
	}
	putpixel(x-9,y-1,7);
	putpixel(x-8,y-1,7);
	putpixel(x+8,y-1,7);
	putpixel(x+9,y-1,7);



	/*11 row*/


		putpixel(x-15,y,4);
		putpixel(x-14,y,4);
		putpixel(x-9,y,7);
		putpixel(x-8,y,7);
		putpixel(x-7,y,1);
		putpixel(x-6,y,1);
		putpixel(x-5,y,7);
		putpixel(x-4,y,7);
		putpixel(x-3,y,7);
		putpixel(x-2,y,7);
		putpixel(x-1,y,4);
		putpixel(x,y,4);
		putpixel(x+1,y,4);
		putpixel(x+2,y,7);
		putpixel(x+3,y,7);
		putpixel(x+4,y,7);
		putpixel(x+5,y,7);
		putpixel(x+6,y,1);
		putpixel(x+7,y,1);
		putpixel(x+8,y,7);
		putpixel(x+9,y,7);
		putpixel(x+14,y,4);
		putpixel(x+15,y,4);

	     /*row*/
		putpixel(x-15,y+1,4);
		putpixel(x-14,y+1,4);
		putpixel(x-9,y+1,7);
		putpixel(x-8,y+1,7);
		putpixel(x-7,y+1,4);
		putpixel(x-6,y+1,4);
		putpixel(x-5,y+1,7);
		putpixel(x-4,y+1,7);
		putpixel(x-3,y+1,7);
		putpixel(x-2,y+1,7);
		putpixel(x-1,y+1,4);
		putpixel(x,y+1,4);
		putpixel(x+1,y+1,4);
		putpixel(x+2,y+1,7);
		putpixel(x+3,y+1,7);
		putpixel(x+4,y+1,7);
		putpixel(x+5,y+1,7);
		putpixel(x+6,y+1,4);
		putpixel(x+7,y+1,4);
		putpixel(x+8,y+1,7);
		putpixel(x+9,y+1,7);
		putpixel(x+14,y+1,4);
		putpixel(x+15,y+1,4);



	/*12 row*/

		putpixel(x-15,y+2,4);
		putpixel(x-14,y+2,4);
		putpixel(x-9,y+2,1);
		putpixel(x-8,y+2,1);
		putpixel(x-7,y+2,7);
		putpixel(x-6,y+2,7);
		putpixel(x-5,y+2,7);
		putpixel(x-4,y+2,7);
		putpixel(x-3,y+2,4);
		putpixel(x-2,y+2,4);
		putpixel(x-1,y+2,4);
		putpixel(x,y+2,4);
		putpixel(x+1,y+2,4);
		putpixel(x+2,y+2,4);
		putpixel(x+3,y+2,4);
		putpixel(x+4,y+2,7);
		putpixel(x+5,y+2,7);
		putpixel(x+6,y+2,7);
		putpixel(x+7,y+2,7);
		putpixel(x+8,y+2,1);
		putpixel(x+9,y+2,1);
		putpixel(x+14,y+2,4);
		putpixel(x+15,y+2,4);


	/*13 row*/

		putpixel(x-15,y+3,7);
		putpixel(x-14,y+3,7);
		putpixel(x-9,y+3,7);
		putpixel(x-8,y+3,7);
		putpixel(x-7,y+3,7);
		putpixel(x-6,y+3,7);
		putpixel(x-5,y+3,7);
		putpixel(x-4,y+3,7);
		putpixel(x-3,y+3,4);
		putpixel(x-2,y+3,4);
		putpixel(x-1,y+3,7);
		putpixel(x,y+3,7);
		putpixel(x+1,y+3,7);
		putpixel(x+2,y+3,4);
		putpixel(x+3,y+3,4);
		putpixel(x+4,y+3,7);
		putpixel(x+5,y+3,7);
		putpixel(x+6,y+3,7);
		putpixel(x+7,y+3,7);
		putpixel(x+8,y+3,7);
		putpixel(x+9,y+3,7);
		putpixel(x+14,y+3,7);
		putpixel(x+15,y+3,7);


	/*14 row*/

		putpixel(x-15,y+4,7);
		putpixel(x-14,y+4,7);
		putpixel(x-11,y+4,7);
		putpixel(x-10,y+4,7);
		putpixel(x-9,y+4,7);
		putpixel(x-8,y+4,7);
		putpixel(x-7,y+4,7);
		putpixel(x-6,y+4,7);
		putpixel(x-5,y+4,7);
		putpixel(x-4,y+4,7);
		putpixel(x-3,y+4,7);
		putpixel(x-2,y+4,7);
		putpixel(x-1,y+4,7);
		putpixel(x,y+4,7);
		putpixel(x+1,y+4,7);
		putpixel(x+2,y+4,7);
		putpixel(x+3,y+4,7);
		putpixel(x+4,y+4,7);
		putpixel(x+5,y+4,7);
		putpixel(x+6,y+4,7);
		putpixel(x+7,y+4,7);
		putpixel(x+8,y+4,7);
		putpixel(x+9,y+4,7);
		putpixel(x+10,y+4,7);
		putpixel(x+11,y+4,7);
		putpixel(x+14,y+4,7);
		putpixel(x+15,y+4,7);


	/*15 row*/

	    putpixel(x-15,y+5,7);
		putpixel(x-14,y+5,7);
		putpixel(x-13,y+5,7);
		putpixel(x-12,y+5,7);
		putpixel(x-11,y+5,7);
		putpixel(x-10,y+5,7);
		putpixel(x-9,y+5,7);
		putpixel(x-8,y+5,7);
		putpixel(x-7,y+5,7);
		putpixel(x-6,y+5,7);
		putpixel(x-5,y+5,4);
		putpixel(x-4,y+5,4);
		putpixel(x-3,y+5,7);
		putpixel(x-2,y+5,7);
		putpixel(x-1,y+5,7);
		putpixel(x,y+5,7);
		putpixel(x+1,y+5,7);
		putpixel(x+2,y+5,7);
		putpixel(x+3,y+5,7);
		putpixel(x+4,y+5,4);
		putpixel(x+5,y+5,4);
		putpixel(x+6,y+5,7);
		putpixel(x+7,y+5,7);
		putpixel(x+8,y+5,7);
		putpixel(x+9,y+5,7);
		putpixel(x+10,y+5,7);
		putpixel(x+11,y+5,7);
		putpixel(x+12,y+5,7);
		putpixel(x+13,y+5,7);
		putpixel(x+14,y+5,7);
		putpixel(x+15,y+5,7);


	/*16 row*/

		 putpixel(x-15,y+6,7);
		putpixel(x-14,y+6,7);
		putpixel(x-13,y+6,7);
		putpixel(x-12,y+6,7);
		putpixel(x-11,y+6,7);
		putpixel(x-10,y+6,7);
		putpixel(x-9,y+6,0);
		putpixel(x-8,y+6,0);
		putpixel(x-7,y+6,4);
		putpixel(x-6,y+6,4);
		putpixel(x-5,y+6,4);
		putpixel(x-4,y+6,4);
		putpixel(x-3,y+6,7);
		putpixel(x-2,y+6,7);
		putpixel(x-1,y+6,7);
		putpixel(x,y+6,7);
		putpixel(x+1,y+6,7);
		putpixel(x+2,y+6,7);
		putpixel(x+3,y+6,7);
		putpixel(x+4,y+6,4);
		putpixel(x+5,y+6,4);
		putpixel(x+6,y+6,4);
		putpixel(x+7,y+6,4);
		putpixel(x+8,y+6,0);
		putpixel(x+9,y+6,0);
		putpixel(x+10,y+6,7);
		putpixel(x+11,y+6,7);
		putpixel(x+12,y+6,7);
		putpixel(x+13,y+6,7);
		putpixel(x+14,y+6,7);
		putpixel(x+15,y+6,7);


	/*17 row*/
		 putpixel(x-15,y+7,7);
		putpixel(x-14,y+7,7);
		putpixel(x-13,y+7,7);
		putpixel(x-12,y+7,7);
		putpixel(x-11,y+7,7);
		putpixel(x-10,y+7,7);
		putpixel(x-9,y+7,0);
		putpixel(x-8,y+7,0);
		putpixel(x-7,y+7,4);
		putpixel(x-6,y+7,4);
		putpixel(x-5,y+7,4);
		putpixel(x-4,y+7,4);
		putpixel(x-3,y+7,7);
		putpixel(x-2,y+7,7);
		putpixel(x-1,y+7,7);
		putpixel(x,y+7,7);
		putpixel(x+1,y+7,7);
		putpixel(x+2,y+7,7);
		putpixel(x+3,y+7,7);
		putpixel(x+4,y+7,4);
		putpixel(x+5,y+7,4);
		putpixel(x+6,y+7,4);
		putpixel(x+7,y+7,4);
		putpixel(x+8,y+7,0);
		putpixel(x+9,y+7,0);
		putpixel(x+10,y+7,7);
		putpixel(x+11,y+7,7);
		putpixel(x+12,y+7,7);
		putpixel(x+13,y+7,7);
		putpixel(x+14,y+7,7);
		putpixel(x+15,y+7,7);


	/*18 row*/
		 putpixel(x-15,y+8,7);
		putpixel(x-14,y+8,7);
		putpixel(x-13,y+8,7);
		putpixel(x-12,y+8,7);
		putpixel(x-11,y+8,0);
		putpixel(x-10,y+8,0);
		putpixel(x-9,y+8,0);
		putpixel(x-8,y+8,0);
		putpixel(x-7,y+8,4);
		putpixel(x-6,y+8,4);
		putpixel(x-5,y+8,4);
		putpixel(x-4,y+8,4);
		putpixel(x-3,y+8,0);
		putpixel(x-2,y+8,0);
		putpixel(x-1,y+8,7);
		putpixel(x,y+8,7);
		putpixel(x+1,y+8,7);
		putpixel(x+2,y+8,0);
		putpixel(x+3,y+8,0);
		putpixel(x+4,y+8,4);
		putpixel(x+5,y+8,4);
		putpixel(x+6,y+8,4);
		putpixel(x+7,y+8,4);
		putpixel(x+8,y+8,0);
		putpixel(x+9,y+8,0);
		putpixel(x+10,y+8,0);
		putpixel(x+11,y+8,0);
		putpixel(x+12,y+8,7);
		putpixel(x+13,y+8,7);
		putpixel(x+14,y+8,7);
		putpixel(x+15,y+8,7);


	/*19 row*/
		 putpixel(x-15,y+9,7);
		putpixel(x-14,y+9,7);
		putpixel(x-13,y+9,7);
		putpixel(x-12,y+9,7);
		putpixel(x-11,y+9,0);
		putpixel(x-10,y+9,0);
		putpixel(x-9,y+9,0);
		putpixel(x-8,y+9,0);
		putpixel(x-7,y+9,4);
		putpixel(x-6,y+9,4);
		putpixel(x-5,y+9,4);
		putpixel(x-4,y+9,4);
		putpixel(x-3,y+9,0);
		putpixel(x-2,y+9,0);
		putpixel(x-1,y+9,7);
		putpixel(x,y+9,7);
		putpixel(x+1,y+9,7);
		putpixel(x+2,y+9,0);
		putpixel(x+3,y+9,0);
		putpixel(x+4,y+9,4);
		putpixel(x+5,y+9,4);
		putpixel(x+6,y+9,4);
		putpixel(x+7,y+9,4);
		putpixel(x+8,y+9,0);
		putpixel(x+9,y+9,0);
		putpixel(x+10,y+9,0);
		putpixel(x+11,y+9,0);
		putpixel(x+12,y+9,7);
		putpixel(x+13,y+9,7);
		putpixel(x+14,y+9,7);
		putpixel(x+15,y+9,7);



	/*20 row*/
		 putpixel(x-15,y+10,7);
		putpixel(x-14,y+10,7);
		putpixel(x-13,y+10,0);
		putpixel(x-12,y+10,0);
		putpixel(x-11,y+10,0);
		putpixel(x-10,y+10,0);
		putpixel(x-9,y+10,0);
		putpixel(x-8,y+10,0);
		putpixel(x-7,y+10,0);
		putpixel(x-6,y+10,0);
		putpixel(x-5,y+10,0);
		putpixel(x-4,y+10,0);
		putpixel(x-3,y+10,0);
		putpixel(x-2,y+10,0);
		putpixel(x-1,y+10,7);
		putpixel(x,y+10,7);
		putpixel(x+1,y+10,7);
		putpixel(x+2,y+10,0);
		putpixel(x+3,y+10,0);
		putpixel(x+4,y+10,0);
		putpixel(x+5,y+10,0);
		putpixel(x+6,y+10,0);
		putpixel(x+7,y+10,0);
		putpixel(x+8,y+10,0);
		putpixel(x+9,y+10,0);
		putpixel(x+10,y+10,0);
		putpixel(x+11,y+10,0);
		putpixel(x+12,y+10,0);
		putpixel(x+13,y+10,0);
		putpixel(x+14,y+10,7);
		putpixel(x+15,y+10,7);


	/*21 row*/
			 putpixel(x-15,y+11,7);
		putpixel(x-14,y+11,7);
		putpixel(x-13,y+11,0);
		putpixel(x-12,y+11,0);
		putpixel(x-11,y+11,0);
		putpixel(x-10,y+11,0);
		putpixel(x-9,y+11,0);
		putpixel(x-8,y+11,0);
		putpixel(x-7,y+11,0);
		putpixel(x-6,y+11,0);
		putpixel(x-5,y+11,0);
		putpixel(x-4,y+11,0);
		putpixel(x-3,y+11,0);
		putpixel(x-2,y+11,0);
		putpixel(x-1,y+11,7);
		putpixel(x,y+11,7);
		putpixel(x+1,y+11,7);
		putpixel(x+2,y+11,0);
		putpixel(x+3,y+11,0);
		putpixel(x+4,y+11,0);
		putpixel(x+5,y+11,0);
		putpixel(x+6,y+11,0);
		putpixel(x+7,y+11,0);
		putpixel(x+8,y+11,0);
		putpixel(x+9,y+11,0);
		putpixel(x+10,y+11,0);
		putpixel(x+11,y+11,0);
		putpixel(x+12,y+11,0);
		putpixel(x+13,y+11,0);
		putpixel(x+14,y+11,7);
		putpixel(x+15,y+11,7);
}