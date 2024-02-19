#include<iostream.h>
#include<conio.h>
class add
{
 private:
 int x;
 int y;
 public:
 void input(void);
 void sum(void);
};
void add::input()
{
 cout<<"enterany two number"<<"\n";
 cin>>x>>y;
}
void add::sum()
{
 int s;
 s=x+y;
 cout<<"the result is....." <<s;
}
void main()
{
add obj;
obj.input();
obj.sum();
getch();
}


