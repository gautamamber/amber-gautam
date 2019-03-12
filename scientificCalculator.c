#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#define PI 3.14
#include<stdlib.h>
long int a,c,d,e[100],i,fact=1,t,sub,sum=0,x;
float root1,root2,b,f,g;
double h,j;
void main()
{
clrscr();

cout<<"\n"<<"               ***************SCIENTIFIC CALCULATOR*************"<<"\n";

delay(1000);
 do
 {
cout<<"\n"<<"\t"<<"1. Arithmetic Operations"
<<"\n"<<  "\t"<<"2. Trignometric functions"
<<"\n"<<  "\t"<<"3. Lograthmic functions"
<<"\n"<<  "\t"<<"4. Power functions "
<<"\n"<<  "\t"<<"5. Hyperbolic functions"
<<"\n"<<  "\t"<<"6. Factorial"
<<"\n"<<  "\t"<<"7. Roots of quadratic eqn. "
<<"\n"<<  "\t"<<"8. Exit";
cout<<"\n"<<"--------------------------------------------------------------------------------";
cout<<"\n\n";

cout<<"\n"<<"ENTER YOUR CHOICE\t";
cin>>a;
switch(a)
{

case 1:
cout<<"\n"<<"\t"<<"1.Addition(+)";
cout<<"\n"<<"\t"<<"2.Subtraction(-)";
cout<<"\n"<<"\t"<<"3.Multiplication(*)";
cout<<"\n"<<"\t"<<"4.Division(/)";
cout<<"\n"<<"--------------------------------------------------------------------------------";

cout<<"\n"<<"Enter your choice ";
cin>>c;
if (c==1)
{
cout<<"\n"<<"How much no you want to print ";
cin>>a;

cout<<"\n"<<"Enter the no  ";
for(b=0;b<a;b++)
cin>>e[b];

for(b=0;b<a;b++)
{
	 sum=sum+e[b];
}
cout<<"\n"<<"Sum = "<<sum;
cout<<"\n"<<"--------------------------------------------------------------------------------";

}

else if(c==2)
{

cout<<"\n"<<"Enter the 1st no ";
cin>>a;
cout<<"\n"<<"Enter the 2nd no ";
cin>>d;
sub=a-d;

cout<<"\n"<<"Sububtraction = "<<sub;
cout<<"\n"<<"--------------------------------------------------------------------------------";
break;
	 }
else if(c==3)
{
cout<<"\n"<<"Enter the first no. ";
cin>>a;
cout<<"\n"<<"Enter the second no. ";
cin>>c;
d=a*c;
cout<<"\n"<<"Answer = "<<d;
cout<<"\n"<<"--------------------------------------------------------------------------------";
break;
}
 else if(c==4)
 {
cout<<"\n"<<"Enter the no ...  like a/b";
cin>>b>>f;

g=b/f;
cout<<"\n"<<"Division = "<< g;
cout<<"\n"<<"--------------------------------------------------------------------------------";
break;
}
else
{
cout<<"\n"<<"INVALID CHOICE";
}
break;
case 2: cout<<"\n"<<"1. sinx";
cout<<"\n"<<"2. cosx";
cout<<"\n"<<"3. tanx";
cout<<"\n"<<"--------------------------------------------------------------------------------";
cout<<"\n"<<"Enter your choice ";
cin>>c;
if (c==1)
{
cout<<"\n"<<"Enter angle";
cin>>h;
j=sin(h*PI/180);
cout<<"\n"<<"sin"<<h<<" = "<<j;
cout<<"\n"<<"--------------------------------------------------------------------------------";
break;
}
else if (c==2)
{
cout<<"\n"<<"Enter angle ";
cin>>h;
j=cos(h*PI/180);
cout<<"\n"<<"cos"<<h<<" = "<<j;
cout<<"\n"<<"--------------------------------------------------------------------------------";
break;
}
else if (c==3)

{
cout<<"\n"<<"Enter angle ";
cin>>h;
j=tan(h*PI/180);
cout<<"\n"<<"tan"<<h<<" = "<<j;
cout<<"\n"<<"--------------------------------------------------------------------------------";
break;
}
else
{
cout<<"\n"<<"INVALID CHOICE ";
cout<<"\n"<<"--------------------------------------------------------------------------------";

}
break;
case 3: cout<<"\n"<<"1. log10 ";
cout<<"\n"<<"2. log ";
cout<<"\n"<<"Enter your choice ";
cin>>a;
if(a==1)
{
cout<<"\n"<<"Enter no.";
cin>>h;
f=log10(h);
cout<<"\n"<<"log10"<<h<<" = "<<f;
break;
}

else
 if (a==2)
{
cout<<"\n"<<" ln";
cout<<"\n"<<"Enter no. ";
cin>>f;
g=log(f);
cout<<"\n"<<"ln"<<f<<" = "<<g;
break;
cout<<"\n"<<"--------------------------------------------------------------------------------";

}
break;
case 4:
cout<<"\n"<<"1. Square (x^2) ";
cout<<"\n"<<"2. Cube   (x^3) ";
cout<<"\n"<<"3. Square root ";
cout<<"\n"<<"4. Cube root ";
cout<<"\n"<<"5. Power ";
cout<<"\n"<<"--------------------------------------------------------------------------------";
cout<<"\n"<<"Enter your choice ";
cin>>t;
if(t==1)
{
cout<<"\n"<<"Enter value ";
cin>>b;

c=b*b;
cout<<c;
cout<<"\n"<<"--------------------------------------------------------------------------------";
 break;
 }
 else if(t==2)
 {

 cout<<"\n"<<"Enter value ";
cin>> b;

c=b*b*b;
cout<<c;
cout<<"\n"<<"--------------------------------------------------------------------------------";
break;
}

else if(t==3)
{
cout<<"\n"<<"Enter  value ";
cin>>a;

b=sqrt(a);
cout<<b;
cout<<"\n"<<"--------------------------------------------------------------------------------";
 break;
}
else if (t==4)
{
cout<<"\n"<<"Enter  no ";
cin>>h;
j=pow(h,(1.0/3.0));

cout<<"\n"<<j;
 break;
}

else if(t==5)
{
cout<<"\n"<<"Enter no ";
cin>>a;
cout<<"\n"<<"enter power ";
cin>>b;
d=pow(a,b);

cout<<"\n"<<d;
cout<<"\n"<<"--------------------------------------------------------------------------------";

}
else
{
cout<<"\n"<<"INVALID CHOICE";
cout<<"\n"<<"--------------------------------------------------------------------------------";

} break;
case 5:
cout<<"\n"<<"1. Sinhx ";
cout<<"\n"<<"2. Coshx ";
cout<<"\n"<<"3. Tanhx ";
cout<<"\n"<<"--------------------------------------------------------------------------------";
cout<<"\n"<<"Enter your choice ";
cin>>a;
if (a==1)
{
cout<<"\n"<<"Enter no ";
cin>>h;
h=log(2.0);
j=sinh(h);
cout<<"\n"<<j;
cout<<"\n"<<"--------------------------------------------------------------------------------";
break;
}
else if (a==2)
{
cout<<"\n"<<"Enter  no ";
cin>>h;
h=log(2.0);
j=cosh(h);
cout<<"\n"<<j;
cout<<"\n"<<"--------------------------------------------------------------------------------";
break;
}
else if (a==3)
{
cout<<"\n"<<"Enter  no ";
cin>>h;
h=log(2.0);
j=tanh(h);
cout<<"\n"<<j;
cout<<"\n"<<"--------------------------------------------------------------------------------";
break;
}
else
{
cout<<"\n"<<"INVALID CHOICE";
}
break;
case 6:
{
cout<<"\n"<<"Enter no ";
cin>>a;

for(i=a;i>=1;i--)
fact=fact*i;
cout<<"\n"<<a<<"!"<<" = "<<fact;
cout<<"\n"<<"--------------------------------------------------------------------------------";

}
break;
case 7:
{
cout<<"\n"<<"Enter the value of a , b , c of eqn. ax^2+bx+c ";
cin>>a>>b>>c;

d=b*b-4*a*c;
if (d>0)
{
root1=(-b+sqrt(d))/(2*a);
root2= (-b-sqrt(d))/(2*a);
cout<<"\n"<<"roots are real or unequal";
cout<<"\n"<<"root 1 = "<<root1;
cout<<"\n"<<"root 2 = "<<root2;

}
else if (d==0)
{
root1=-b/(2*a);
cout<<"\n"<<"roots are real and equal";
cout<<"\n"<<"root 1 = "<<root1;
cout<<"\n"<<"root 2 = "<<root1;

}
else
cout<<"\n"<<"roots are complex and imaginary";
cout<<"\n"<<"--------------------------------------------------------------------------------";

} break;
case 8:
{
exit(0);
}
break;
default:
cout<<"\n"<<"invalid choice";
}
cout<<"\n"<<"Press any to continue...";
cin>>x;
}
while(x!='0');

getch();
}
