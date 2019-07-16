#include<iostream>
#include<vector> //Imperative to include this header file inorder to non standard vectors.
using namespace std;
int main()
{
	int r,q;
	cin>>r;
	cin>>q;
	vector<vector<int> > vec(r);//vector with r rows is created , (Columns in each row not yet defined)
    for(int i = 0; i<vec.size();i++)
    { 
        //"Enter the column size for the ith row"
        int c;
    	cin>>c;
	//Most important learning here that how to create a vector at any index of vector
    	vec[i]= vector<int>(c);//for ith row, c columns will be created(we can also declare rows and column together)
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
