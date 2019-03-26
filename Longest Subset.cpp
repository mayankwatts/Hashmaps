#include <bits/stdc++.h>
using namespace std;

int max(int arr[], int n) {
  
  unordered_map<int,int> map;
  
  for(int i=0;i<n;i++)
  {
    if(arr[i]==0)
    {
      arr[i]=-1;
    }
  }

  int max=0;
  for(int i=0;i<n;i++)
  {
    map[arr[i]]+=1;
  }
  
  int a=0;
  
  if(map[-1]>map[1])
    a=map[1];
  else
    a=map[-1];
  
  a*=2;
  int b=0;
  int c=0;
  
  for(int i=0;i<n;i++)
  {
    int sum=0;
    int j=0;
    while(j<a && i+j<n)
    {
      sum=sum+arr[i+j];
      
      if(sum==0 && max<j+1)
      {
        b=1;
        c=j+1;
        max=j+1;
      }
      j++;
      
    }

  }
  return c;
}

int main() {
    	int n=0;
    	cin>>n;
    	int *arr = new int[n];
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    	}
    	
    	cout << max(arr,n);
    	
	
}
