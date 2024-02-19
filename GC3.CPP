#include<iostream.h>
#include<conio.h>
class man
{
int age;
float hight;
public:
void getdata();
void putdata();
};
void man::getdata()
{
cout<<"Enter the age: ";
cin>>age;
cout<<"Enter the hight: ";
cin>>hight;
}
void man::putdata()
{
cout<<"Age is age: "<<age<<endl;
cout<<"Hight is: "<<hight;
}
int main()
{
clrscr();
man obj;
obj.getdata();
obj.putdata();
getch();
return 0;
}