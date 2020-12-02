#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<pair<string, int>> v;
    int T, n;
    cin >> T;
    while(T--)
    {
        v.clear();        
        cin >> n;
        for(int i=0; i<n; i++)
        {
            bool check=false;
            string s, x;
            cin >> x >> s;
            
            for(int i=0, size=v.size(); i<size; i++)
            {
                if(v[i].first != s) continue;
                v[i].second = v[i].second + 1;
                check = true;
                break;
            }
            if(!check) v.push_back(pair<string, int>(s, 1));
        }
        
        int result = 1;
        for(int i=0, size=v.size(); i<size; i++)
        {
            result = result * (v[i].second+1);
        }
        
        cout << result-1 << "\n";
    }
    
    return 0;
}