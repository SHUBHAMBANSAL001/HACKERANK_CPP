#include<iostream>
using namespace std;
class Rectangle
{
	protected:
		int w;
		int h;
	public:
	
		void display()
		{
			cout<<w<<" "<<h<<endl;
		}
};
class RectangleArea:public Rectangle
{
  public:
  	void read_input()
  	{
  	cin>>w>>h;	
	}
	void display()
	{
		cout<<w*h;
	}
  	

	
};
int main()
{
    RectangleArea r_area;
    
    r_area.read_input(); // Reads the width and input height

    r_area.Rectangle::display(); //Prints the input 
    
    r_area.display();
    
    return 0;
}
