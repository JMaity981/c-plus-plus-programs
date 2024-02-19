#include<iostream.h>
#include<conio.h>
class number
{
int a;
int b;
public:
 number()
{
a=10;
b=20;
}
void operator-()
{
a=-a;
b=-b;
}
void display()
{
cout<<"value of a is"<<a<<endl;
cout<<"value of b is"<<b<<endl;
}
};
int main()
{
clrscr();
cout<<endl<<endl;
number obj;
obj.display();
cout<<"After operation the result is:"<<endl;
-obj;
obj.display();
getch();
return 0;
}

