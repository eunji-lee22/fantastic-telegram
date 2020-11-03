#include <stdio.h>

int main()
{
    // review: count 초기화 해서 사용할 것!
    int input, max=0, count;

    for(int i=1; i<=9; i++){
        scanf("%d", &input);

        if(input > max) {
            max = input;
            count = i;
        }
    }

    printf("%d\n", max);
    printf("%d", count);

    return 0;
}
