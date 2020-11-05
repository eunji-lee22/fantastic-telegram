#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

int func(int b, int start, int end);
vector<int> va;
vector<int> vb;
int a,b;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    va.clear();
    vb.clear();

    cin >> a;

    for(int i=0; i<a; i++) {
        int target;
        cin >> target;
        va.push_back(target);
    }

    cin >> b;

    for(int i=0; i<b; i++) {
        int target;
        cin >> target;
        vb.push_back(target);
    }

    sort(va.begin(), va.end());

    for(int i=0; i<b; i++) {
        cout << func(vb[i], 0, a-1) << "\n";
    }

    return 0;
}

int func(int b, int start, int end) {
    if(start > end) return 0;
    int p = (start + end) / 2;

    if(va[p] == b) return 1;
    else if(va[p] < b) return func(b, p+1, end);
    else if(va[p] > b) return func(b, start, p-1);

    // return -1;
}
