#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if(p1.second == p2.second) return p1.first > p2.first;
    return p1.second < p2.second;
}
// first: value, second: cost
vector<pair<int, int>> v;
pair<int, int> bestValue;
//
int arr[11], cnt, money;

void input();
void solve();
bool exchange();
void output();
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    v.clear();
    input();
    exchange();
    output();

    return 0;
}
void input()
{
    // N: 숫자의 개수(가치), money: 가진 돈.
    int N;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        int input;
        cin >> input;
        // 0~N-1 까지 가격을 vector에 넣어줌.
        v.push_back(pair<int, int>(i, input));
    }
    cin >> money;
    // 가격 ASC, 가치 DESC -> vSorted
    vector<pair<int, int>> vSorted = v;
    sort(vSorted.begin(), vSorted.end(), comp);
    bestValue = vSorted[0];

    cnt = money / bestValue.second;
    money = money - (bestValue.second * cnt);    
    arr[bestValue.first] = cnt;
}
bool exchange()
{
    bool isChange = false;
    // 교환할 숫자가 없으면 종료.
    if(arr[bestValue.first] == 0) return false;

    for (int i = v.size() - 1; i > bestValue.first; i--)
    {
        // 살 수 없을 경우, 패스
        if (v[i].second > money + bestValue.second) continue;
        // 판매
        arr[bestValue.first]--;
        // 구매
        arr[v[i].first]++;
        // 가격 정산
        money -= v[i].second - bestValue.second;
        // 교환 완료 && 신규 교환
        isChange = true;
        exchange();
        break;
    }

    return isChange;
}
void output()
{
    bool check = false;
    // 0이외 다른 숫자를 구매 했는지 체크.
    for(int i=10; i>0; i--)
    {
        if(arr[i]==0) continue;
        check = true;
        break;
    }

    // 0은 개수가 많아도 가치가 0이므로, 가진 숫자를 팔아서 다른 숫자를 구매
    // 숫자 교환에 성공할때까지 반복
    if(!check)
    {
        while(cnt>0)
        {
            cnt--;
            arr[bestValue.first]--;
            money += bestValue.second;
            if(exchange()) break;
        }
    }

    queue<int> q;

    while (cnt--)
    {
        // 가치가 높은 숫자부터 큐에 담아줌
        for(int i=10; i>=0; i--)
        {
            if(!arr[i]) continue;

            arr[i]--;
            q.push(i);
            break;
        }
    }
    
    // q에 담긴 숫자를 출력 없으면 0 출력.
    if(q.empty()) cout << "0\n";
    else
    {
        while(!q.empty())
        {
            cout << q.front();
            q.pop();
        }
        cout << "\n";
    }
    
    return;
}