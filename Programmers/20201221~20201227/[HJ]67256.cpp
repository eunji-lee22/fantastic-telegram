#include <string>
#include <vector>

using namespace std;

int getDistance(int number, string handNumber) {
    int dis = 0;
    
    if(number == 2)
    {
        if(handNumber == "2") dis = 0;
        else if(handNumber=="1" || handNumber=="3" || handNumber=="5") dis = 1;
        else if(handNumber=="4" || handNumber=="6" || handNumber=="8") dis = 2;
        else if(handNumber=="7" || handNumber=="9" || handNumber=="0") dis = 3;
        else dis = 4;
    }
    else if(number == 5)
    {
        if(handNumber == "5") dis = 0;
        else if(handNumber=="2" || handNumber=="4" || handNumber=="6" || handNumber=="8") dis = 1;
        else if(handNumber=="1" || handNumber=="3" || handNumber=="7" || handNumber=="9" || handNumber=="0") dis = 2;
        else dis = 3;
    }
    else if(number == 8)
    {
        if(handNumber == "8") dis = 0;
        else if(handNumber=="5" || handNumber=="7" || handNumber=="9" || handNumber=="0") dis = 1;
        else if(handNumber=="2" || handNumber=="4" || handNumber=="6" || handNumber=="*" || handNumber=="#") dis = 2;
        else dis = 3;
    }
    else if(number == 0)
    {
        if(handNumber == "0") dis = 0;
        else if(handNumber=="8" || handNumber=="*" || handNumber=="#") dis = 1;
        else if(handNumber=="7" || handNumber=="9" || handNumber=="5") dis = 2;
        else if(handNumber=="4" || handNumber=="6" || handNumber=="2") dis = 3;
        else dis = 4;
    }
    
    return dis;
}
string solution(vector<int> numbers, string hand) {
    string answer = "", l="*",r="#";
    
    for(int i : numbers)
    {
        switch(i)
        {
            case 1: case 4: case 7:
                answer += "L";
                l = i + '0';
                break;
            case 3: case 6: case 9:
                answer += "R";
                r = i + '0';
                break;
            default:
                int disL = getDistance(i, l);
                int disR = getDistance(i, r);
                if(disL == disR)
                {
                    if(hand == "left")
                    {
                        answer += "L";
                        l = i + '0';
                    }
                    else
                    {
                        answer += "R";
                        r = i + '0';
                    }
                }
                else
                {
                    if(disL < disR)
                    {
                        answer += "L";
                        l = i + '0';                        
                    }
                    else
                    {
                        answer += "R";
                        r = i + '0';
                    }
                }
                break;
        }
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.93MB)
 * 테스트 2 〉	통과 (0.01ms, 3.93MB)
 * 테스트 3 〉	통과 (0.01ms, 3.94MB)
 * 테스트 4 〉	통과 (0.01ms, 3.94MB)
 * 테스트 5 〉	통과 (0.02ms, 3.93MB)
 * 테스트 6 〉	통과 (0.01ms, 3.7MB)
 * 테스트 7 〉	통과 (0.01ms, 3.97MB)
 * 테스트 8 〉	통과 (0.02ms, 3.96MB)
 * 테스트 9 〉	통과 (0.01ms, 3.94MB)
 * 테스트 10 〉	통과 (0.01ms, 3.94MB)
 * 테스트 11 〉	통과 (0.02ms, 3.95MB)
 * 테스트 12 〉	통과 (0.02ms, 3.95MB)
 * 테스트 13 〉	통과 (0.02ms, 3.92MB)
 * 테스트 14 〉	통과 (0.03ms, 3.95MB)
 * 테스트 15 〉	통과 (0.05ms, 3.92MB)
 * 테스트 16 〉	통과 (0.06ms, 3.96MB)
 * 테스트 17 〉	통과 (0.08ms, 3.97MB)
 * 테스트 18 〉	통과 (0.09ms, 3.96MB)
 * 테스트 19 〉	통과 (0.09ms, 3.94MB)
 * 테스트 20 〉	통과 (0.09ms, 3.85MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 3점
 */