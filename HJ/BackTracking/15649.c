#include <stdio.h>

void n_and_m (int locate);
int n=0,m=0;
int is_located[10];
int result[10];

int main()
{
    scanf("%d %d", &n, &m);

    n_and_m(0);

    return 0;
}

void n_and_m (int locate) {
    if(locate == m) {
        for (int i = 0; i < m; i++)
        {
            printf("%d ", result[i]);
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        if(is_located[i]) continue;
        is_located[i] = 1;
        result[locate] = i;
        n_and_m(locate+1);
        is_located[i] = 0;
    }

}