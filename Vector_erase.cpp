#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> myvec;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	int e;
    	cin>>e;
    	myvec.push_back(e);
	}
	int fq;
	cin>>fq;
	myvec.erase(myvec.begin()+fq-1,myvec.begin()+fq);
	for(int i=0;i<myvec.size();i++)
	cout<<myvec[i]<<" ";
	int a,b;
	cin>>a>>b;
	myvec.erase(myvec.begin()+a-1,myvec.begin()+b-1);
	cout<<myvec.size()<<endl;
	for(int i=0;i<myvec.size();i++)
	cout<<myvec[i]<<" ";		   
    
	return 0;
}

