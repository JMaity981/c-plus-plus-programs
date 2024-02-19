#include<iostream.h>
#include<conio.h>
class man
{
int age;
float hight;
public:
void getdata()
{
cout<<"Enter the age";
cin>>age;
cout<<"Enter the hight";
cin>>hight;
}
void display()
{
cout<<"Age is: "<<age<<endl;
cout<<"Hight is: "<<hight;
}
};
int main()
{
clrscr();
man Amit;
Amit.getdata();
Amit.display();
getch();
return 0;
}