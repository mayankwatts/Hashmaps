#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

void intersection(int input1[], int input2[], int size1, int size2) {
    unordered_map<int,int> map;
  
  for(int i=0;i<size2;i++)
  {
    map[input2[i]]=map[input2[i]]+1;
  }
  
  for(int i=0;i<size1;i++)
  {
    if(map[input1[i]]>0)
    {
        cout<<input1[i]<<endl;
      map[input1[i]]=map[input1[i]]-1;
    } 

  }

}


int main() {

	int size1,size2;

	cin>>size1;
	int *input1=new int[1+size1];	
	
	for(int i=0;i<size1;i++)
		cin>>input1[i];

	cin>>size2;
	int *input2=new int[1+size2];	
	
	for(int i=0;i<size2;i++)
		cin>>input2[i];
	
	
	intersection(input1,input2,size1,size2);

		
	return 0;
}
