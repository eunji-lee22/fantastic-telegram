#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    vector<pair<int, int>> v;
    vector<string> vName;

    int N=0;
    cin >> N;

    for(int i=0; i<N; i++) {
        int age;
        string name;

        cin >> age >> name;

        v.push_back(pair<int, int>(age, i));
        vName.push_back(name);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<N; i++) {
        cout << v.at(i).first << " " << vName.at(v.at(i).second) << "\n";
    }

    return 0;
}

