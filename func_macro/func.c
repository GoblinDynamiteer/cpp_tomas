#include <stdio.h>

#define INC_ONE_MAX(v, m) (v + 1 > m ? m : v + 1)

int main(int argc, char const *argv[])
{
    int x = 1;

    printf("x before loop: %d\n", x);

    for (size_t i = 0; i < 300; i++)
    {
        x = INC_ONE_MAX(x, 20);
    }

    printf("x after loop: %d\n", x);

    return 0;
}
