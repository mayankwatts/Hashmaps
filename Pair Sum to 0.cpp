#include<bits/stdc++.h>
using namespace std;

void PairSum(int *input, int n) {
      
      unordered_map<int,int> map;
      
      for(int i=0;i<n;i++)
      {
        map[input[i]]=map[input[i]]+1;
      }
      
      for(int i=0;i<n;i++)
      {
        if(map[input[i]]>0 && map[-input[i]]>0)
        {
          int max=map[input[i]]*map[-input[i]];
          for(int j=0;j<max;j++)
          {
            cout<<-abs(input[i])<<' '<<abs(input[i])<<endl;
          }
          map[input[i]]=0;
          map[-input[i]]=0;
        }
      }

 	}

int main()
{
    int n;
    int arr[100000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    PairSum(arr, n);
    return 0;
}
