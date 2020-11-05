#include <iostream>

using namespace std;

#define MAX_COUNT 1000000 + 1

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int score, sum=0;

    for(int i=0; i<5; i++) {
        cin >> score;
        if(score < 40) sum += 40;
        else sum += score;
    }

    cout << sum/5;

    return 0;
}
