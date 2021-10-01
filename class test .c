#include<stdio.h>

int main()
{
    int mark;
    printf ("The input mark should be within the range (1 to 100)\n");
    scanf ("%d",&mark);
    if ( mark >= 80 && mark <=100)
    {
        printf ( "The grade= A+");
    }
    else if ( mark >= 75 && mark <80)
    {
        printf ( "The grade= A");
    }
    else if ( mark >=70 && mark <75)
    {
        printf ( "The grade= A-");
    }
    else if ( mark >=65 && mark <70)
    {
        printf( "The grade= B+");
    }
    else if ( mark >=60 && mark <65)
    {
        printf ( "The grade= B");
    }
    else if ( mark >=55 && mark <60)
    {
        printf ( "The grade= B-");
    }
    else if ( mark >=50 && mark <55)
    {
        printf ( "The grade= C+");
    }
    else if ( mark >=45 && mark <50)
    {
        printf ( "The grade= C");
    }
    else if ( mark >=40 && mark <45)
    {
        printf ( "The grade= D");
    }
    else
    {
        printf ( "The grade= F");
    }

    return 0;
}
