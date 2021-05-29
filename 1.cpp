void findPairs(int* a, int n){
	sort(a,a+n);   
	int temp,i=0,j=n-1,minsum=INT_MAX,indexN=i,indexP=j;

	while(i<j){
	temp=a[i]+a[j];  
	if(abs(temp)<abs(minsum)){      
	minsum=temp;
	indexN=i;
	indexP=j;
		}
	if(temp<0){ 
	    i++;           
	}
	else		
		j--; 
	}
	cout<<"pair: "<<a[indexN]<<","<<a[indexP]<<endl;    
}

int main(void)
{ int n;
 cin>>n;
 int arr[n],i;
 for(i=0;i<n;i++)
     cin>>arr[i];
findPairs(arr, n);
 return 0;
}


