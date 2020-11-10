#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    vector<pair<int, string>> v;

    int N=0;
    cin >> N;

    for(int i=0; i<N; i++) {
        string y;

        cin >> y;

        v.push_back(pair<int, string>(y.length(), y));
    }

    sort(v.begin(), v.end());

    cout << v.at(0).second << "\n";

    for(int i=1; i<N; i++) {
        string newTxt = v.at(i).second;
        string oldTxt = v.at(i-1).second;

        if(oldTxt == newTxt) continue;
        cout << v.at(i).second << "\n";
    }

    return 0;
}

