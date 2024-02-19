#include<iostream.h>
#include<conio.h>
class circle
{
int r;
float area;
public:
circle()
{
r=10;
}
circle(circle&c1)
{
r=c1.r;
}
void putdata()
{
area=3.14*r*r;
cout<<"Arae of circle is "<<area;
}
};
int main()
{
clrscr();
circle obj1;
obj1.putdata();
circle obj2(obj1);
obj2.putdata();
getch();
return 0;
}
