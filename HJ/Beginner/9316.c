#include <stdio.h>

int main()
{
    unsigned int n=0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Hello World, Judge %d!\n", i+1);
    }
    
    return 0;
}
