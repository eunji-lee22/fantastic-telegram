#include <iostream>
#include <vector>

using namespace std;
#define MAX_COUNT 2000000

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int que[MAX_COUNT] = {0}, f=0, b=-1, N;

    cin >> N;
    for(int i=0; i<N; i++)
    {
        string str;
        cin >> str;

        if(str == "push")
        {
            int value = 0;
            cin >> value;
            que[++b] = value;
        }
        else if(str == "pop")
        {
            if(b-f == -1) cout << "-1\n";
            else cout << que[f++] << "\n";            
        }
        else if(str == "size")
            cout << (b-f+1) << "\n";
        else if(str == "empty")
            cout << ((b-f == -1) ? 1 : 0) << "\n";
        else if(str == "front")
        {
            if(b-f == -1) cout << "-1\n";
            else cout << que[f] << "\n";
        }
        else if(str == "back")
        {
            if(b-f == -1) cout << "-1\n";
            else cout << que[b] << "\n";
        }
    }
       
    return 0;
}