#include<iostream>
using namespace std;



void printPairs(int *input, int n, int k) {
	
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(abs(input[i]-input[j])==k)
      {
        if(input[i]<=input[j])
        cout<<input[i]<<' '<<input[j]<<endl;
        else
          cout<<input[j]<<' '<<input[i]<<endl; 
      }
    }
  }
}

int main() {
	int n;
	cin >> n;
	int *input = new int[n];
	for(int i = 0; i < n; i++){
		cin >> input[i];
	}
	int k;
	cin >> k;
	printPairs(input, n, k);
}
