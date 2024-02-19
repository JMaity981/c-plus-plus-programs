#include<iostream.h>
#include<conio.h>
class value
{
int x=0;
public:
void count()
{
cout<<" value of x is"<<x;
x++;
}
};
int main()
{
value obj1,obj2,obj3;
obj1.count();
obj2.count();
obj3.count();
getch();
return 0;
}