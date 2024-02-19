
#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
float amount;
float value(float p,int t,float r=1.5);
amount=value(5000.00,3);
cout<<"Total amount="<<amount;
getch();
return(0);
}
float value(float p,int t,float r)
{
float sum;
sum=(p*r*t)/100;
return(sum);
}