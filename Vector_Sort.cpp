#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
  vector<int> myvec;//We can also allocate statically 
  long int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
  	long int e;
  	cin>>e;
  	myvec.push_back(e);  
  }    
 
  sort(myvec.begin(),myvec.end());//These functions are used as an indicator`
    for(int i=0;i<myvec.size();i++)
  {
  	cout<<myvec[i]<<" ";
  } 
	return 0;
}

