/* Function like macro in C */

#include <stdio.h>

#define INC_ONE_MAX(v, m) (v + 1 > m ? m : v + 1)
#define DEC_ONE_MIN(v, m) (v - 1 < m ? m : v - 1)

int main(int argc, char const *argv[])
{
    int x = 1 , y = 30;

    printf("x before loop: %d\n", x);
    printf("y before loop: %d\n", y);

    for (size_t i = 0; i < 300; i++)
    {
        x = INC_ONE_MAX(x, 20);
        y = DEC_ONE_MIN(y, 14);
    }

    printf("x after loop: %d\n", x);
    printf("y after loop: %d\n", y);

    return 0;
}
