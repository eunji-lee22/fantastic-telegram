#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    vector<pair<int, int>> v;

    int N=0;
    cin >> N;

    for(int i=0; i<N; i++) {
        int x, y;
        cin >> x >> y;

        v.push_back(pair<int, int>(y, x));
    }

    sort(v.begin(), v.end());

    for(int i=0; i<N; i++) {
        cout << v.at(i).second << " " << v.at(i).first << "\n";
    }

    return 0;
}

