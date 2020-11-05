#include <iostream>

using namespace std;

#define MAX_VALUE 1000

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int N=0, min=MAX_VALUE,max=0, a=0, target, i;

    cin >> N;

    for(i=0; i<N; i++) {
        cin >> target;

        if(target < min) {
            min = target;
            max = 0;
        }
        else if(target > min && target > max){
            max = target;
            a = (a >= max - min) ? a : max - min;
        }
        else if(target <= max) {
            min = target;
            max = 0;
        }
    }

    cout << a << "\n";
    
    return 0;
}
