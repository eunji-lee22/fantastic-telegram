#include <iostream>

using namespace std;

void n_and_m(int locate, int top);

int n=0,m=0;
int result[10] = {0};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    n_and_m(0, 1);

    return 0;
}

void n_and_m (int locate, int top) {
    if(locate == m) {
        for (int i = 0; i < m; i++)
        {
            cout << result[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = top; i <= n; i++)
    {
        result[locate] = i;
        n_and_m(locate+1, top);
        top++;
    }

}