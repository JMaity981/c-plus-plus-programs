#include<iostream.h>
#include<conio.h>
class function
{
 int x,y,z;
 double m,n;
 public:
 void sum(int,int);
 void sum(int,int,int);
 void sum(double,double);
 };
 void function::sum(int x,int y)
 {
  int s;
  s=x+y;
  cout<<"result......"<<s<<"\n";
 }
  void function::sum(int x,int y,int z)
 {
  int d;
  d=x+y+z;
  cout<<"result......"<<d<<"\n";
 }
  void function::sum(double m,double n)
 {
  double r;
  r=m+n;
  cout<<"result......"<<r<<"\n";
 }
 void main()
 {
 clrscr();
 function obj;
 obj.sum(2,4);
 obj.sum(4,5,7);
 obj.sum(4.5,5.3);
 getch();
 }
