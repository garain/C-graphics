#include"header.cpp"
void main()
{
clrscr();
int x=10,y=20,xid=1,yid=0,m=0,n=0;
for(int i=1;i<=80;i++)
{
cout<<(char)196;
}
while(!kbhit())
{
gotoxy(m,n);
if(n==1 || n==25)
cout<<(char)196;
else
cout<<" ";
gotoxy(x,y);
cout<<(char)1;
m=x;
n=y;
if(x==1)
xid=1;
if(y==1)
yid=1;
if(x==80)
xid=0;
if(y==25)
yid=0;
if(xid==1 && yid==1)
{
x++;y++;
}
if(xid==1 && yid==0)
{
x++;y--;
}
if(xid==0 && yid==1)
{
x--;y++;
}
if(xid==0 && yid==0)
{
x--;y--;
}
gotoxy(20,80);
delay(50);
if(m==0)
{
for(int i=1;i<=80;i++)
{
cout<<(char)196;
}
}
}
}