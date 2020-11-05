#include <iostream>

using namespace std;

#define MAX_COUNT 13

void func(int located, int start);
unsigned int input[MAX_COUNT] = {0};
unsigned int result[6] = {0};
unsigned int N;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    do
    {
        cin >> N;

        //review: type warning!
        for (int i = 0; i < N; i++)
                cin >> input[i];
            
        func(0, 0);
        cout << "\n";
    } while (N != 0);

    return 0;
}

void func(int located, int start) {
    if(located == 6) {
        for(int i=0; i<6; i++)
            cout << result[i] << " ";
        cout << "\n";
        return;
    }

    //review: type warning!
    for(int i=start; i<N; i++) {
        result[located] = input[i];
        func(located+1, i+1);
    }
}