#include <stdio.h>
#include <string.h>

int main()
{
    int N=0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        char input[62] = "";
        scanf("%s", input);
        printf("%s\n", (input[strlen(input)-1]%2==0) ? "even" : "odd");
    }

    return 0;
}
