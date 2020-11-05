#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    vector<int> va, vb;

    va.clear();
    vb.clear();

    int N,sum=0;

    cin >> N;

    for(int i=0; i<N; i++) {
        int target;
        cin >> target;
        va.push_back(target);
    }

    for(int i=0; i<N; i++) {
        int target;
        cin >> target;
        vb.push_back(target);
    }

    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end(), greater<int>());

    for(int i=0; i<N; i++) {
        sum += va[i] * vb[i];
    }

    cout << sum << "\n";

    return 0;
}
