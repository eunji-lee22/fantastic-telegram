#include <iostream>
 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int max = 0, human=0;

    for(int i=0; i<4; i++) {
        int a, b;

        cin >> a >> b;

        human = human - a + b;
        max = (max >= human) ? max : human;
    }

    cout << max << "\n";

    return 0;
}

