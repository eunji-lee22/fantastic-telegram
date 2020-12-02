#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    // 0021의 경우 if(!v.empty() && n%3)  n /= 3; 으로 하려다가 v.empty() 체크 하는게 더 안좋을거 같아 그냥 둠.
    while(n)
    {
        v.push_back(n%3);
        n/=3;
    }
    // 비트 마스킹 응용 (2진법에서 1비트의 차이는 2배가 됨.)
    for(int i=0, size=v.size(); i<size; i++)
    {
        answer *= 3;
        answer += v[i];
    }
    return answer;
}