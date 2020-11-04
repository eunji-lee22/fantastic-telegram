#include <iostream>

using namespace std;

#define MAX_COUNT 15

void nQueen(int row);
bool useCol[MAX_COUNT] = {0};
bool increase[MAX_COUNT * 2] = {0};
bool disincrease[MAX_COUNT * 2] = {0};
int count = 0, N=0;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    nQueen(0);

    cout << count << "\n";

    return 0;
}

void nQueen(int row) {
    if(row == N) {
        count++;
        return;
    }    

    for(int col=0; col<N; col++){
        if(useCol[col] || increase[row+col] || disincrease[row-col+N-1]) continue;
        useCol[col] = increase[row+col] = disincrease[row-col+N-1] = true;
        nQueen(row+1);
        useCol[col] = increase[row+col] = disincrease[row-col+N-1] = false;
    }
}
