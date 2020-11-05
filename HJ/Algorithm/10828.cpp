#include <iostream>

using namespace std;

#define MAX_COUNT 10000

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int N,i,stack[MAX_COUNT] = {0};
    int top=-1;
    string str;

    cin >> N;

    for(i=0; i<N; i++){
        cin >> str;

        if(str == "push") {
            int value;
            cin >> value;
            stack[++top] = value;
        }
        else if(str == "pop") {
            if(top > -1) cout << stack[top--] << "\n";
            else cout << "-1\n";
        }
        else if(str == "size") {
            cout << top+1 << "\n";
        }
        else if(str == "empty") {
            if(top == -1) cout << "1\n";
            else cout << "0\n";
        }
        else if(str == "top") {
            if(top >= 0) cout << stack[top] << "\n";
            else cout << "-1\n";
        }
    }

    return 0;
}
