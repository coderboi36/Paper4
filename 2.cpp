void repeated_element(int a[],int size)
 {
    int i,count=0;

    cout<<"Repeating Element Are : ";

    for(i=0;i<size;i++)
    {
     if(a[abs(a[i])]>0)
      a[abs(a[i])]=-a[abs(a[i])];
    else if(a[abs(a[i])]==0)
     count++;
    else
     cout<<" "<<abs(a[i]);  
    }

} 

int main()
{
 int n,i;
  cin>>n;
  int a[100];
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 repeated_element(a,n);
 return 0;
}
