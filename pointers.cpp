#include <stdio.h>
//Small implementation of pointers 
void update(int *a,int *b) {
int c = *a;
int d = *b;
*a = c+d;
if(c>=d)
d=c-d;
else
d=d-c;
*b=d;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}


