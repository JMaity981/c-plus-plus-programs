#include<iostream.h>
#include<conio.h>
class student
{
  int roll;
  public:
  void getroll()
  {
   cout<<"Enter the roll number"<<endl;
   cin>>roll;
  }
  void putroll()
  {
   cout<<"Roll number ="<<roll<<endl;
  }
};
class test:virtual public student
{
 protected:
  int m1,m2;
  public:
  void getmarks()
  {
    cout<<"Enter your two subject marks"<<endl;
    cin>>m1>>m2;
  }
  void putmarks()
  {
    cout<<"your 1st subject marks="<<m1<<endl;
    cout<<"your 2nd subject marks="<<m2<<endl;
  }
};
class sports:public virtual student
{
protected:
int score;
public:
 void getscore()
 {
  cout<<"Enter the sport score"<<endl;
  cin>>score;
  }
  void putscore()
  {
  cout<<"Spor score="<<score<<endl;
  }
};
class result:public test,public sports
{
 int m3;
 public:
 void total()
 {
  m3=m1+m2+score;
 cout<<"Total result="<<m3<<endl;
 }
 };
 void main()
{
 clrscr();
 result s1;
 s1.getroll();
 s1.getmarks();
 s1.getscore();
 s1.putroll();
 s1.putscore();
 s1.putmarks();
 s1.total();
 getch();
}
