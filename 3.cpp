int main(void)
{int N=15;
int a[]={1,5,3,7,2,8,3,4,5,9,9,3,1,3,2,9};
int x;
int y;
int pos_x,pos_y;
int i=0;
int ans=INT_MAX;
int diff=0;
pos_x=pos_y=-1;
x=9;y=3;

for (i=0;i<N;i++)
{
if (a[i]==x)
{
pos_x=i;
}
else if (a[i]==y)
{
pos_y=i;
}
if (pos_x != -1 && pos_y != -1)
{
diff=abs(pos_x - pos_y);
if (diff==diff) ans=diff;
}
}
cout<<"Minium difference "<<diff;
return 0;
}
