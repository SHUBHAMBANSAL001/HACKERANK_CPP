//Aim: To print the reverse of array
#include <iostream>
using namespace std;
#include<stdio.h>
int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=1;i<=n;i++)
	cin>>array[i];
	for(int i=n;i>=1;i--)
	cout<<array[i]<<" ";
	return 0;
}


