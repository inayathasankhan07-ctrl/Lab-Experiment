#include <stdio.h>
int main() {
    int x=3,y=5,z;
    z=x;
    x=y;
    y=z;
    printf("x=%d y=%d",x,y);
    return 0;
}
