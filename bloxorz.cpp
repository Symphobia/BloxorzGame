#include<conio.h>
#include<math.h>
#include"graphics.h"

int alan();

int main()
{    
	 
     int x1=50,y1=50,x2=100,y2=100,d=10, k=1;
	 int i=0;
     int ek=50;
     char tus;
	 char hrkt[20];

     initwindow(1000,600);   

     setcolor(WHITE);
	 alan();
	 bar3d(x1,y1,x2,y2,d,k);
	 
     while(1)
     {            
         tus = getch();
         if(tus==27) exit(0);
             else 
             {  setcolor(WHITE);
                alan();
				bar3d(x1,y1,x2,y2,d,k);
				cleardevice();
          		   
if (tus==77) {
	i++;
	if(x2-x1==50&&y2-y1==50) {
		x1+=ek;
		x2+=100;
		cleardevice();
		alan(); }
	else if (x2-x1==100&&y2-y1==50) {
		x1+=100;
		x2+=ek;
		cleardevice();
		alan();
	} 
	else if (y2-y1==100&&x2-x1==50) {
		x1+=ek;
		x2+=ek;
		cleardevice();
		alan();
	}
}
if (tus==75) {
	i++;
	if(x2-x1==50&&y2-y1==50) {
		x1-=100;
		x2-=ek;
		cleardevice();
		alan(); }
	else if (x2-x1==100&&y2-y1==50) {
		x1-=ek;
		x2-=100;
		cleardevice();
		alan();
	} 
	else if (y2-y1==100&&x2-x1==50) {
		x1-=ek;
		x2-=ek;
		cleardevice();
		alan();
	}
}
if (tus==72) {
	i++;
	if(y2-y1==50&&x2-x1==50) {
		y1-=100;
		y2-=ek;
		cleardevice();
		alan(); }
	else if (y2-y1==100&&x2-x1==50) {
		y1-=ek;
		y2-=100;
		cleardevice();
		alan();
	} 
	else if (x2-x1==100&y2-y1==50) {
		y1-=ek;
		y2-=ek;
		cleardevice();
		alan();
	}
}
if (tus==80) {
	i++;
	if(y2-y1==50&&x2-x1==50) {
		y1+=ek;
		y2+=100;
		cleardevice();
		alan(); }
	else if (y2-y1==100&&x2-x1==50) {
		y1+=100;
		y2+=ek;
		cleardevice();
		alan();
	} 
	else if (x2-x1==100&&y2-y1==50) {
		y1+=ek;
		y2+=ek;
		cleardevice();
		alan();
	}
}

                  setcolor(WHITE);
                   
				   alan();
				   bar3d(x1,y1,x2,y2,d,k);
              }

			  // Kazanma/Kaybetme
			  if (x1==400&&x2==450&&y1==200&&y2==250) {
				  cleardevice();
				  
				  x1=100;
				  x2=150;
				  y1=100;
				  y2=150;
				  alan();
				  bar3d(x1,y1,x2,y2,d,k);
				  outtextxy(800,200, "You win!");
				  sprintf(hrkt, "Moves: %d", i);
				  outtextxy(800, 220, hrkt);
				  i=0;
			  }
			  if(x1<50||y1<50) {
				  cleardevice();
				  x1=100;
				  x2=150;
				  y1=100;
				  y2=150;
				  i=0;
				  alan();
				  bar3d(x1,y1,x2,y2,d,k);
				  outtextxy(800,200, "You lose!");
			  }
			  if (x1==50&&y2==250) {
				  cleardevice();
				  x1=100;
				  x2=150;
				  y1=100;
				  y2=150;
				  i=0;
				  alan();
				  bar3d(x1,y1,x2,y2,d,k);
				  outtextxy(800,200, "You lose!"); }
				  

			  if (x2>199&&y2<101) {
				  cleardevice();
				  x1=100;
				  x2=150;
				  y1=100;
				  y2=150;
				 i=0;
				  alan();
				  bar3d(x1,y1,x2,y2,d,k);
				  outtextxy(800,200, "You lose!"); }
			  if(x2>399&&y2<151) {
				  cleardevice();
				  x1=100;
				  x2=150;
				  y1=100;
				  y2=150;
				  i=0;
				  alan();
				  bar3d(x1,y1,x2,y2,d,k);
				  outtextxy(800,200, "You lose!"); }
			  if (x1>99&&x1<300&&y2>250) {
				  cleardevice();
				  x1=100;
				  x2=150;
				  y1=100;
				  y2=150;
				 i=0;
				  alan();
				  bar3d(x1,y1,x2,y2,d,k);
				  outtextxy(800,200, "You lose!"); }
			  if(x2>550) {
				  cleardevice();
				  x1=100;
				  x2=150;
				  y1=100;
				  y2=150;
				 i=0;
				  alan();
				  bar3d(x1,y1,x2,y2,d,k);
				 outtextxy(800,200, "You lose!"); }
			  if(299<x1<351&&y1>299) {
				  cleardevice();
				  x1=100;
				  x2=150;
				  y1=100;
				  y2=150;
				 i=0;
				  alan();
				  bar3d(x1,y1,x2,y2,d,k);
				  outtextxy(800,200, "You lose!"); }
			  if(199<x1<301&&y1<100) {
				  cleardevice();
				  x1=100;
				  x2=150;
				  y1=100;
				  y2=150;
				 i=0;
				  alan();
				  bar3d(x1,y1,x2,y2,d,k);
				  outtextxy(850,200, "You lose!"); }
			  if (x1==500&&x2==550&&y1==150&&y2==250) {
				  cleardevice();
				  x1=100;
				  x2=150;
				  y1=100;
				  y2=150;
				 i=0;
				  alan();
				  bar3d(x1,y1,x2,y2,d,k);
				  outtextxy(850,200, "You lose!"); }



			  // Kazanma/Kaybetme
     }

    closegraph();
return 0;
}

int alan() {

readimagefile("background1.jpg", 0,0,1000,600);

return 0;

}
