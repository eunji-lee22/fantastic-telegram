#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int input[4] = {0};

    for (int i = 0; i < 3; i++)
    {
        cin >> input[0] >> input[1] >> input[2] >> input[3];

        unsigned int cnt = 0;
        for(int j=0; j<4; j++) {
            if(input[j]) cnt++;
        }

        switch (cnt)
        {
        case 4: cout << "E\n"; break;
        case 3: cout << "A\n"; break;
        case 2: cout << "B\n"; break;
        case 1: cout << "C\n"; break;
        case 0: cout << "D\n"; break;        
        default:
            break;
        }
    }
    
    return 0;
}
