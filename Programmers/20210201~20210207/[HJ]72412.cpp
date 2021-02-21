#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> info, vector<string> query) {
    vector<int> answer;
    unordered_map<string, vector<int>> infoMap;
    string temp[4], score;
    
    for(string s : info)
    {
        stringstream ss(s);
        ss >> temp[0] >> temp[1] >> temp[2] >> temp[3] >> score;
        
        infoMap[temp[0]+temp[1]+temp[2]+temp[3]].push_back(stoi(score));
        infoMap["-"+temp[1]+temp[2]+temp[3]].push_back(stoi(score));
        infoMap[temp[0]+"-"+temp[2]+temp[3]].push_back(stoi(score));
        infoMap[temp[0]+temp[1]+"-"+temp[3]].push_back(stoi(score));
        infoMap[temp[0]+temp[1]+temp[2]+"-"].push_back(stoi(score));
        infoMap["--"+temp[2]+temp[3]].push_back(stoi(score));
        infoMap["-"+temp[1]+"-"+temp[3]].push_back(stoi(score));
        infoMap["-"+temp[1]+temp[2]+"-"].push_back(stoi(score));
        infoMap[temp[0]+"--"+temp[3]].push_back(stoi(score));
        infoMap[temp[0]+"-"+temp[2]+"-"].push_back(stoi(score));        
        infoMap[temp[0]+temp[1]+"--"].push_back(stoi(score));
        infoMap["---"+temp[3]].push_back(stoi(score));
        infoMap["--"+temp[2]+"-"].push_back(stoi(score));
        infoMap["-"+temp[1]+"--"].push_back(stoi(score));
        infoMap[temp[0]+"---"].push_back(stoi(score));
        infoMap["----"].push_back(stoi(score));
    }
    
    for(auto iter = infoMap.begin(); iter!=infoMap.end(); iter++)
    {
        sort(iter->second.begin(), iter->second.end());
    }
    
    for(string s : query)
    {
        stringstream ss(s);
        ss >> temp[0] >> score >> temp[1] >> score >> temp[2] >> score >> temp[3] >> score;
        string q = temp[0] + temp[1] + temp[2] + temp[3];
        auto iter = lower_bound(infoMap[q].begin(), infoMap[q].end(), stoi(score));
        answer.push_back(infoMap[q].end() - iter);
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.14ms, 3.97MB)
 * 테스트 2 〉	통과 (0.14ms, 3.89MB)
 * 테스트 3 〉	통과 (0.26ms, 3.96MB)
 * 테스트 4 〉	통과 (1.49ms, 3.98MB)
 * 테스트 5 〉	통과 (1.70ms, 4.03MB)
 * 테스트 6 〉	통과 (2.23ms, 3.94MB)
 * 테스트 7 〉	통과 (2.82ms, 4.25MB)
 * 테스트 8 〉	통과 (14.14ms, 4.95MB)
 * 테스트 9 〉	통과 (14.74ms, 4.96MB)
 * 테스트 10 〉	통과 (15.28ms, 5.01MB)
 * 테스트 11 〉	통과 (1.76ms, 4.05MB)
 * 테스트 12 〉	통과 (2.37ms, 3.97MB)
 * 테스트 13 〉	통과 (2.86ms, 4.27MB)
 * 테스트 14 〉	통과 (7.87ms, 4.31MB)
 * 테스트 15 〉	통과 (8.26ms, 4.34MB)
 * 테스트 16 〉	통과 (1.72ms, 4MB)
 * 테스트 17 〉	통과 (2.38ms, 3.97MB)
 * 테스트 18 〉	통과 (7.87ms, 4.34MB)
 * 효율성  테스트
 * 테스트 1 〉	통과 (304.88ms, 43.4MB)
 * 테스트 2 〉	통과 (308.36ms, 44MB)
 * 테스트 3 〉	통과 (286.90ms, 43.2MB)
 * 테스트 4 〉	통과 (296.29ms, 43.3MB)
 * 채점 결과
 * 정확성: 40.0
 * 효율성: 60.0
 * 합계: 100.0 / 100.0
 * 점수: 9
 */