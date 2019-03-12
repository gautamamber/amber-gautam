#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
int gd=DETECT,gm;
void front();
void questions();
void last();
int score=0;
char a;
void main()
{
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
front();
getch();
cleardevice();
questions();
getch();
cleardevice();
last();
getch();
}
void front()
{
setcolor(30);
settextstyle(0,EMPTY_FILL,5);
outtextxy(110,20,"QUIZ TIME");
setcolor(60);
settextstyle(0,EMPTY_FILL,1);
outtextxy(50,100,"Hey guys... Its a simple general knowledge quiz for");
outtextxy(50,130,"checking your IQ. This quiz contains 15 simple questions.");
outtextxy(50,160,"Each question carry 10 points.");
outtextxy(200,200,"ABOVE 130 == GENIUS");
outtextxy(200,230,"110 - 130 == EXCELLENT");
outtextxy(200,260,"90  - 110 == V. GOOD");
outtextxy(200,290,"70  - 90  == AVERAGE");
outtextxy(200,320,"BELOW 70  == TRY NEXT TIME");
setcolor(BLUE);
outtextxy(200,400,"Made by: Amber Guatam");
outtextxy(270,420,"B.tech(cse) 2nd year");
setcolor(GREEN);
outtextxy(0,430,"ENTER TO CONTINUE...");
}
void questions()
{
clrscr();
setcolor(89);
settextstyle(0,EMPTY_FILL,5);
outtextxy(90,20,"LETS START...");
printf("\n\n\n\n\n\nWho was known as Iron man of India?");
printf("\nA.	Govind Ballabh Pant");
printf("\nB.	Jawaharlal Nehru");
printf("\nC.	Subhash Chandra Bose");
printf("\nD.	Sardar Vallabhbhai Patel");
printf("\nYour ans is :- ");
scanf("%s",&a);
printf("=============================================================================");
if(a=='d'||a=='D')
{
score=score+10;
 }
printf("\n'OS' computer abbreviation usually means ?");
printf("\nA.	Order of Significance");
printf("\nB.	Open Software");
printf("\nC.	Operating System");
printf("\nD.	Optical Sensor");
printf("\nYour ans is :- ");
scanf("%s",&a);
printf("=============================================================================");
if(a=='c'||a=='C')

score=score+10;
printf("\nEntomology is the science that studies");
printf("\nA.	Behavior of human beings");
printf("\nB. 	Insects");
printf("\nC.	The origin and history of technical and scientific terms");
printf("\nD.	The formation of rocks");
printf("\nYour ans is :- ");
scanf("%s",&a);
printf("=============================================================================");
if(a=='b'||a=='B')
score=score+10;

printf("\nThe members of the Rajya Sabha are elected by");
printf("\nA.	the people");
printf("\nB.	Lok Sabha");
printf("\nC.	elected members of the legislative assembly");
printf("\nD.	elected members of the legislative counci");
printf("\nYour ans is :- ");
scanf("%s",&a);
printf("=============================================================================");
if(a=='c'||a=='C')
score=score+10;
printf("\nThe present Lok Sabha is the");
printf("\nA.	13th Lok Sabha");
printf("\nB.	14th Lok Sabha");
printf("\nC.	15th Lok Sabha");
printf("\nD.*	16th Lok Sabha");
printf("\nYour ans is :- ");
scanf("%s",&a);
printf("=============================================================================");
if(a=='d'||a=='D')
score=score+10;
printf("\nWhich of the following is used in pencils?");
printf("\nA.	Graphite");
printf("\nB.	Silicon");
printf("\nC.	Charcoal");
printf("\nD.	Phosphorous");
printf("\nYour ans is :- ");
scanf("%s",&a);
printf("=============================================================================");
if(a=='a'||a=='A')
score=score+10;

printf("\nWhich of the following metals forms an amalgam with other metals?");
printf("\nA.	Tin");
printf("\nB.	Mercury");
printf("\nC.	Lead");
printf("\nD.	Zinc");
printf("\nYour ans is :- ");
scanf("%s",&a);
printf("=============================================================================");
if(a=='b'||a=='B')
score=score+10;
printf("\nThe Indian Institute of Science is located at");
printf("\nA.	Kerala");
printf("\nB.	Madras");
printf("\nC.	Bangalore");
printf("\nD.	New Delhi");
printf("\nYour ans is :- ");
scanf("%s",&a);
printf("=============================================================================");
if(a=='c'||a=='C')
score=score+10;
printf("\nWhich city is known as 'Electronic City of India'?");
printf("\nA.	Mumbai");
printf("\nB.	Hyderabad");
printf("\nC.	Guragon");
printf("\nD.    Bangalore");
printf("\nYour ans is :- ");
scanf("%s",&a);
printf("=============================================================================");
if(a=='d'||a=='D')
score=score+10;
printf("\nWho is the first Asian Winner of Nobel Prize?");
printf("\nA.	C. V. Raman");
printf("\nB.	Rajiv Gandhi");
printf("\nC.	Rabindranath Tagore");
printf("\nD.	Mother Teresa");
printf("\nYour ans is :- ");
scanf("%s",&a);
printf("=============================================================================");
if(a=='c'||a=='D')
score=score+10;

printf("\nThe first Indian to receive Noble Prize in Literature was");
printf("\nA.	Mother Teresa");
printf("\nB.	C. V. Raman");
printf("\nC.    Rabindranath Tagore");
printf("\nD.	Sarojini Naidu");
printf("\nYour ans is :- ");
scanf("%s",&a);
printf("=============================================================================");
if(a=='c'||a=='C')
score=score+10;
printf("\nWhich two counties did Anil Kumble play for?");
printf("\nA.	Nottinghamshire & Lancashire");
printf("\nB.	Nottinghamshire & Leicestershire");
printf("\nC. 	Northamptonshire & Leicestershire");
printf("\nD.	Northamptonshire & Lancashire");
printf("\nYour ans is :- ");
scanf("%s",&a);
printf("=============================================================================");
if(a=='c'||a=='C')
score=score+10;
printf("\nIndia won its first Olympic hockey gold in...?");
printf("\nA.    1928");
printf("\nB.	1932");
printf("\nC.	1936");
printf("\nD.	1948");
printf("\nYour ans is :- ");
scanf("%s",&a);
printf("=============================================================================");
if(a=='a'||a=='A')
score=score+10;

printf("\nCarbon, diamond and graphite are together called");
printf("\nA.	allotropes");
printf("\nB.	isomers");
printf("\nC.	isomorphs");
printf("\nD.	isotopes");
printf("\nYour ans is :- ");
scanf("%s",&a);
printf("=============================================================================");
if(a=='a'||a=='A')
score=score+10;

printf("\nThe famous Dilwara Temples are situated in");
printf("\nA.	Uttar Pradesh");
printf("\nB.	Rajasthan");
printf("\nC.	Maharashtra");
printf("\nD.	Madhya Pradesh");
printf("\nYour ans is :- ");
scanf("%s",&a);
printf("=============================================================================");
if(a=='b'||a=='B')
score=score+10;
printf("\nYour final score is %d:- ",score);
}
void last()
{
setcolor(BLUE);
settextstyle(0,EMPTY_FILL,3);
outtextxy(120,200,"THNXX FOR PLAYING!!!");
while(!kbhit())
{
putpixel(rand()%700,rand()%700,RED);
putpixel(rand()%700,rand()%700,YELLOW);
delay(1);
}
}
