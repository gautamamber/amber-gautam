#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void cname();
void logo();
void about();
void tag();
void facility();
void information();
void details_fill();
void payment();
void details_check();
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
cname();
logo();
getch();
cleardevice();
cname();
about();
getch();
cleardevice();
cname();
tag();
facility();
getch();
cleardevice();
information();
getch();
}
void cname()
{
settextstyle(0,EMPTY_FILL,2);
setcolor(RED);
outtextxy(80,200,"Life begins at the end of your");
outtextxy(200,230,"comfort zone");
settextstyle(0,EMPTY_FILL,5);
setcolor(YELLOW);
outtextxy(180,50,"GAUTAM");
outtextxy(50,120,"TOUR N TRAVELS");
rectangle(150,30,450,100);
rectangle(30,100,620,180);
}
void logo()
{

setcolor(WHITE);
circle(50,380,20);
circle(170,380,20);
// inside
line(0,380,25,380);
line(195,380,250,380);
line(75,380,145,380);
//front
line(250,380,250,340);
//back
line(0,380,0,340);
//roof
line(0,340,40,310);
line(40,310,160,310);
line(160,310,250,340);
//window 1
line(10,340,40,340);
line(40,320,40,340);
line(10,340,40,320);
//window 2
line(45,320,45,340);
line(155,320,155,340);
line(45,340,155,340);
line(45,320,155,320);
//window 3
line(160,320,160,340);
line(160,340,230,340);
line(160,320,230,340);
//bus
line(330,270,590,270);
line(330,270,330,380);
line(590,270,590,380);
line(330,380,355,380);
line(405,380,515,380);
line(565,380,590,380);
rectangle(350,280,390,320);
rectangle(410,280,450,320);
rectangle(470,280,510,320);
rectangle(530,280,570,320);
circle(380,380,20);
circle(540,380,20);
setcolor(BLUE);
settextstyle(0,EMPTY_FILL,1);
outtextxy(10,440,"Enter to continue...");
}
void about()
{
settextstyle(0,EMPTY_FILL,1.5);
setcolor(WHITE);
outtextxy(10,300,"Contact:");
line(10,310,70,310);
outtextxy(10,330,"Name: Amber gautam");
outtextxy(10,350,"Contact No. 8059360629");
outtextxy(10,370,"Address: Office no. 52 sec 5 ");
outtextxy(10,390,"Rewari (Haryana)");
outtextxy(10,410,"E-mail: ambergautam1@gmail.com");
//BRANCES
outtextxy(450,300,"Branches:");
line(450,310,520,310);
outtextxy(450,330,"Rewari:   01274-253060");
outtextxy(450,350,"Gurgaon:  0124-235478");
outtextxy(450,370,"Delhi:    011-6347593");
outtextxy(450,390,"Jaipur:   099-6573839");
outtextxy(450,410,"Mathura:  0124-235478");
setcolor(BLUE);
outtextxy(10,440,"Enter to continue...");
}
void tag()
{
settextstyle(0,EMPTY_FILL,1);
setcolor(GREEN);
outtextxy(20,270,"India's leading travel brand                     Best price guarantee");
}
void facility()
{
settextstyle(0,EMPTY_FILL,2);
setcolor(RED);
outtextxy(200,300,"OUR FACITIES");
settextstyle(0,EMPTY_FILL,1);
setcolor(BLUE);
outtextxy(120,350,"Vichels");
line(120,360,175,360);
setcolor(WHITE);
outtextxy(50,370,"Scorpio");
outtextxy(50,390,"Qualis");
outtextxy(50,410,"Bolero");
outtextxy(50,430,"Traveller");
outtextxy(50,450,"Verna");
outtextxy(50,470,"Volvo bus");
outtextxy(170,370,"Wagonr");
outtextxy(170,390,"Tata Sumo");
outtextxy(170,410,"Tavera");
outtextxy(170,430,"Innova");
outtextxy(170,450,"Ertiga");
outtextxy(170,470,"Eeco");
setcolor(BLUE);
outtextxy(370,350,"Cities");
line(370,360,415,360);
setcolor(WHITE);
outtextxy(320,370,"Goa");
outtextxy(320,390,"Mumbai");
outtextxy(320,410,"Delhi");
outtextxy(320,430,"Haridwar");
outtextxy(320,450,"Shimla");
outtextxy(320,470,"Manali");
outtextxy(440,370,"Jammu & Kashmir");
outtextxy(440,390,"Kerala");
outtextxy(440,410,"Gujrat");
outtextxy(440,430,"Dehradun");
outtextxy(440,450,"Shirdi");
outtextxy(440,470,"Jaipur");
}
void information()
{
int i;
char b;
do
{
printf("\n 1. Enter details...");
printf("\n 2. Check details...");
printf("\n 3. Payment...");
printf("\n Enter your choice...");
scanf("\n%d",&i);
switch(i)
{
case 1:
details_fill();
printf("\n===============================================================");
break;
case 2:
details_check();
printf("\n===============================================================");
break;
case 3:
payment();
printf("\n=================================================================");
break;
default:
printf("\n Invalid choice... ");
printf("\n==============================================================");
}
printf("\n Enter 'y' OR 'Y' to continue...");
scanf("\n%s",&b);
}
while(b=='y'||b=='Y');
}
void details_fill()
{
FILE *fptr;
char name[20];
int age;
float salary;
char vichel[20];
char city[20];
int members;
fptr = fopen("gautam.txt", "w");
if (fptr == NULL)
{
printf("\nFile does not exists \n");
}
printf("Enter the name \n");
scanf("\n%s", name);
fprintf(fptr,"Name      = %s\n",name);
printf("Enter the age\n");
scanf("\n%d", &age);
fprintf(fptr,"Age       = %d\n",age);
printf("Enter the vichel \n");
scanf("\n%s", vichel);
fprintf(fptr,"Vichel    = %s\n",vichel);
printf("Enter the city \n");
scanf("\n%s", city);
fprintf(fptr,"City      = %s\n", city);
printf("Enter the no. of members\n");
scanf("\n%d", &members);
fprintf(fptr,"Members   = %d\n",members);
printf("\nYour details are successfully registered\n");
fclose(fptr);
}
void details_check()
{
FILE *fptr;
char filename[15];
char ch;
printf("\nEnter the filename to be open...");
scanf("\n%s", filename);
fptr = fopen(filename, "r");
if (fptr == NULL)
{
printf("Cannot open file \n");
}
ch = fgetc(fptr);
while (ch != EOF)
{
printf ("%c", ch);
ch = fgetc(fptr);
}
fclose(fptr);
}
void payment()
{
FILE *fptr;
char name[20];
long int  cardno;
int cvv;
int pin;
clrscr();
fptr = fopen("hello.txt", "w");
if (fptr == NULL)
{
printf("File does not exists \n");

}
printf("Enter the name \n");
scanf("\n%s", name);
fprintf(fptr,"Name  = %s\n", name);
printf("Enter the cardno\n");
scanf("\n%ld", &cardno);
fprintf(fptr,"Your card no:  = %ld\n", cardno);
printf("Enter the cvv \n");
scanf("\n%d", &cvv);
fprintf(fptr,"Your cvv is:  = %d\n", cvv);
printf("Enter the pin\n");
scanf("\n%d", pin);
fprintf(fptr,"Your pin is:  = %d\n", pin);
printf("\n Your transaction is being proceed");
delay(10);
printf("\t.");
delay(10);
printf("\t.");
delay(10);
printf("\t.");
delay(10);
printf("\n\n transaction completed");
delay(10);
printf("\n\n NOTE : your details are keep in private");
fclose(fptr);
}
