#include<iostream.h>
#include<conio.h>
class student
{
   int roll;
   char name,subject,semester;
   void getdata()
   {
     cout<<"enter the roll"<<endl;
     cin>>roll;
     cout<<"enter the name"<<endl;
     cin>>name;
     cout<<"enter the subject"<<endl;
     cin>>subject;
     cout<<"enter the semester"<<endl;
     cin>>semester;
    }
    void display()
    {
      cout<<roll<<endl<<name<<endl<<subject<<endl<<semester;
    }
};
int main()
{
  student obj[5];
  int i;
  for(i=0;i<5;i++)
  {
    obj[i].getdata();
    }
    for(i=0;i<5;i++)
    {
    obj[i].display();
  }
  getch();
  return(0);
}