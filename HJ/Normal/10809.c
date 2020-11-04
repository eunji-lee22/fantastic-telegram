#include <stdio.h>
#include <string.h>

int main()
{
    char input[101] = "";
    int count[26] = {0};   
    memset(count, -1, sizeof(count));

    //review: input은 배열이므로 &input -> input
    scanf("%s", &input);

    for (int i = 0; i < 101; i++)
    {
        if(input[i] == '\0') break;
        if(count[input[i]-97] == -1) count[input[i]-97] = i;
    }

    //97~122
    for(int i=0; i<26; i++) {
        printf("%d ", count[i]);
    }

    return 0;
}
