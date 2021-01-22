#include <string>
#include <vector>

using namespace std;

bool isExistMusic(string sing, string m)
{
    int n = sing.find(m);
    
    if(n == string::npos) return false;
    n += m.size();
    if(n < sing.size()) return (sing[n] == '#') ? isExistMusic(sing.substr(n), m) : true;
    
    return true;
}
int getMinuteDiff(string startTime, string endTime)
{
    int startTime_hour = stoi(startTime.substr(0, 2));
    int startTime_minute = stoi(startTime.substr(3, 2));
    int endTime_hour = stoi(endTime.substr(0, 2));
    int endTime_minute = stoi(endTime.substr(3, 2));
    
    return (endTime_hour - startTime_hour) * 60
        + (endTime_minute - startTime_minute);
}
string solution(string m, vector<string> musicinfos) {
    pair<int, string> answer = make_pair(0, "");
    
    for(string musicInfo : musicinfos)
    {
        string startTime = musicInfo.substr(0, 5);
        string endTime = musicInfo.substr(6, 5);
        int minute = getMinuteDiff(startTime, endTime);
        string musicName = "";
        string music = "";
        string sing = "";
        bool check = false;
        for(int i=12, size=musicInfo.size(); i<size; i++)
        {
            if(musicInfo[i] == ',') check = true;
            else
                (check) ? music += musicInfo[i] : musicName += musicInfo[i];            
        }
        
        int index = 0, musicSize = music.size();
        while(minute)
        {
            sing += music[index++];
            if(music[index] == '#') sing += music[index++];
            if(index >= musicSize) index = 0;
            minute--;
        }
        //printf("debug:%s\n", sing.c_str());
                
        if(!isExistMusic(sing, m)) continue;
        
        if(sing.size() > answer.first)
        {
            //printf("%d:%s = %d:%s\n", answer.first, answer.second.c_str(), sing.size(), musicName.c_str());
            answer.first = sing.size();
            answer.second = musicName;
        }
        
    }
    
    return (answer.first) ? answer.second : "(None)";
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.71MB)
 * 테스트 2 〉	통과 (0.02ms, 3.95MB)
 * 테스트 3 〉	통과 (0.02ms, 3.94MB)
 * 테스트 4 〉	통과 (0.02ms, 3.96MB)
 * 테스트 5 〉	통과 (0.02ms, 3.96MB)
 * 테스트 6 〉	통과 (0.02ms, 3.97MB)
 * 테스트 7 〉	통과 (0.04ms, 3.96MB)
 * 테스트 8 〉	통과 (0.04ms, 3.95MB)
 * 테스트 9 〉	통과 (0.05ms, 3.71MB)
 * 테스트 10 〉	통과 (0.06ms, 3.96MB)
 * 테스트 11 〉	통과 (0.04ms, 3.97MB)
 * 테스트 12 〉	통과 (0.05ms, 3.94MB)
 * 테스트 13 〉	통과 (0.05ms, 3.97MB)
 * 테스트 14 〉	통과 (0.05ms, 3.9MB)
 * 테스트 15 〉	통과 (0.09ms, 3.93MB)
 * 테스트 16 〉	통과 (0.04ms, 3.96MB)
 * 테스트 17 〉	통과 (0.05ms, 3.93MB)
 * 테스트 18 〉	통과 (0.04ms, 3.78MB)
 * 테스트 19 〉	통과 (0.04ms, 3.95MB)
 * 테스트 20 〉	통과 (0.04ms, 3.96MB)
 * 테스트 21 〉	통과 (0.05ms, 3.97MB)
 * 테스트 22 〉	통과 (0.06ms, 3.96MB)
 * 테스트 23 〉	통과 (0.04ms, 3.77MB)
 * 테스트 24 〉	통과 (0.04ms, 3.72MB)
 * 테스트 25 〉	통과 (0.02ms, 3.95MB)
 * 테스트 26 〉	통과 (0.02ms, 3.96MB)
 * 테스트 27 〉	통과 (0.02ms, 3.97MB)
 * 테스트 28 〉	통과 (0.02ms, 3.94MB)
 * 테스트 29 〉	통과 (0.33ms, 3.95MB)
 * 테스트 30 〉	통과 (0.37ms, 3.89MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 9
 */