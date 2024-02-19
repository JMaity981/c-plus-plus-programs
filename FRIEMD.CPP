#include<iostream.h>
#include<conio.h>
class B;
class A
{
int x;
void getdata();
{
friend void add(A,B);
};
void A::getdata()
{
x=10;
}
class B
{
int y;
void getdata();
friend void add(A,B);
};
void add(A.a,B.b)
{
int k;
k=(a.x+b.y);
cout<<"result is"<<k;
}
int main()
{
A aa;
B bb;
aa.getdata();
bb.getdata();
getch();
return 0;
}