#include<iostream.h>
#include<conio.h>
class value
{
static int x;
int k=0;
public:
void count()
{
cout<<"value of x is"<<x;
cout<<"value of k is"<<k;
x++;
k++;
}
};
int value::x=0;
int main()
{
value obj1,obj2,obj3;
obj1.count();
obj2.count();
obj3.count();
getch();
return 0;
}
