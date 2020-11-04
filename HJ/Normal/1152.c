#include <stdio.h>

int main()
{
    char input[1000001] = "";
    int count=1;

    scanf("%[^\n]", input);

    for (int i = 0; i < 1000001; i++)
    {
        if (input[i] == '\0') {
            if(input[i-1] == 32) count--;
        }
        
        if(input[i] == 32 && i!=0) count++;
    }
    
    printf("%d", count);

    return 0;
}
