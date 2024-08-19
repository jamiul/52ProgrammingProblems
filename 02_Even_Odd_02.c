/*
Input:
4
0
-22
5
1267818768111166

Output:
even
even
odd
even

**/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isEven(char* number)
{
    int lastDigit = number[strlen(number) - 1] - '0';
    return (lastDigit % 2 == 0);
}

int main()
{

    int T, i;

    char n[101];

    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {
        scanf("%s", &n);


        if(isEven(n))
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }

    }

    return 0;
}
