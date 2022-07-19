//Assigment 4 Sol 1//
/*
#include<stdio.h>
int main()
{
int i=1;
while(i<=5)
{
printf("MySirG");
printf("\n");
i++;
}
return 0;
}
*/

//Sol 2//
/*
#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d",i);
        i++;
    }
    return 0;
}
*/

//Sol 3//
/*
#include<stdio.h>
int main()
{
    int i=10;
    while(i>=1)
    {
        printf("\n%d",i);
        i--;
    }
    return 0;
}
*/

//Sol 4//
/*
#include <stdio.h>

int main()
{
	printf("The First 10 Odd Natural Numbers are\n");

	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", 2 * i - 1);
	}
}
*/

//Sol 5//
/*
#include<stdio.h>
int main()
{
    printf("The first 10 odd Natural Number in reverse order are\n");
    for (int i=10; i>=1;i--)
    {
        printf("%d\n",2 * i - 1);

    }
    return 0;
}
*/

//Sol 6//
/*
#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d",2*i);
        printf("\n");
        i++;

    }
    return 0;
}
*/

//Sol 7//
/*
#include<stdio.h>
int main()
{
    printf("The first 10 Even Natural Number in reverse order are\n");
    for (int i=10; i>=1;i--)
    {
        printf("%d\n",2 * i);
}
return 0;
}
*/

//Sol 8//
/*
#include<stdio.h>
int main()
{

    printf("The Squares of first 10 Natural Number are\n");

    for(int i=1; i<=10;i++)
    {
        printf("square of %d is %d",i,i*i);

    }

    return 0;
}
*/

//Sol 9//
/*
#include<stdio.h>
int main()
{

    printf("The cubes of first 10 Natural Number are\n");
    for(int i=1; i<=10;i++)
    {
        printf("cubes of %d is %d",i,i*i*i);

    }

    return 0;
}
*/

//Sol 10//
#include <stdio.h>
int main()
{
    int num, i;
    printf (" Enter a number to generate the table in C: ");
    scanf (" %d", &num);

    printf ("\n Table of %d", num);

    for ( i = 1; i <= 10; i++)
    {
        printf ("\n %d * %d = %d", num, i, (num*i));
    }
    return 0;
}


