#include <iostream>
#include <string>
using namespace std;
#include<string.h>
int main() {
string sa;
string sb;
cin>>sa;
cin>>sb;
int lena=sa.size();
int lenb=sb.size();
cout<<lena<<" "<<lenb<<endl;
cout<<sa<<sb<<endl;//concatenated string
char temp =sa[0];//temp char to swap the first character of array
sa[0]=sb[0];
sb[0]=temp;
cout<<sa<<" "<<sb;
return 0;
}


