#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d){
    int biggest;
    if(a>b){
        biggest = a;
    }
    else{
        biggest = b;
    }
    if(biggest<c){
        biggest = c;
    }
    if (biggest<d) {
        biggest = d;
    }
    return biggest;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
