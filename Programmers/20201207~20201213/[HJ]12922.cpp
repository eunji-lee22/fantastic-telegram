#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";

    for(int i=0, size=n/2; i<size; i++)
    {
        answer += "수박";
    }
    if(n%2==1) answer += "수";
    return answer;
}