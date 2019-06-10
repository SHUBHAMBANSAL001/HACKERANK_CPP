//Program to execute the if else to convert the number into a word representing it
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,l;
    cin >> n;
    l=pow(10,9);
    if (n>=1 &&n<=l)
    {
    	if(n==1)
    	{
    		cout<<"one";
		}
		else if(n==2)
		{
			cout<<"two";
		}
		else if(n==3)
		{
			cout<<"three";
		}
		else if(n==4)
		{
			cout<<"four";
		}else if(n==5)
		{
			cout<<"five";
		}else if(n==6)
		{
			cout<<"six";
		}else if(n==7)
		{
			cout<<"seven";
		}else if(n==8)
		{
			cout<<"eight";
		}else if(n==9)
		{
			cout<<"nine";
		}
		else
		{
			cout<<"Greater than 9";
		}
	}
	else
	{
		cout<<"Number is not in the specified limit";
	}
    return 0;
}

