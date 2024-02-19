#include<iostream.h>
#include<conio.h>
class time
{
int hours,minites;
public:
void getdata(int h,int m)
{
hours=h;
minites=m;
}
void sum(time,time);
void display(void);
};
void time::sum(time1,time2)
{
minites=t1.minites+t2.minites;
hours=minites/60;
minites=minites%60;
hours=hours+t1.hours+t2.hours;
}
void time::display()
{
cout<<hours<<":"<<minites<<endl;
}
int main()
{
time t1,t2,t3;
t1.getdata(2,45);
t2.getdata(3,30);
t3.sum(t1,t2);
t1.display();
t2.display();
cout<<"Adition of two time is:";
t3.display();
getch();
return 0;
}



