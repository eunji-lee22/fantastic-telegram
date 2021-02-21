#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int countBits(int n)
{
    int ret = 0;
    while (n)
    {
        if (n & 1) ret++;
        n = n >> 1;
    }
    return ret;
}

bool cmp(int a, int b)
{
    //켜진 비트를 카운트
    int x = countBits(a), y = countBits(b);
    return x > y;//내림차순 정렬
}

bool check(vector<vector<string>> relation, int low, int col, int subset)
{
    for (int i = 0; i < low - 1; i++)
    {
        for (int j = i + 1; j < low; j++)
        {
            bool isSame = true;
            for (int k = 0; k < col; k++)
            {
                if ((subset & 1 << k) == 0) continue;//ex) k는 1, (0010 & 0001)로 이라면, 검색하려는 Attrit이 아니다
                if (relation[i][k] != relation[j][k])//col 한줄에 중복값이 있는지 확인
                {
                    //유일성 포함, 최소성을 만족하므로
                    isSame = false;
                    break;
                }
            }

            if (isSame)
            {
                return false;
            }
        }
    }
    return true;
}

int solution(vector<vector<string>> relation)
{
    int answer = 0;
    vector<int> candidates;//후보키
    int low = relation.size();
    int col = relation.front().size();

    //컬럼중, 후보키 찾는다
    for (int i = 1; i <= (1 << col); i++)//
    {
        if (check(relation, low, col, i))
            candidates.push_back(i);
    }
    sort(candidates.begin(), candidates.end(), cmp);
    while (!candidates.empty())
    {
        int n = candidates.back();//1의 갯수가 제일 적은값부터
        candidates.pop_back();
        answer++;

        //유일성 체크
        for (vector<int>::iterator it = candidates.begin(); it != candidates.end(); )
        {
            if ((n & *it) == n)
                it = candidates.erase(it);
            else it++;
        }
    }
    return answer;
}