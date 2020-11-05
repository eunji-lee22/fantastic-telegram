#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    int N, K, nextTarget=0;
    vector<int> v;
    v.clear();

    cin >> N >> K;

    K--;
    for(int i=1; i<=N; i++) {
        v.push_back(i);
    }

    cout << "<";
    while (!v.empty())
    {
        nextTarget += K;
        while(nextTarget >= v.size()) nextTarget -= v.size();
        cout << v[nextTarget];
        v.erase(v.begin() + nextTarget);
        if(v.size() == 0) break;
        cout << ", ";
    }
    cout << ">";

    return 0;
}
