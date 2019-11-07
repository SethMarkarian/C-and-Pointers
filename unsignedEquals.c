#include "unsignedEquals.h"

int unsignedEquals(int* x, int* y)
{
    // *xx = &x;
    // *yy = &y;
    if(x == y) {
        return *x;
    }
    if(x != y && *x == *y) {
        return -1;
    }
    if(x != y && *x != *y) {
        return 0;
    }
    return 0;
}

// int main() 
// {
//     int i = 25;
//     int j = 25;
//     int ans = unsignedEquals(&i, &j);
//     printf("%d\n", ans);
//     return 0;
// }