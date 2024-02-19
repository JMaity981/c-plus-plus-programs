#include<iostream.h>
#include<conio.h>
float area(float r)
{
float c;
c=3.141*r*r;
return(c);
}
float area(float a,float b)
{
float d;
d=a*b;
return(d);
}
int main()
{
float x,y,z;
cout<<"Enter the redius of the circle"<<endl;
cin>>x;
cout<<"Enter the two side of the rectangle"<<endl;
cin>>y>>z;
cout<<"Area of the circle is:"<<area(x)<<endl;
cout<<"Area of the rectangle is:"<<area(y,z)<<endl;
getch();
return(0);
}
