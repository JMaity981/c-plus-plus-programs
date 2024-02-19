#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void m_circle(int,int,int);
void main()
{
int r,xc,yc;
clrscr();
printf("Enter the radius");
scanf("%d",&r);
printf("Enter the center");
scanf("%d%d",&xc,&yc);
m_circle(r,xc,yc);
getch();
}
void m_circle(int r,int xc,int yc)
{
int p,x,y,gd=DETECT,gm;
p=1-r;
x=0;
y=r;
initgraph (&gd,&gm,"c://turboc3//bgi");
do
{
putpixel(xc+x,yc+y,6);
putpixel(xc+x,yc-y,6);
putpixel(xc-x,yc+y,6);
putpixel(xc-x,yc-y,6);
putpixel(xc+y,yc+x,6);
putpixel(xc+y,yc-x,6);
putpixel(xc-y,yc+x,6);
putpixel(xc-y,yc-x,6);
if(p>0)
{
p=p+2*(x-y)+5;
y=y-1;
}
else
{
p=p+2*x+3;
}
x=x+1;
}
while(x<=y);
}
