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
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
