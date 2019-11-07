#include "equals2.h"

int equals2(int** x, int** y, int size) 
{
    for(int i = 0; i < size; i++) {
        if(unsignedEquals(x[i], y[i]) != 0) {
            return *x[i];
        }
    }
    return -1;
}

int main()
{
    int x = 3;
    int y = 1;
    int z = 4;
    int *a[] = {&x, &y, &z};
    int *b[] = {&x, &y, &z};

    printf("%d\n", equals2(a, b, 3));
    return 0;
}