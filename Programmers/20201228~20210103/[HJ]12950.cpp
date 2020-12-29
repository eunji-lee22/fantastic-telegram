#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    int rowSize = arr1.size();
    int colSize = arr1[0].size();
    for(int i=0; i<rowSize; i++)
    {
        vector<int> inner;
        for(int j=0; j<colSize; j++)
        {
            inner.push_back(arr1[i][j]+arr2[i][j]);
        }
        answer.push_back(inner);
    }
    
    return answer;
}
/*
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.02ms, 3.95MB)
 * 테스트 2 〉	통과 (0.18ms, 3.98MB)
 * 테스트 3 〉	통과 (0.53ms, 4.15MB)
 * 테스트 4 〉	통과 (0.27ms, 3.9MB)
 * 테스트 5 〉	통과 (0.12ms, 3.79MB)
 * 테스트 6 〉	통과 (0.26ms, 3.96MB)
 * 테스트 7 〉	통과 (0.04ms, 3.95MB)
 * 테스트 8 〉	통과 (0.15ms, 3.97MB)
 * 테스트 9 〉	통과 (2.07ms, 5.54MB)
 * 테스트 10 〉	통과 (1.58ms, 5.21MB)
 * 테스트 11 〉	통과 (0.87ms, 4.64MB)
 * 테스트 12 〉	통과 (1.27ms, 4.99MB)
 * 테스트 13 〉	통과 (0.83ms, 4.7MB)
 * 테스트 14 〉	통과 (1.25ms, 5.26MB)
 * 테스트 15 〉	통과 (1.23ms, 5.3MB)
 * 테스트 16 〉	통과 (1.30ms, 5.09MB)
 * 테스트 17 〉	통과 (58.12ms, 74.9MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 1
 */