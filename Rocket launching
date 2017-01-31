#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void rocket();
void text();
int gd=DETECT,gm,i,j,k;
void main()
{
text();
getch();
cleardevice();
rocket();
getch();
}

void text()
{
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
settextstyle(0,EMPTY_FILL,1);
setcolor(YELLOW);
outtextxy(50,50,"I");
outtextxy(50,60,"S");
outtextxy(50,70,"R");
outtextxy(50,80,"O");
settextstyle(0,EMPTY_FILL,2);
setcolor(BLUE);
outtextxy(100,50,"Indian Space");
outtextxy(100,70,"Research Organisation");
settextstyle(0,EMPTY_FILL,1);
setcolor(WHITE);
outtextxy(50,120,"WELCOME TO INDIAN SPACE REASERCH ORGANISATION.");
delay(150);
outtextxy(50,150,"TODAY 10-JULY-2015 PSLV - C28 IS READY TO LAUNCH.");
delay(150);
outtextxy(50,180,"IT CARRIES 5 SATELLITES TO DEPLOYE IN THE SUN-");
delay(150);
outtextxy(50,210,"SYNCHRONOUS ORBIT.");
delay(150);
setcolor(RED);
outtextxy(50,240,"LAUNCH MASS => 320,000 KG");
delay(150);
outtextxy(50,270,"PAYLOAD MASS => 1,440 KG");
delay(150);
outtextxy(50,300,"LAUNCH SITE => SATISH DHAWAN SPACE CENTER");
delay(150);
outtextxy(50,330,"DISTANCE TRAVELL => 647 KM");
delay(150);
outtextxy(50,360,"PAYLOAD => 3 DMCE Satellites, 1 CBNT-1 (Technology Demonstrator)");
delay(150);
outtextxy(50,390,"& 1 D-O (TD Nano Satellite)");
delay(150);
outtextxy(50,420,"SO... COUNTDOWN IS BEGIN");
delay(150);
outtextxy(50,450,"ENTER TO CONTINUE");
delay(150);
}

void rocket()
{
setcolor(BLUE);
 //earth
    for(i=30;i<=400;i++)
    {
setcolor(BLUE);

arc(500-i,200+i,0,120,200);
arc(500-i,200+i,0,120,300);
arc(500-i,200+i,0,120,400);
arc(500-i,200+i,0,120,500);
setcolor(GREEN);
outtextxy(318,330-i,"P");
outtextxy(318,340-i,"S");
outtextxy(318,350-i,"L");
outtextxy(318,360-i,"V");
outtextxy(310,385-i,"C28");
//rocket
setcolor(WHITE );
outtextxy(10,400+i,"EARTH");
for(j=0;j<=7;j++)
{
setcolor(RED);
circle(320,300-i,0+j);
}
for(k=0;k<=15;k++)
{
setcolor(YELLOW);
circle(300,410-i,0+k);
circle(340,410-i,0+k);
circle(320,410-i,0+k);
circle(280,410-i,0+k);
circle(360,410-i,0+k);
}
setcolor(WHITE);
line(0,420+i,620,420+i);
line(340,400-i,340,320-i);
line(300,400-i,300,320-i);
line(330,370-i,330,330-i);
line(310,370-i,310,330-i);
line(310,330-i,330,330-i);
line(310,370-i,330,370-i);
line(300,380-i,340,380-i);
line(270,400-i,370,400-i);
line(270,400-i,300,380-i);
line(340,380-i,370,400-i);
line(300,320-i,340,320-i);
line(300,320-i,320,300-i);
line(340,320-i,320,300-i);
delay(50);
cleardevice();
}
setcolor(GREEN);
settextstyle(0,EMPTY_FILL,5);
outtextxy(50,100,"CONGRATULATIONS");
outtextxy(50,200,"MISSION");
outtextxy(50,300,"SUCCESSFUL");
getch();
}

