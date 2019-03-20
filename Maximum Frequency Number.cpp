#include<bits/stdc++.h>
using namespace std;

int highestFrequency(int *input, int n){
  
  unordered_map<int,int> map;
  
  int max=0;
  int a=0;
  
  for(int i=0;i<n;i++)
  {
    map[input[i]]=map[input[i]]+1;
    
    if(map[input[i]]>max)
    {
      max=map[input[i]];
      a=input[i];
    }
  }
  
  return a;
    
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
    int maxKey= highestFrequency(input, n);
    cout<<maxKey;
    return 0;
}


