#include<iostream.h>
#include<conio.h>
class overload2
{
  int x,y;
  public:
  void input()
  {
    cout<<"enter any two number"<<endl;
    cin>>x>>y;
  }
  void display()
  {
     cout<<"the value of x ="<<x<<endl;
     cout<<"the value of y="<<y<<endl;
  }
  overload2 operator +(overload2);
};
overload2 overload2::operator +(overload2 c1)
{
  overload2 c3;
  c3.x=x+c1.x;
  c3.y=y+c1.y;
  return(c3);
}
void main()
{
   clrscr();
   overload2 obj1;
   overload2 obj2;
   overload2 obj3;
   obj1.input();
   obj2.input();
   obj3=obj1+obj2;
   obj3.display();
   getch();
}