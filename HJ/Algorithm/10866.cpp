#include <iostream>
using namespace std;
#define MAX_COUNT 10000

int arr[MAX_COUNT]={0}, b=0, e=0;
int get_index(int v)
{
    return (v >= 0) ? v : v + MAX_COUNT;
}
void push(bool isFront)
{
    int input;
    cin >> input;

    if(e==b) arr[get_index(e++)] = input;
    else if(isFront) arr[get_index(--b)] = input;
    else arr[get_index(e++)] = input;
}
int get(bool isFront)
{
    if(b==e) return -1;
    return (isFront) ? arr[get_index(b)] : arr[get_index(e-1)];
}
void pop(bool isFront)
{
    int value = get(isFront);
    if(value > 0) (isFront) ? b++ : e--;
    cout << value << "\n";
}
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    while(N--)
    {
        string str;
        cin >> str;
        
        if(str == "push_front") push(true);
        else if(str == "push_back") push(false);
        else if(str == "pop_front") pop(true);
        else if(str == "pop_back") pop(false);
        else if(str == "size") cout << e-b << "\n";
        else if(str == "empty") cout << (e-b ? 0 : 1 ) << "\n";
        else if(str == "front") cout << get(true) << "\n";
        else if(str == "back") cout << get(false) << "\n";
    }
    
    return 0;
}

