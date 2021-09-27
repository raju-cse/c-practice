#include<stdio.h>

int main()
{
    int a=5;
    int i=1;
    for(;;){
        printf("%d X %d = %d\n",a,i,a*i);
        i++;
        if(i>10){
            break;
        }
    }

    return 0;
}
