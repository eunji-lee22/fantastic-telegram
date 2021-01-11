#include <iostream>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    int arr[10] = {0}, cnt = 0, input=0;
    
    for(int i=0; i<10; i++)
    {
        cin >> arr[i];
    }
    
    for(int i=0; i<10; i++)
    {
        cin >> input;
        if(arr[i] > input) cnt++;
        else if(arr[i] < input) cnt--;
    }
    
    if(cnt > 0) cout << "A\n";
    else if(cnt < 0) cout << "B\n";
    else cout << "D\n";
    
    return 0;
}
