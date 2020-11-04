#include <stdio.h>

int main()
{
    int T=0,R=0;
    char input[21] = "";

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &R);
        //review: 배열은 이미 포인터이므로 &input -> input
        scanf("%s", &input);
        
        for (int j = 0; j < 21; j++)
        {
            if(input[j] == '\0') break;
            for(int z=0; z<R; z++){
                printf("%c", input[j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
