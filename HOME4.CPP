#include<iostream.h>
#include<conio.h>
class employee
{
  char name[30];
  int age;
  public:
  void getdata();
  void putdata();
};
void employee::getdata(void)
{
  cout<<"enter name and age:";
  cin>>name>>age;
}
void employee::putdata(void)
{
  cout<<name<<"\t"<<age<<endl;
}
void main()
{
  employee e[5];
  int i;
  for(i=0;i<5;i++)
  e[i].getdata();
  for(i=0;i<5;i++)
  e[i].putdata();
  getch();
}
