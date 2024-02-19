#include<iostream.h>
#include<conio.h>
class employ
{
char name[30];
int age;
float salary;
public:
void getdata();
void display();
};
void employ::getdata()
{
cout<<"Enter the name:";
cin>>name;
cout<<"Enter the age:";
cin>>age;
cout<<"Enter the salary:";
cin>>salary;
}
void employ::display()
{
cout<<"name:"<<name<<",\t"<<"age:"<<age<<",\t"<<"salary:"<<salary<<endl;
}
int main()
{
clrscr();
employ e[3];
int i;
for(i=0;i<3;i++)
{
e[i].getdata();
}
for(i=0;i<3;i++)
{
e[i].display();
}
getch();
return 0;
}