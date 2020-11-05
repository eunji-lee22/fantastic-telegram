#include <iostream>

using namespace std;

#define MAX_COUNT 10000

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, front=0, rear=-1, que[MAX_COUNT]={0};
    string str;

    cin >> n;

    for(i=0; i<n; i++) {
        cin >> str;

        if(str == "push") {
            int value;
            cin >> value;
            que[++rear] = value;
        }
        else if(str == "pop") {
            if(front > rear) cout << "-1\n"; 
            else cout << que[front++] << "\n";
        }
        else if(str == "size") {
            (rear - front > -1) ? cout << rear - front + 1 << "\n" : cout << "0\n";
        }
        else if(str == "empty") {
            (rear+1 == front) ? cout << "1\n" : cout << "0\n";
        }
        else if(str == "front") {
            if(front > rear) cout << "-1\n";
            else cout << que[front] << "\n";
        }
        else if(str == "back") {
            if(front > rear) cout << "-1\n";
            else cout << que[rear] << "\n";
        }
    }

    return 0;
}
