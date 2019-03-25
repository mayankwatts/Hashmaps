#include <bits/stdc++.h>
using namespace std;

int makeAnagram(char str1[], char str2[]){
	
  unordered_map<char,int> map1,map2;
  int k=0;
  
  int p=0;
  while(str1[p]!='\0')
  {
    p++;
  }
  
  int q=0;
  while(str2[q]!='\0')
  {
    q++;
  }
  
  for(int i=0;i<p;i++)
  {
    map1[str1[i]]+=1;
  }
  
  for(int i=0;i<q;i++)
  {
    map2[str2[i]]+=1;
  }
  
  for(int i=0;i<p;i++)
  {
    k+=abs(map1[str1[i]]-map2[str1[i]]);
    map1[str1[i]]=0;
    map2[str1[i]]=0;
      
  } 
 
   for(int i=0;i<q;i++)
  {
    k+=abs(map2[str2[i]]-map1[str2[i]]);
    map1[str2[i]]=0;
    map2[str2[i]]=0;
      
  }  
  return k;
}

int main() {
    char str1[10010], str2[10010];
    cin>>str1;
    cin>>str2;
    
    cout << makeAnagram(str1,str2) << endl;
	
}
