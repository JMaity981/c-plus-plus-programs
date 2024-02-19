#include<iostream.h>
#include<conio.h>
class student
{
  int roll;
  public:
  void getroll()
  {
   cout<<"enter the roll number"<<endl;
   cin>>roll;
  }
  void putroll()
  {
   cout<<"roll number ="<<roll<<endl;
  }
};
class test:virtual public student
{
 protected:
  int m1,m2;
  public:
  void getmarks()
  {
    cout<<"enter your two subject marks"<<endl;
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
  cout<<"enter the score"<<endl;
  cin>>score;
  }
  void putscore()
  {
  cout<<"score="<<score<<endl;
  }
};
 void main()
{
 clrscr();
 cout<<endl;
 test s1;
 sports s2;
 cout<<endl;
 s1.getroll();
 s1.getmarks();
 s2.getroll();
 s2.getscore();
 s1.putroll();
 s1.putmarks();
 s2.putroll();
 s2.putscore();
 getch();
}
