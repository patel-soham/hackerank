#include <stdio.h>
#include <stdlib.h>

// a gets sum and b gets absolute difference
void update(int *a,int *b) {
    // Complete this function  
    int temp=*a;
    *a=*a + *b;
    *b=abs(*b-temp); // ***from stdlib.h 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
