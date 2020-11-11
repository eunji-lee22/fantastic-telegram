#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    vector<int> v;

    int N=0;
    cin >> N;

    for(int i=0; i<N; i++) {
        int value;
        cin >> value;

        v.push_back(value);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<N; i++) {
        cout << v.at(i) << "\n";
    }

    return 0;
}

