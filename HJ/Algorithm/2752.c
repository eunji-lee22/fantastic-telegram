#include <stdio.h>

#define MAX_COUNT 10000 + 1

int main()
{
    int num[3];

    for(int i=0; i<3; i++) {
        scanf("%d", &num[i]);
    }

    for(int i=0; i<3; i++) {
        for(int j=i+1; j<3; j++) {
            if(num[i] < num[j]) continue;
            int tmp = num[i];
            num[i] = num[j];
            num[j] = tmp;
        }
    }

    for(int i=0; i<3; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}
