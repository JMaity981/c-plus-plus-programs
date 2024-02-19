#include<iostream.h>
#include<conio.h>
class circle
{
int r;
float arae;
public:
circle(int x=20)
{
r=x;
}
void putdata()
{
arae=3.14*r*r;
cout<<"Arae of circle is "<<arae;
}
};
int main()
{
clrscr();
circle obj(10);
obj.putdata();
getch();
return 0;
}