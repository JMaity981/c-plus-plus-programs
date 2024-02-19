#include<iostream.h>
#include<conio.h>
class time
{
  int hours,minutes;
  public:
  void gettime(int h,int m)
  {
     hours=h;
     minutes=m;
   }
   void sum(time,time);
   void display(void);
};
void time::sum (time t1,time t2)
{
   minutes=t1.minutes+t2.minutes;
   hours=minutes/60;
   minutes=minutes%60;
   hours=hours+t1.hours+t2.hours;
}
void time::display()
{
   cout<<"the resulten time is"<<hours<<":"<<minutes<<endl;
}
void main()
{
   time a1,a2,a3;
   a1.gettime(2,45);
   a2.gettime(3,30);
   a3.sum(a1,a2);
   a1.display();
   a2.display();
   cout<<"addition of the above two time is:";
   a3.display();
   getch();
}