#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Matrix
{
public:
	vector<vector<int> > a;//We should create a vector of vectors not just a vector
	Matrix operator+(Matrix M)
	{
		Matrix temp;
		for(int i=0;i<M.a.size();i++)
		{   vector<int> b;
		    for(int j=0;j<M.a[i].size();j++)
			{
			 	int result= a[i][j]+M.a[i][j];
			    b.push_back(result);
			}
			temp.a.push_back(b);
		}
		return temp;
	}
		
};
int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++)//Implementing row wise
	  {
        vector<int> b; 
        int num;
        for(j=0;j<m;j++)
		{
            cin >> num;
            b.push_back(num); //All elements of a row
        }
        x.a.push_back(b);// Object passing an entire vector to a vector
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y; //Operator overloading here as x and y are not primitve
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}

