#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
  vector<int> myvec;
  long int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
  	long int e;
  	cin>>e;
  	myvec.push_back(e);  
  }    
 
  sort(myvec.begin(),myvec.end());
    for(int i=0;i<myvec.size();i++)
  {
  	cout<<myvec[i]<<" ";
  } 
	return 0;
}

