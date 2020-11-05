#include <iostream>
#include <algorithm>

using namespace std;
#define MAX_COUNT 9

unsigned int value[MAX_COUNT] = {0};
unsigned int result[7] = {0}, sum=0;

void func(int located, int start);

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for (int i = 0; i < MAX_COUNT; i++)
    {
        cin >> value[i];
    }
    
    sort(value+0, value+MAX_COUNT);

    func(0, 0);

    return 0;
}

void func(int located, int start) {
    if(located == 7 && sum == 100) {
        for(int i=0; i<7; i++) cout << result[i] << "\n";
        return;
    }
    if(located == 7) return;

    for(int i=start; i<MAX_COUNT; i++){
        sum += value[i];
        result[located] = value[i];
        func(located+1, i+1);
        if(sum == 100) break;
        sum -= value[i];
    }
}