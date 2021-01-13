#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int size1 = arr1.size(), size2 = arr2.size(), size3 = arr2[0].size();
    vector<vector<int>> answer;
    
    for(int i=0; i<size1; i++)
    {
        vector<int> inner(size3);
        answer.push_back(inner);
        for(int k=0; k<size2; k++)
        {
            for(int j=0; j<size3; j++)
            {
                answer[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.17ms, 3.96MB)
 * 테스트 2 〉	통과 (1.50ms, 5.29MB)
 * 테스트 3 〉	통과 (1.77ms, 5.62MB)
 * 테스트 4 〉	통과 (0.08ms, 3.95MB)
 * 테스트 5 〉	통과 (1.43ms, 5.24MB)
 * 테스트 6 〉	통과 (1.57ms, 5.05MB)
 * 테스트 7 〉	통과 (0.08ms, 3.97MB)
 * 테스트 8 〉	통과 (0.10ms, 3.83MB)
 * 테스트 9 〉	통과 (0.10ms, 3.96MB)
 * 테스트 10 〉	통과 (1.00ms, 4.87MB)
 * 테스트 11 〉	통과 (0.43ms, 4.04MB)
 * 테스트 12 〉	통과 (0.29ms, 3.89MB)
 * 테스트 13 〉	통과 (1.29ms, 5.06MB)
 * 테스트 14 〉	통과 (1.31ms, 5.3MB)
 * 테스트 15 〉	통과 (0.61ms, 4.36MB)
 * 테스트 16 〉	통과 (1.02ms, 4.62MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 2
 */