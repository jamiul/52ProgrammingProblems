/*
Input:
3
0
5
2222

Output:
even
odd
even

**/
#include<stdio.h>

int main()
{
    int T, i, n;

    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {
        scanf("%d", &n);

        if(n % 2 == 0)
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
