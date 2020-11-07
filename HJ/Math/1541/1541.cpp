#include <iostream>
 
using namespace std;

#define MAX_COUNT 50+1

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    char input[MAX_COUNT] = {""};
    int num[MAX_COUNT]={0}, n=0, sum=0, top=0;

    cin >> input;
    // 0: ASCII48 9: ASCII57, +: ASCII43, -: ASCII45
    for(unsigned int i=0; i<MAX_COUNT; i++) {
        if(input[i] == '+') {
            sum += n;
            n = 0;
        }
        else if (input[i] == '-') {
            sum += n;
            num[top++] = sum;
            sum = 0;
            n = 0;
        }
        else if(input[i]-0 >= 48 && input[i]-0 <= 57) {
            n = n * 10 + (input[i]-48);
        } else {
            sum += n;
            num[top++] = sum;
            break;
        }
    }

    sum = num[0];
    for(unsigned int i=1; i < top; i++) {
        sum -= num[i];
    }

    cout << sum << "\n";
}

