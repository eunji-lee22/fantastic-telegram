#include <iostream>

using namespace std;

#define MAX_COUNT 1000001

void recursion(int x);
int cnt=0;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    string X = "";
    cin >> X;

    int sum = 0;
    for(int i=0, max=X.length(); i<max; i++) {
        sum += X[i]-48;
    }

    cnt = (X.length() == 1) ? 0 : 1;
    recursion(sum);

    return 0;
}

void recursion(int x) {
    if(x < 10) {
        cout << cnt << "\n";
        cout << ((x%3==0) ? "YES" : "NO") << "\n";
        return;
    }

    int sum = 0;
    while (x)
    {
        sum += x%10;
        x /= 10;
    }        

    cnt++;
    recursion(sum);
}
