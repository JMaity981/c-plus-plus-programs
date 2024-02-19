  #include<iostream.h>
  #include<conio.h>
  #include<math.h>
  int main()
  {
	       clrscr();
	       cout<<endl;
		double d=0,b=0;
		int d1, r,i=0,j=0,n,p;
		cout<<"Enter a octal number: ";
		cin>>n;
		while(n!=0)
		{
			r=n%10;
			d=d+r*pow(8,i);
			n=n/10;
			i++;
		}
		d1=(int)d;
		while(d1!=0)
		{
			p=d1%2;
			b=b+p*pow(10,j);
			d1=d1/2;
			j++;
		}
		cout<<"The octal equevalent binary nuber is= "<<b;
	getch();
		return(0);
		}


