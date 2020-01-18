//Program to execute the if else to convert the number into a word representing it
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
void convert()
{
string a[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int check;
cin>>check;
if(check>9){
	cout<<"Greater than 9";
}else{
	cout<<a[check]; //Reference the particular number from array index
}
}	
int main()
{
     convert();
}

