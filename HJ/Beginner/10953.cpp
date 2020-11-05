#include <iostream>
#include <string.h>

using namespace std;

#define MAX_COUNT 1000 + 1

void func(int N);

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int N;
    char c;
    int a, b;

    cin >> N;

    //review: type warning!
    for(int i=0; i<N; i++) {
        cin >> a >> c >> b;
        cout << a+b << "\n";
    }

    return 0;
}
