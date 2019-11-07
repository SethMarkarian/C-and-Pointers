#include "find.h"

bool find(int x, int *p, int size);
{
    if(*p == 0) {
        return(false);
    }

    for(int i = 0; i < size; i++) {
        if(*p[0] != x) {
            return(false);s
        }
    }
    return(true);
}

int main()
{
    
}