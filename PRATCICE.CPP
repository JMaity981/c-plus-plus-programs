#include<iostream.h>
#include<conio.h>
inline int rate(int p,double r,int t)
{
 return(p*r*t/100);
}
void main()
{
  cout<<"rate(100,2.1,3)="<<rate(100,2.1,3)<<endl;
  cout<<"rate(200,1.3,4)="<<rate(200,1.3,4)<<endl;
  cout<<"rate(250,2.4,2)="<<rate(250,2.4,2)<<endl;
  getch();
}
