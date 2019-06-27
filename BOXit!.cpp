#include<bits/stdc++.h>

using namespace std;

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box
{
    private:
        int l,b,h;
    public:
        Box()
        {
            l=0;
            b=0;
            h=0;        
        }
        Box(int len,int bre,int hei)
        {
            l=len;
            b=bre;
            h=hei;
        }
        Box(Box &B)//Still need to learn why this & is used
        {
         l=B.l;
         b=B.b;
         h=B.h;        
        }
        int getLength()
        {
            return l;
        }
        int getBreadth()
        {
            return b;
        }
        int getHeight()
        {
            return h;
        }
        long long CalculateVolume()
        {
            
            return (long long)l*b*h;

        }
        int operator<(Box B)
        {
          if((l<B.l)||((b<B.b)&&(l==B.l))||((h<B.h)&&(b==B.b)&&(l==B.l)))
          return 1;
          else
          return 0;    
        }
        friend ostream & operator<<(ostream &out,Box &B);     
         
};
ostream & operator<<(ostream &out,Box &B)
{
    out<<B.l<<" "<<B.b<<" "<<B.h;
    return out;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
