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
void putdata()
{
area=3.14*r*r;
cout<<"Area of a circle is"<<area;
}
};
int main()
{
circle obj;
obj.putdata();
getch();
return 0;
}
