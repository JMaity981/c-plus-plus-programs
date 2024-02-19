#include<iostream.h>
#include<conio.h>
class value
{
static int x;
static void count()
{
cout<<"value of x is"<<x;
x++;
}
};
int value :: x=0;
int main()
{
value::count();
value::count();
value::count();
getch();
return 0;
}