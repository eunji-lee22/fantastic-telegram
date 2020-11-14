#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    vector<int> v;
    int K;

    cin >> K;

    for(int i=0; i<K; i++)
    {
        int input;
        cin >> input;

        if(input == 0) v.pop_back();
        else v.push_back(input);
    }

    int sum = 0;
    for(int i=0, max=v.size(); i<max; i++)
    {
        sum += v[i];
    }

    cout << sum << "\n";
    
    return 0;
}
