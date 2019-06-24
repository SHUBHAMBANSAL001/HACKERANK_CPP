#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream obj;
	obj<<str;
	int n;
    char ch;	
	vector<int> integer;
	while(1)
	{ 	ch = '\0';
	    obj>>n>>ch;
		integer.push_back(n);		
		if(ch == '\0')
		break;		
	}
	return integer;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}


