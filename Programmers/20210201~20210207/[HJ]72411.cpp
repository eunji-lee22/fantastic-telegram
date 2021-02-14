#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

void getNewOrder(string order, int index, int course, string newOrder, vector<string>& result)
{
    if(newOrder.size() >= course)
    {
        result.push_back(newOrder);
        return;
    }
    int size = order.size();
    
    for(int i=index; i<size; i++)
    {
        newOrder += order[i];
        getNewOrder(order, i+1, course, newOrder, result);
        newOrder.pop_back();
    }
}
vector<string> solution(vector<string> orders, vector<int> course) {
    unordered_map<string, int> _map;
    vector<string> temp;
    vector<int> maxCnt(11, 2);
    
    for(string order : orders)
    {
        for(int n : course)
        {
            temp.clear();
            sort(order.begin(), order.end());
            getNewOrder(order, 0, n, "", temp);
            
            for(string s : temp)
            {
                _map[s]++;
                maxCnt[n] = (maxCnt[n] > _map[s]) ? maxCnt[n] : _map[s];
            }
        }
    }
    vector<string> answer;
    
    for(auto iter=_map.begin(); iter!=_map.end(); iter++)
    {
        if(iter->second >= maxCnt[iter->first.size()]) answer.push_back(iter->first);
    }
    sort(answer.begin(), answer.end());
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.06ms, 3.9MB)
 * 테스트 2 〉	통과 (0.04ms, 3.87MB)
 * 테스트 3 〉	통과 (0.06ms, 3.97MB)
 * 테스트 4 〉	통과 (0.06ms, 3.97MB)
 * 테스트 5 〉	통과 (0.06ms, 3.93MB)
 * 테스트 6 〉	통과 (0.14ms, 3.96MB)
 * 테스트 7 〉	통과 (0.13ms, 3.78MB)
 * 테스트 8 〉	통과 (0.82ms, 3.95MB)
 * 테스트 9 〉	통과 (1.09ms, 3.73MB)
 * 테스트 10 〉	통과 (0.84ms, 3.97MB)
 * 테스트 11 〉	통과 (0.53ms, 3.93MB)
 * 테스트 12 〉	통과 (0.62ms, 3.92MB)
 * 테스트 13 〉	통과 (1.09ms, 3.97MB)
 * 테스트 14 〉	통과 (1.04ms, 3.9MB)
 * 테스트 15 〉	통과 (1.04ms, 3.94MB)
 * 테스트 16 〉	통과 (0.35ms, 3.96MB)
 * 테스트 17 〉	통과 (0.75ms, 3.95MB)
 * 테스트 18 〉	통과 (0.67ms, 3.95MB)
 * 테스트 19 〉	통과 (0.30ms, 3.95MB)
 * 테스트 20 〉	통과 (0.85ms, 3.93MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 2
 */