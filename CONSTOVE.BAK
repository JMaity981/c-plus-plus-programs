#include<iostream.h>
#include<conio.h>
class code
{
  int id;
  public:
  code(){}
  code(int a)
  {
   id=a;
  }
  code(code &x)
  {
   id=x.id;
  }
  void display(void)
  {
   cout<<id;
  }
};
void main()
{
  code A(100);
  code b(A);
  code c=A;
  code D;
  D=A;
  cout<<"\n id of A=";
  A.display();
  cout<<"\n id of b=";
  b.display();
  cout<<"\n id of c=";
  c.display();
  cout<<"\n id of d=";
  D.display();
  getch();
}