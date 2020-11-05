#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_COUNT 8 + 1

void func(int located, int start);
unsigned int input[MAX_COUNT] = {0};
unsigned int result[MAX_COUNT] = {0};
unsigned int isUsed[MAX_COUNT] = {0};
unsigned int N, M;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for(int i=0; i<N; i++) {
        cin >> input[i];
    }
    sort(input, input+N);
    
    func(0, 0);

    return 0;
}

void func(int located, int start) {
    if(located == M) {
        for(int i=0; i<M; i++) {
            cout << result[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i=start; i<N; i++) {
        if(isUsed[i]) continue;
        // isUsed[i] = 1;
        result[located] = input[i];
        func(located+1, i);
        // isUsed[i] = 0;
    }

    return;
}