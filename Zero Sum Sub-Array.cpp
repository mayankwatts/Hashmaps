#include<iostream>
using namespace std;

 	
bool subArrayZeroSum(int input[], int n) {
  bool x=false;
  
  int k;
   
  for(int i=0;i<n;i++)
  {
    if(input[i]==0)
    {
      x=true;
      break;
    }
    
    if(input[i]<0)
    {
      int j=i-1;
      k=input[i];
      int m;
      while(j>=0)
      {
        k=k+input[j];
        if(k==0)
        {
          x=true;
          break;
        }   
        
        j--;
      }
      
      k=input[i];
      j=i+1;
      while(j<n)
      {
        k=k+input[j];
        if(k==0)
        {
          x=true;
          break;
        }
        
        j++;
      }
      
      k=input[i];
      j=i-1;
      m=i+1;
      while(j>=0 || m<n)
      {
        if(j>=0)
        {
            k=k+input[j];
        if(k==0)
        {
          x=true;
          break;
        }
          
        }
        
        if(m<n)
        {
          k=k+input[m];
        if(k==0)
        {
          x=true;
          break;
        }
          
        }
      
       
        m++;
        j--;
      }
      
       
      k=input[i];
      j=i-1;
      m=i+1;
      while(j>=0 || m<n)
      {
        if(m<n)
        {
           k=k+input[m];
        if(k==0)
        {
          x=true;
          break;
        }
          
        }
        
        if(j>=0)
        {
          k=k+input[j];
        if(k==0)
        {
          x=true;
          break;
        }
          
        }
       
        
        m++;
        j--;
      }   
      
    }
    if(x==true)
      break;
    
    
    
  }
           
     return x;	
}



int main()
{
    int n;
    int input[100000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>input[i];
    }
    bool val = subArrayZeroSum(input, n);
    if(val)
    {
        cout<<"true";
    }
    else
    {
            cout<<"false";
    }
    return 0;
}

