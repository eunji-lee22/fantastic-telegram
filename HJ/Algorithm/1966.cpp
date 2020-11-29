#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0, index=0, size=priorities.size();
    vector<int> v = priorities;
    
    sort(v.begin(), v.end(), greater<>());
    while(1)
    {
        if(index == size) index = 0;
        
        if(v[answer] == priorities[index])
        {
            priorities[index] = 0;
            answer++;
            
            if(location == index)
                return answer;
            
        }          
        
        index++;        
    }
    
    return answer;
}
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--)
    {
        int N, M;
        cin >> N >> M;
        vector<int> v;

        for(int i=0; i<N; i++)
        {
            int input;
            cin >> input;
            v.push_back(input);
        }

        cout << solution(v, M) << "\n";
    }

    return 0;
}

