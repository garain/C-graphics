#include"header.cpp"
int main()
{
int x=12,y=20,xid=1,yid=0,m=0,n=0;
while(!kbhit())
{
gotoxy(m,n);
cout<<" ";
gotoxy(x,y);
cout<<" ";
m=x;
n=y;
if(x==1)
xid=1;
if(y==1)
yid=1;
if(x==21)
xid=0;
if(y==21)
yid=0;
if(xid==1 && yid==1)
{
x++;y++;
textcolor(133);
cprintf("%c",196);cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);cprintf("%c",196);
cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);
cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);
}
if(xid==1 && yid==0)
{
x++;y--;
textcolor(130);
cprintf("%c",196);cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);cprintf("%c",196);
cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);
cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);
}
if(xid==0 && yid==1)
{
x--;y++;
textcolor(129);
cprintf("%c",196);cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);cprintf("%c",196);
cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);
cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);
}
if(xid==0 && yid==0)
{
x--;y--;
textcolor(132);
cprintf("%c",196);cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);cprintf("%c",196);
cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);
cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);cprintf("%c",196);cprintf("%c",196);cprintf("%c",42);cprintf("%c",196);
}
delay(50);
}
return 0;
}
