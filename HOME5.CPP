#include<iostream.h>
#include<conio.h>
class A
{
   int p;
   static int q;
   public:
   A();
   void increment();
   void display();
};
A::A()
{
  p=5;
}
int A::q=10;
void A::increment()
{
   p++;
   q++;
}
void A::display()
{
  cout<<p<<"\t"<<q<<endl;
}
void main()
{
  A a1,a2,a3;
  a1.increment();
  a1.display();
  a2.increment();
  a2.display();
  a3.increment();
  a3.display();
  getch();
}
