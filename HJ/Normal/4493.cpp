#include <iostream>

using namespace std;

#define MAX_COUNT 100

int rps(char p1, char p2);

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    int T=0;

    cin >> T;

    for(int i=0; i<T; i++) {
        int N=0, result=0;
        cin >> N;

        for(int j=0; j<N; j++) {
            char p1, p2;
            cin >> p1 >> p2;
            result += rps(p1, p2);
        }

        string str = "";
        if(result > 0) str = "Player 1";
        else if(result == 0) str = "TIE";
        else if(result < 0) str = "Player 2";

        cout << str << "\n";
    }

    return 0;
}

int rps(char p1, char p2)
{
    int result = 0;

    switch (p1)
    {
    case 'R':
        if(p2 == 'R') result = 0;
        if(p2 == 'P') result = -1;
        if(p2 == 'S') result = 1;
        break;
    case 'P':
        if(p2 == 'R') result = 1;
        if(p2 == 'P') result = 0;
        if(p2 == 'S') result = -1;
        break;
    case 'S':
        if(p2 == 'R') result = -1;
        if(p2 == 'P') result = 1;
        if(p2 == 'S') result = 0;
        break;
    default:
        break;
    }

    return result;
}