import java.util.*;
class AddNumber
{
   int add(int a,int b)
   {
      return(a+b);
   }
   double add(double a,double b,double c)
   {
      return(a+b+c);
   }
   double add(double a,double b)
   {
     return(a+b);
   }
}
class Addition1
{
   public static void main(String[]args)
   {
      AddNumber sc=new AddNumber()
	  int r=sc.add(10,20);
	  double m=sc.add(2.3,2.5,3.2);
	  double n=sc.add(5.4,4.1);
	  System.out.println("Addition of 10 and 20 = "+r);
	  System.out.println(Addition of 2.3,2.5,3.2 = "+m);
	  System.out.println(Addition of 5.4,4.1 = "+n);
	}
}	
      	  
	