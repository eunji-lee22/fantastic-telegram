#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> v, numbers;
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i=0; i<N; i++)
    {
        int input;
        cin >> input;
        numbers.push_back(input);
    }

    for(int i=0; i<N; i++)
    {
        if(i==0) v.push_back(numbers[0]);

        for(int j=0, max=v.size(); j<max; j++)
        {
            if(v[j] >= numbers[i])
            {
                v[j] = numbers[i];
                break;
            }
            if(j==max-1) v.push_back(numbers[i]);
        }
    }

    cout << v.size() << "\n";

    return 0;
}
