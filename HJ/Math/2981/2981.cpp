#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    if(b > a) return a ? gcd(a, b%a) : b;
	return b ? gcd(b, a%b) : a;
}
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> v,answer;
    int N;
    cin >> N;
    while(N--)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    int M = v[1] - v[0];
    for(int i=2, size=v.size(); i<size; i++)
    {
        M = gcd(M, v[i]-v[i-1]);
    }
    
    for(int i=2; i*i <= M; i++)
    {
        if(M%i!=0) continue;
        answer.push_back(i);
        if(i*i!=M)answer.push_back(M/i);
    }
    answer.push_back(M);
    sort(answer.begin(), answer.end());
    
    for(vector<int>::iterator iter=answer.begin(); iter!=answer.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << "\n";
    
    return 0;
}