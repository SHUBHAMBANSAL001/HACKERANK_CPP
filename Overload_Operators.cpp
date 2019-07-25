//Operator Overloading

#include<iostream>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(string s)
    {
        int v1=0;
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;
        b=v2;
    }
};

Complex operator+(Complex C,Complex D)//This is not a member function rather global functions thats why both objects will be passed as parameter
{
	Complex temp;
	temp.a= D.a+C.a;
	temp.b= D.b+C.b;
	return temp;
}
ostream& operator<< (ostream & out, const Complex & X) { //We pass reference of ostream as we can't create its object
    if (X.b < 0) {//Here we check also that imaginary part is zero or not
        out << X.a << "-i" << -X.b;
    } else if(X.b > 0) {
        out << X.a << "+i" << X.b;
    } else {
        out << X.a;
    }
    return out;
}

int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;//This can be understood as operator+(x,y) i.e + func call with two object arguments
    cout<<z<<endl;
}

