#include<stdio.h>

int main()
{
    int m,a=5;
    int i;
    m=0;
    for(i=1;i<=10;i++){
     m=m+a;
        printf("%d X %d = %d\n",a,i,m);
    }

    return 0;
}
