#include <string>
#include <vector>

using namespace std;

int cnt = 0;
bool isVisited[8] = {0};
string member = "ACFJMNRT";
int findMember(string s, char c)
{
    for(int i=0, size=s.size(); i<size; i++)
    {
        if(s[i] == c) return i;
    }
    
    return -1;
}
bool checkValidation(string s, vector<string> v)
{
    for(int i=0, size=v.size(); i<size; i++)
    {
        string str = v[i];
        char op = str[3];
        int dis = str[4] - '0';
        int fIndex = findMember(s, str[0]);
        int tIndex = findMember(s, str[2]);
        
        if(fIndex == -1 || tIndex == -1) continue;
        
        if(op == '=' && abs(fIndex - tIndex) != dis+1) return false;
        if(op == '>' && abs(fIndex - tIndex) <= dis+1) return false;
        if(op == '<' && abs(fIndex - tIndex) > dis) return false;
    }
    return true;
}
void solve(string s, vector<string> v)
{
    if(s.size() == 8)
    {
        if(checkValidation(s, v)) cnt++;
        
        return;
    }
    
    for(int i=0; i<8; i++)
    {
        if(isVisited[i] == true) continue;
        if(checkValidation(s+member[i], v) == false) continue;
        isVisited[i] = true;
        s += member[i];
        solve(s, v);
        s.pop_back();
        isVisited[i] = false;
    }
}
int solution(int n, vector<string> data) {
    for(int i=0; i<8; i++)
    {
        isVisited[i] = false;
    }
    
    solve("", data);
    
    return cnt;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (900.66ms, 4.08MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 5점
 */