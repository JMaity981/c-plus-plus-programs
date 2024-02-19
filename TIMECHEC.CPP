#include<iostream.h>
#include<conio.h>
class times
{
int hours,minutes,seconds;
public:
void gettime(int h,int m,int s)
{
hours=h;
minutes=m;
seconds=s;
}
int check (time,time,time);
void display(void);
};
int times::check(times t1,times t2)
{
if(t1.hours!=t2.hours)
{
if(t1.hours>t2.hours)
return t1;
else
return t2;
}
else if(t1.minutes!=t2.minutes)
{
if(t1.minutes>t2.minutes)
return t1;
else
return t2;
}
else if(t1.seconds!=t2.seconds)
{
if(t1.seconds>t2.seconds)
return t1;
else
return t2;
}
}
void main()
{
time T1,T2;
T1.gettime(2,45,20);
T2.gettime(3,30,15);
getch();
}