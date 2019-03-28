#include <bits/stdc++.h>
using namespace std;

int minDistance(int arr[],int n){
	
  unordered_map<int,int> map;
  int min=0;
  
  for(int i=0;i<n;i++)
  {
    map[arr[i]]+=1;
  }
  
  int a[n];
  int b[n];
  int p=0;
  
  for(int i=0;i<n;i++)
  {
    if(map[arr[i]]>1)
    {
      a[p]=arr[i];
      p++;
    }
  }
  
  for(int i=0;i<p;i++)
  {
    int m=0;
    int l=0;
    for(int j=0;j<n;j++)
    {
      if(a[i]==arr[j])
      {
        b[l]=j;
        l++;
      }
    }
    
    for(int k=1;k<l;k++)
    {
      m=b[k]-b[k-1];
      if(i==0 && k==1)
        min=m;
      
      else if(min>m)
        min=m;
    }
     
  }
  
  return min;
}

int main() {
    	int n=0;
    	cin>>n;
    	int *arr = new int[n];
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    	}
    	
    	cout << minDistance(arr,n);
      
      return 0;
}
