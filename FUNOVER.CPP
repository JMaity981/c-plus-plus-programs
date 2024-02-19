#include<iostream.h>
#include<conio.h>
float area (float r)
{
return(3.14*r*r);
}
int  area (int l,int b)
{
return(l*b);
}
int main()
{
clrscr();
cout<<endl<<endl;
int x,y;
float r;
cout<<"Enter the redius of the circle"<<endl;
cin>>r;
cout<<"Enter the length and bredth of the rectangle"<<endl;
cin>>x>>y;
cout<<"Area of the circle is:"<<area(r)<<endl;
cout<<"Area of the rectangle is:"<<area(x,y)<<endl;
getch();
return(0);
}