#include<iostream.h>
#include<conio.h>
int main()
{
   int n,r,m,s=0;
   cout<<("Entr a number:")<<endl;
   cin>>n;
   m=n;
   while(n!=0)
   {
     r=n%10;
     s=s*10+r;
     n=n/10;
   }
   if(m==s)
     cout<<("This number is palindrom")<<endl;
   else
     cout<<("This number is not palindrom")<<endl;
   getch();
   return(0);
}
