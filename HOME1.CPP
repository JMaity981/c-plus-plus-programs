#include<iostream.h>
#include<conio.h>
void swap(int*,int*);
int main()
{
  clrscr();
  int n1,n2;
  cout<<"enter the number:";
  cin>>n1>>n2;
  cout<<endl<<"before swaping:n1="<<n1;
  cout<<endl<<"n2="<<n2;
  swap(&n1,&n2);
  cout<<endl<<"after swaping: n1="<<n1;
  cout<<endl<<"n2="<<n2;
  getch();
  return(0);
}
void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}