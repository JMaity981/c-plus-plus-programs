#include<iostream.h>
#include<conio.h>
class circle
{
int r;
float area;
public:
circle();
~circle();
void putdata()
{
area=3.14*r*r;
cout<<"Arae of circle is "<<area;
}
};
circle::circle()
{
r=10;
}
circle::~circle()
{
cout<<"Hi I am Destractor";
}
int main()
{
clrscr();
circle obj;
obj.putdata();
getch();
return 0;
}