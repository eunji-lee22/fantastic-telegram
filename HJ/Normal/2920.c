#include <stdio.h>

int main()
{
    int data[8] = {0};

    for(int i=0; i<8; i++){
        scanf("%d", &data[i]);
    }

    if(data[0] != 1 && data[0] != 8) {
        printf("mixed");
        return 0;
    }

    for(int i=0; i<7; i++) {
        if(data[0] == 1 && data[i]+1 != data[i+1]) {
            printf("mixed");
            return 0;
        }
        else if(data[0] == 8 && data[i]-1 != data[i+1]){
            printf("mixed");
            return 0;
        }
    }

    if(data[0] == 1) printf("ascending");
    else if(data[0] == 8) printf("descending");

    return 0;
}
