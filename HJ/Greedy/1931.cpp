#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    vector<pair<int, int>> v;
    int N;

    cin >> N;

    for(int i=0; i<N; i++)
    {
        int startTime, endTime;
        cin >> startTime >> endTime;

        v.push_back(pair<int, int>(startTime, endTime));
    }

    sort(v.begin(), v.end());
    
    vector<pair<int, int>> v_MeetingTime;
    v_MeetingTime.push_back(v[0]);
    for(int i=1; i<N; i++)
    {
        int oldEndTIme = v_MeetingTime.back().second;
        if(v[i].first >= oldEndTIme) v_MeetingTime.push_back(v[i]);
        else if(v[i].second < oldEndTIme) {
            v_MeetingTime.pop_back();
            v_MeetingTime.push_back(v[i]);
        }
    }

    cout << v_MeetingTime.size() << "\n";
    
    return 0;
}
