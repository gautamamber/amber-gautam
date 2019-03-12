#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
#include<stdlib.h>
void main()
{
{

int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");

setcolor(GREEN);
settextstyle(0,EMPTY_FILL,5);
outtextxy(1,50,"LOVE CALCULATOR");
setcolor(BLUE);
settextstyle(0,EMPTY_FILL,2);
outtextxy(0,150,"CALCULATE");
delay(200);
outtextxy(160,150,"YOUR");
delay(200);
outtextxy(250,150,"LOVE");
delay(200);
outtextxy(330,150,"WITH");
delay(200);
outtextxy(410, 150,"YOUR");
delay(200);
outtextxy(500,150,"PARTNER");
delay(200);
 {
settextstyle(0,EMPTY_FILL,3);
setcolor(RED);
outtextxy(40,250,"1.BY NAME    2.BY DATE");
outtextxy(40,300,"               OF BIRTH");
delay(1000);
 }}
 settextstyle(0,EMPTY_FILL,1);
setcolor(YELLOW);
outtextxy(0,400,"ENTER YOUR CHOICE IN TERMS OF 1 OR 2");
outtextxy(0,450,"PRESS ENTER TO CONTINUE ");

getch();
cleardevice();
   int a=0;
int b=0;
int e=0;
int f=0;
int len1,len2,s,i,c,d,t,rem1,rem2,rem3,rem4,x,y,z;
int date,year;
int date1,year1;
float p,p2;
char name[20];
char pname[20];
char month[20];
char month1[20];
char n;

clrscr();

cout<<"\n"<<"\n"<<" WELCOME TO LOVE CALCULATOR...";
cout<<"\n"<<"\n"<<" CALCULATE YOUR LOVE WITH YOUR PARTNER...";
cout<<"\n"<<"\n"<<" ACCORDING TO....";
cout<<"\n"<<"\n"<<" 1.NAME "<<"\n"<<" 2.DATE OF BIRTH(DOB)"<<"\n"<<" 3.EXIT";
do
{
cout<<"\n"<<"\n"<<" ENTER YOUR CHOICE...";
cin>>i;
switch(i)
{
case 1:
cout<<"\n"<<"\n"<<" ENTER YOUR NAME... ";
cin>>name;
cout<<"\n"<<"\n"<<" ENTER YOUR PARTNER NAME... ";
cin>>pname;

len1=strlen(name);
len2=strlen(pname);
s=len1+len2;
p=(s*100)/15;
delay(1000);
cout<<"\n"<<" .";
delay(1000);
cout<<" .";
delay(1000);
cout<<" .";
delay(1000);
sleep(2);
delline();
cout<<"\n"<< p<<"%";
cout<<"\n\n"<<"---------------------------------------------------------------------------";

break;

case 2:
cout<<"\n"<<"\n"<<" ENTER YOUR DATE OF BIRTH(DATE/MONTH/YEAR... ";
cin>>date>>month>>year;
len1=strlen(month);
while(year)
{
rem1=year%10;
year=year/10;
a=a+rem1;
}
while(date)
{
rem2=date%10;
date=date/10;
b=b+rem2;
}
x=len1+a+b;

cout<<"\n"<<"\n"<<" ENTER YOUR PARTNER'S DATE OF BIRTH(DATE/MONTH/YEAR... ";
cin>>date1>>month1>>year1;
len2=strlen(month1);
while(year1)
{
rem3=year1%10;
year1=year1/10;
e=e+rem3;
}
while(date1)
{
rem4=date1%10;
date1=date1/10;
f=f+rem4;
}
y=len2+e+f;

z=x+y;
p2=(z*100)/90;
delay(1000);
cout<<"\n"<<" .";
delay(1000);
cout<<" .";
delay(1000);
cout<<" .";
delay(1000);
sleep(2);
delline();
cout<<"\n\n"<< p2<<"%";
cout<<"\n\n"<<"------------------------------------------------------------------------------";

break;
case 3:
exit(0);
cout<<"\n\n"<<"------------------------------------------------------------------------------";

break;
default:
cout<<"\n\n"<<" INVALID CHOICE...";
}
cout<<"\n\n"<<"PRESS ANY KEY TO CONTINUE...";
cin>>n;
}
while(n!='0');
getch();
}
