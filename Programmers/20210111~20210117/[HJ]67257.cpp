#include <string>
#include <vector>
#include <stack>

using namespace std;
long long compute(vector<string>& v)
{
    stack<long long> s;
    long long num1=0,num2=0;
    
    for(string value : v)
    {
        //printf("%s|", value.c_str());
        if(value == "*" || value == "-" || value == "+")
        {
            if(s.size() > 0)
            {
                num1 = s.top();
                s.pop();
            }            
            
            if(s.size() > 0)
            {
                num2 = s.top();
                s.pop();
            }
            
            
            if(value == "*") s.push(num2 * num1);
            if(value == "-") s.push(num2 - num1);
            if(value == "+") s.push(num2 + num1);
        }
        else
            s.push(stoll(value));
    }
    //printf("\n");
    
    long long result = s.top();
    return (result > 0) ? result : -result;
}
long long solution(string expression) {
    long long answer = 0, tmp = 0;
    vector<string> opers = {"*-+", "*+-", "-*+", "-+*", "+*-", "+-*"};
    
    for(int i=0; i<6; i++)
    {
        vector<string> v;
        stack<char> st;
        string sTop = "";
        int num = 0;
        
        for(auto c : expression)
        {
            if (c < '0' || c > '9')
            {
                v.push_back(to_string(num));
                num = 0;
                
                if(st.empty()) st.push(c);
                else
                {                    
                    int cnt = st.size();                    
                    while(cnt--)
                    {          
                        char top = st.top();
                        int top_index = 0, c_index = 0;
                        for(int j=0; j<3; j++)
                        {
                            if(opers[i][j] == top) top_index = j;
                            if(opers[i][j] == c) c_index = j;
                        }
                        
                        // top이 우선순위가 높을 경우, top 출력
                        if(top_index <= c_index)
                        {
                            sTop = top;
                            v.push_back(sTop);
                            st.pop();
                        }
                        // 아닐 경우, 탐색 종료
                        else break;
                    } // while-end
                    
                    st.push(c);
                } // else-end            
            } // if-end        
            else num = num * 10 + (c-'0');            
        }
        
        if(num > 0) v.push_back(to_string(num));
        while(st.size() > 0)
        {
            sTop = st.top();
            v.push_back(sTop);
            st.pop();
        }
        tmp = compute(v);
        answer = (tmp > answer) ? tmp : answer;
    }
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.03ms, 3.92MB)
 * 테스트 2 〉	통과 (0.03ms, 3.83MB)
 * 테스트 3 〉	통과 (0.04ms, 3.94MB)
 * 테스트 4 〉	통과 (0.04ms, 3.9MB)
 * 테스트 5 〉	통과 (0.05ms, 3.95MB)
 * 테스트 6 〉	통과 (0.04ms, 3.93MB)
 * 테스트 7 〉	통과 (0.05ms, 3.94MB)
 * 테스트 8 〉	통과 (0.04ms, 3.92MB)
 * 테스트 9 〉	통과 (0.06ms, 3.96MB)
 * 테스트 10 〉	통과 (0.05ms, 3.94MB)
 * 테스트 11 〉	통과 (0.05ms, 3.95MB)
 * 테스트 12 〉	통과 (0.06ms, 3.94MB)
 * 테스트 13 〉	통과 (0.07ms, 3.9MB)
 * 테스트 14 〉	통과 (0.07ms, 3.94MB)
 * 테스트 15 〉	통과 (0.06ms, 3.93MB)
 * 테스트 16 〉	통과 (0.04ms, 3.96MB)
 * 테스트 17 〉	통과 (0.03ms, 3.94MB)
 * 테스트 18 〉	통과 (0.03ms, 3.91MB)
 * 테스트 19 〉	통과 (0.03ms, 3.95MB)
 * 테스트 20 〉	통과 (0.04ms, 3.94MB)
 * 테스트 21 〉	통과 (0.07ms, 3.91MB)
 * 테스트 22 〉	통과 (0.07ms, 3.93MB)
 * 테스트 23 〉	통과 (0.03ms, 3.93MB)
 * 테스트 24 〉	통과 (0.07ms, 3.95MB)
 * 테스트 25 〉	통과 (0.07ms, 3.93MB)
 * 테스트 26 〉	통과 (0.03ms, 3.93MB)
 * 테스트 27 〉	통과 (0.07ms, 3.83MB)
 * 테스트 28 〉	통과 (0.07ms, 3.89MB)
 * 테스트 29 〉	통과 (0.07ms, 3.94MB)
 * 테스트 30 〉	통과 (0.07ms, 3.93MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 2
 */