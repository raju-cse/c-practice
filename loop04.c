#include<stdio.h>

int main()
{
    int n = 0;
    while (n < 100) { //printf("%d\n",n);
    n = n + 1;
    if (n % 2 == 0) {
    continue;
    }
    printf("%d\n", n);
    }
    return 0;
}
