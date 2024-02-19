#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
void dda (float,float,float,float);
void main()
{
int gd=DETECT,gm,i,j,k,r,n,s,xm=320,ym=240;
 float a[12][12],b[12][12],c[12][12];
 clrscr();
initgraph(&gd,&gm,"c:\\turboc3\\bgi\\");
printf("how many points");
scanf("%d",&n);
printf("enter the poins");
for(i=0;i<n;i++)
{
scanf("%f%f",&a[0][i],&a[1][i]);
}
for(i=0;i<n-1;i++)
{
dda(xm+a[0][i],ym-a[1][i],xm+a[0][i+1],ym-a[1][i+1]);
}
dda(xm+a[0][0],ym-a[1][0],xm+a[0][i],ym-a[1][i]);
printf("r");
scanf("%d",&r);
b[0][0]=cos(r*11.0/630);
b[0][1]=-sin(r*11.0/630);
b[1][0]=sin(r*11.0/630);
b[1][1]=cos(r*11.0/630);
for(i=0;i<2;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=0;
for(k=0;k<2;k++)
{
c[i][j]=c[i][j]+(b[i][k]*a[k][j]);
}
}
}
for(i=0;i<n-1;i++)
{
dda(xm+c[0][i],ym-c[1][i],xm+c[0][i+1],ym-c[1][i+1]);
}
dda(xm+c[0][0],ym-c[1][0],xm+c[0][i],ym-c[1][i]);

getch();
}
void dda(float xs,float ys,float xe,float ye)
{

float dx,dy,s,x,y;
int i;
if(abs(xe-xs)>=abs(ye-ys))
s=abs(xe-xs);
else
s=abs(ye-ys);
dx=(xe-xs)/s;
dy=(ye-ys)/s;
x=xs;y=ys;
for(i=0;i<s;i++)
{
x=x+dx;
y=y+dy;
putpixel(x,y,3);
}
}