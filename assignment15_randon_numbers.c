#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main()
{
    int n,i;

    printf("Enter the number of random numbers you want: ");
    scanf("%d", &n);
    srand(time(0));

    printf("Pseudo random numbers:\n");
    for(i=1;i<=n;i++) {
        printf("%d\n",rand());
    }

    return 0;
}
