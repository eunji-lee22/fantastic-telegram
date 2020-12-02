#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0, index=0;

    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    for(int i=0, max=lost.size(); i<max; i++)
    {
        bool check = false;
        for(int j=index, max2=reserve.size(); j<max2; j++)
        {
            int value = abs(lost[i] - reserve[j]);

            if(value > 1) continue;
            //case1. 내껄 빌릴 경우: 문제없음.
            //case2. 나보다 큰 사람 걸 빌릴 경우: 그 사람도 잃어버렸다면 빌릴 수 없음.
            //case3. 나보다 작은 사람 걸 빌릴 경우: 내가 여유분을 가져왔을 수 있음...
            if(i+1<max && lost[i+1]==reserve[j]) break;
            if(j+1<max2 && lost[i]==reserve[j+1])
            {
                index = j+2;
                check = true;
                break;
            }

            index = j+1;
            check = true;
            break;
        }

        if(!check) n--;
    }

    return n;
}

//review!: 배열을 이용하여 체크 해보세요.