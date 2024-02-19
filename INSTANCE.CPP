#include<iostream.h>
#include<conio.h>
class value
{
int x;
public:
void count()
{
cout<<"Value of x is"<<x;
x++;
}
};
value()
{
x=0;
}
int main()
{
clrscr();
value obj1,obj2,obj3;
obj1.count();
obj2.count();
obj3.count();
getch();
return 0
}