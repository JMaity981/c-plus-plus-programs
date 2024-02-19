#include<iostream.h>
#include<conio.h>
inline int calculate(int x,int y)
{
return((x*y)/y);
}
int main()
{
cout<<"calculate(4,2): "<<calculate(4,2)<<endl;
cout<<"calculate(3,2): "<<calculate(3,2)<<endl;
cout<<"calculate(5,2): "<<calculate(5,2)<<endl;
getch();
return 0;
}