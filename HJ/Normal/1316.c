#include <stdio.h>

int main()
{
    int N=0, count=0; 
    char input[110] = "";

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int alpha[26]={0};

        scanf("%s", input);

        for(int j=0; j<100; j++){
            if(input[j] == '\0') break;
            if(alpha[input[j] - 97] != 0 ) {
                count--;
                break;
            }
            if(input[j] == input[j+1]) continue;

            alpha[input[j] - 97]++;
        }

        count++;
    }
    
    printf("%d\n", count);
    
    return 0;
}
