#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void b_circle(int,int,int);
void main()
{
int r,xc,yc;
clrscr();
printf("enter the radius:");
scanf("%d",&r);
printf("enter the center of the circle:");
scanf("%d%d",&xc,&yc);
b_circle(r,xc,yc);
getch();
}
void b_circle(int r,int xc,int yc)
{
int p,x,y,gd=DETECT,gm;
p=(3-2*r);
x=0;
y=r;
initgraph(&gd,&gm,"c://turboc3//bgi");
do{
putpixel(xc+x,yc+y,6);
putpixel(xc+x,yc-y,6);
putpixel(xc-x,yc+y,6);
putpixel(xc-x,xc-y,6);
putpixel(xc+y,yc+x,6);
putpixel(xc+y,yc-x,6);
putpixel(xc-y,yc+x,6);
putpixel(xc-y,yc-x,6);
if(p>0)
{
p=p+4*(x-y)+10;
y=y-1;
}
else
{
p=p+4*x+6;
}
x=x+1;
}
while(x<=y);
}
