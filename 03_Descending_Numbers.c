/*Dimik - Descending Number

In this problem,you will not be given any inputs. The only thing which you will have to do is to print all the numbers starting from 1 upto 1000 but in descending order.

### Solution
* Each number has to be separated using the `tab` character.
* Each line will consist of exactly 5 numbers not more nor less.

*/
#include<stdio.h>

int main() {

    int count = 0;
    for(int i = 1000; i >= 1; i--)
    {
        printf("%d\t",i);
        count++;

        if(count % 5 == 0)
        {
            printf("\n");
        }

    }
    return 0;
}
