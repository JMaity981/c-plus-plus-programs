#include<iostream.h>
#include<conio.h>
class time
{
 int hours,minutes;
 public:
  void getdata(int h,int m)
  {
   hours=h;
   minutes=m;
  }
  void sum(time,time);
  void display();
};
void time::sum(time t1,time t2)
{
minutes=t1.minutes+t2.minutes;
hours=minutes/60;
minutes=minutes%60;
hours=hours+t1.hours+t2.hours;
}
void time::display()
{
cout<<hours<<":"<<minutes<<endl;
}
void main()
{
 clrscr();
 time m1,m2,m3;
 m1.getdata(2,45);
 m2.getdata(3,30);
 m3.sum(m1,m2);
 m1.display();
 m2.display();
 cout<<"after addition result is:"<<endl;
 m3.display();
 getch();
}

