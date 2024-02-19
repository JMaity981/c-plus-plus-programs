#include<iostream.h>
#include<conio.h>
class man
{
int age;
float hight;
public:
void getdata(int a,float b)
{
age=a;
hight=b;
}
void putdata()
{
cout<<"Age is: "<<age<<endl;
cout<<"Hight is: "<<hight;
}
};
int main()
{
clrscr();
man obj;
obj.getdata(5,10.2);
obj.putdata();
getch();
return 0;
}

