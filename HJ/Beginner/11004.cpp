#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;

    int N, K;

    cin >> N >> K;

    for(int i=0; i<N; i++) {
        int value=0;

        cin >> value;
        v.push_back(value);
    }

    sort(v.begin(), v.end());

    cout << v[K-1] << "\n";  

    return 0;
}
