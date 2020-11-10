#include <iostream>

using namespace std;

void solve(int n, int r, int c);

#define MAX_COUNT 3000

int map[MAX_COUNT][MAX_COUNT] = {0};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    int N=0;
    
    cin >> N;
    
    solve(N, 0, 0);
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            char c = (map[i][j] == 1) ? '*' : ' '; 
            cout << c;
        }
        cout << "\n";
    }

    return 0;
}

void solve(int n, int r, int c) {
    if(n == 1) {
        map[r][c] = 1;
        return;
    }
    
    int divide = n / 3;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(i==1 && j==1) continue;
            solve(divide, divide*i+r, divide*j+c);
        }
    }
}
