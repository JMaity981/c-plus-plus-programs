#include<iostream.h>
#include<conio.h>
#include<math.h>
class number
{
   int a,b,x;
   number()
   {
     a=5;
     b=10;
   }
void operator^()
{
cout<<"the value is"<<pow(a,b);
}
};
int main()
{
  clrscr();
  number obj;
   ^obj;
  getch();
  return(0);
}