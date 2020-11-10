#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define MAX_COUNT 4000

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    vector<int> v, v2;

    int N=0, maxCnt=0, value[8001]={0};
    double sum=0;
    cin >> N;

    for(int i=0; i<N; i++) {
        int input = 0;

        cin >> input;

        sum += input;
        v.push_back(input);

        value[input+MAX_COUNT]++;
        if(value[input+MAX_COUNT] > maxCnt) {
            v2.clear();
            v2.push_back(input);
            maxCnt++;
        } else if(value[input+MAX_COUNT] == maxCnt && v2.front() != input) {
            v2.push_back(input);
        }
    }

    sort(v.begin(), v.end());
    sort(v2.begin(), v2.end());

    cout.precision(0);
    cout << fixed << sum / N << "\n";
    cout << v.at(N/2) << "\n";
    cout << ((v2.size() == 1) ? v2.at(0) : v2.at(1)) << "\n";
    cout << v.back() - v.front() << "\n";

    return 0;
}

