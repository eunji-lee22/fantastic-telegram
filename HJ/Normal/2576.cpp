#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long min = 101, sum=0, num;

    for(int i=0; i<7; i++) {
        cin >> num;
        if(num%2 == 1) {
            sum += num;
            min = (min < num) ? min : num;
        }
    }
    
    if(min > 100) cout << "-1\n";
    else cout << sum << "\n" << min << "\n";

    return 0;
}
