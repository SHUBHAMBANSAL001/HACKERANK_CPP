// Aim: To check the greatest of the four number entered
#include <iostream>
#include <cstdio>
using namespace std;
int max_of_four(int a,int b,int c,int d)
{
	int max;
	if((a>b)&&(a>c)&&(a>d)) //Multiple check using bitwise operators
	max=a;
	else if((b>a)&&(b>c)&&(b>d))
	max=b;
	else if((c>a)&&(c>b)&&(c>d))
	max=c;
	else
	max=d;
    return max;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
// If it can be optimised further than generate a pull request on this code so that i can learn too. !

