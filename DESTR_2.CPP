#include<iostream.h>
#include<conio.h>
class xyz
{
int x;
public:
xyz();
~xyz();
void display();
};
xyz::xyz()
{
x=9;
}
void xyz::display()
{
cout<<x;
}
xyz::~xyz()
{
cout<<"Object is destroyed";
}

int main()
{
xyz abc;
abc.display();
getch();
return 0;
}
