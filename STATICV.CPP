#include<iostream.h>
#include<conio.h>
class value
{
static int x=0;
int k;
void count()
{
cout<<"Value of x is"<<x;
cout<<"Value of k is"<<k;
x++;
k++;
}
};
int value::x=0;
value()
{
k=0;
}
int main()
{
value obj1,obj2,obj3;
obj1.count();
obj2.count();
obj3.count();
getch();
return 0;
}