#include <stdio.h>

int main()
{
    int count = 0, input;
    int data[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

    for(int i=0; i<10; i++){
        scanf("%d", &input);

        for(int j=0, max=count; j<=max; j++){
            if(data[j] == input % 42) break;
            if(j==count) data[count++] = input % 42;
        }
    }

    printf("%d", count);
    
    return 0;
}
