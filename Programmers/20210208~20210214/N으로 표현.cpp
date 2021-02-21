#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int solution(int N, int number) {
    int answer = -1;
    unordered_set<int> s[8];
    
    int sum = 0;
    for(int i = 0 ; i < 8 ; i++){
        sum = sum * 10 + N;
        s[i].insert(sum);
    }

    for(int i = 1 ; i < 8 ; i++){
        for(int j = 0 ; j < i ; j++){
            for(auto& op1 : s[j]){
                for(auto& op2 : s[i-j-1]){
                    s[i].insert(op1 + op2);
                    s[i].insert(op1 - op2);
                    s[i].insert(op1 * op2);
                    if(op2 != 0) s[i].insert(op1 / op2);
                }
            }
        }
        if(s[i].count(number)){
            answer = i + 1;
            break;
        }
    }
    return answer;
}