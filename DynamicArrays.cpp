#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int r,q;
	cin>>r;
	cin>>q;
	vector<vector<int> > vec(r);//vector with r rows is created
    for(int i = 0; i<vec.size();i++)
    { 
        //"Enter the column size for the ith row"
        int c;
    	cin>>c;
    	vec[i]= vector<int>(c);//for ith row, c columns will be created
    	for(int j=0;j<c;j++)
    	{
    		int cv;//specific column_value
    		cin>>cv;
    		vec[i][j]=cv;//column values feeded like traditional 2d array style
		}
	   
	}
	for(int i=0;i<q;++i)
	{
	int r,c;
	cin>>r;
	cin>>c;
	cout<<vec[r][c]<<endl;
	}
	return 0;
}
