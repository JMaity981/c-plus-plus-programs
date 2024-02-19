#include<iostream.h>
#include<conio.h>
class man
{
int age;
float hight;
public:
void getdata(int a, float h)
{
age=a;
hight=h;
}
void display()
{
cout<<"Age is: "<<age<<endl;
cout<<"Hight is: "<<hight;
}
};
int main()
{
int a;
float h;
clrscr();
man sourav;
cout<<"Enter the age:";
cin>>a;
cout<<"Enter the hight:";
cin>>h;
sourav.getdata(a,h);
sourav.display();
getch();
return 0;
}