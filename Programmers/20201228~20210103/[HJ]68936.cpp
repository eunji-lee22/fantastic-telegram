#include <string>
#include <vector>

using namespace std;

vector<int> solve(vector<vector<int>>& v, int size, int r, int c)
{
    int value = v[r][c];
    vector<int> result(2);
    
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(value != v[r+i][c+j])
            {
                vector<int> tmp;
                tmp = solve(v, size/2, r, c);
                result[0] += tmp[0];
                result[1] += tmp[1];
                tmp = solve(v, size/2, r, c+size/2);
                result[0] += tmp[0];
                result[1] += tmp[1];
                tmp = solve(v, size/2, r+size/2, c);
                result[0] += tmp[0];
                result[1] += tmp[1];
                tmp = solve(v, size/2, r+size/2, c+size/2);
                result[0] += tmp[0];
                result[1] += tmp[1];
                return result;
            }      
            
            if(i==(size-1) && j==(size-1)) result[value]++;
        }
    }
    
    return result;
}
vector<int> solution(vector<vector<int>> arr) {
    vector<int> answer = solve(arr, arr.size(), 0, 0);
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.05ms, 3.95MB)
 * 테스트 2 〉	통과 (0.05ms, 3.94MB)
 * 테스트 3 〉	통과 (0.02ms, 3.96MB)
 * 테스트 4 〉	통과 (0.01ms, 3.92MB)
 * 테스트 5 〉	통과 (10.18ms, 13.5MB)
 * 테스트 6 〉	통과 (3.35ms, 13.5MB)
 * 테스트 7 〉	통과 (1.70ms, 13.4MB)
 * 테스트 8 〉	통과 (0.95ms, 13.4MB)
 * 테스트 9 〉	통과 (0.75ms, 13.5MB)
 * 테스트 10 〉	통과 (2.98ms, 40.3MB)
 * 테스트 11 〉	통과 (0.01ms, 3.96MB)
 * 테스트 12 〉	통과 (0.01ms, 3.93MB)
 * 테스트 13 〉	통과 (0.97ms, 13.5MB)
 * 테스트 14 〉	통과 (4.15ms, 40.4MB)
 * 테스트 15 〉	통과 (4.51ms, 40.4MB)
 * 테스트 16 〉	통과 (1.98ms, 13.6MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 3
 */