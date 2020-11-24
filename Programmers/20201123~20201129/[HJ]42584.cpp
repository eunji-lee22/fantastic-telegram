/*
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.95MB)
 * 테스트 2 〉	통과 (0.03ms, 3.95MB)
 * 테스트 3 〉	통과 (0.18ms, 3.94MB)
 * 테스트 4 〉	통과 (0.22ms, 3.93MB)
 * 테스트 5 〉	통과 (0.26ms, 3.95MB)
 * 테스트 6 〉	통과 (0.02ms, 3.95MB)
 * 테스트 7 〉	통과 (0.13ms, 3.94MB)
 * 테스트 8 〉	통과 (0.15ms, 3.96MB)
 * 테스트 9 〉	통과 (0.02ms, 3.94MB)
 * 테스트 10 〉	통과 (0.24ms, 3.93MB)
 * 효율성  테스트
 * 테스트 1 〉	통과 (29.09ms, 24.3MB)
 * 테스트 2 〉	통과 (20.35ms, 18.9MB)
 * 테스트 3 〉	통과 (31.69ms, 26.9MB)
 * 테스트 4 〉	통과 (23.76ms, 21.3MB)
 * 테스트 5 〉	통과 (16.21ms, 16.2MB)
 * 채점 결과
 * 정확성: 66.7
 * 효율성: 33.3
 * 합계: 100.0 / 100.0
 * 점수: 6점
 */
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    int pricesSize = prices.size();
    vector<int> answer(pricesSize), checker;

    for(int i=0; i<pricesSize; i++)
    {
        int j=0, size=checker.size();
        while(j<size)
        {
            answer[checker[j]]++;

            if(prices[checker[j]] > prices[i])
            {
                checker.erase(checker.begin()+j);
                size--;
            }
            else j++;
        }

        checker.push_back(i);
    }

    return answer;
}

/*
 * 스택으로 코드를 짤 수 있었을 꺼 같은데, 스택 안의 값 처리를 생각 못 했다.
 * 그냥 stack top 부터 하나씩 정리하면 됐는데, 시간 처리에 대해서 확신이 없었던 거 같다.
 * vector와 stack 은 stack이 속도가 더 빠르고
 * 내 로직에서도 잘 못된게 가장 마지막만 탐색하면 되는데 (이 부분도 헷갈렸던)
 * 전체를 다 탐색하는게 효율성을 떨어트린거 같다.
 * /