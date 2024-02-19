#include<iostream.h>
#include<conio.h>
class circle
{
int r;
float area;
public:
circle(int x)
{
r=x;
}
void putdata()
{
area=3.14*r*r;
cout<<"Area of circle is"<<area;
}
};
int main()
{
circle obj(20);
obj.putdata();
getch();
return 0;
}