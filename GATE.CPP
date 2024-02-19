#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gdrive=DETECT,gmode;
initgraph(&gdrive,&gmode,"c:\\turboc3\\bgi");
setbkcolor(GREEN);
setcolor(RED);
moveto(140,80);
arc(110,80,0,180,30);
moveto(80,80);
lineto(80,240);
lineto(340,240);
lineto(340,180);
lineto(140,180);
lineto(140,80);
getch();
closegraph();
return(0);
}