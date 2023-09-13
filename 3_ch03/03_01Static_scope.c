// 03_01_static_scope.c
// questions on static scope  - if assigned a value on the outside of any block, can
//  the variable still be incremented within a function.
#include <stdio.h>

static int counter = 0;

void increment(void)
{
    counter++;
    printf("Counter is: %d\n", counter);
}

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        increment();
    }

    return 0;
}

// the ansswer is yes, if the var is declared as static outside a block, the
//  var can still be incremented (changed) within a block.