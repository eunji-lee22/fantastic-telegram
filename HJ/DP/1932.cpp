#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_COUNT 501 * 502 / 2

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned int n, triangle[MAX_COUNT] = {0}, i, j, num=0, sumMaxValue=0;
    unsigned int memozation[MAX_COUNT] = {0};

    cin >> n;

    for(i=1; i<=n; i++) {
        for(j=0; j<i; j++) {
            cin >> triangle[num++];
        }
    }

    memozation[0] = triangle[0];
    num=0;
    for(i=1; i<=n; i++) {
        for(j=0; j<i; j++) {
            // cp: current position
            unsigned int cp = num + j;
            // nrp: next row position
            unsigned int nrp = cp + i;

            // bottom - up
            memozation[nrp] = max(memozation[nrp], memozation[cp]+triangle[nrp]);
            memozation[nrp+1] = max(memozation[nrp+1], memozation[cp]+triangle[nrp+1]);

            // cout << "num: " << num << " j: " << j << " ";
            // cout << "cp: " << cp << " nrp: " << memozation[nrp] << " nrp2: " << memozation[nrp+1] << "\n";
        }
        // cout << "## i= " << i << "\n";
        if(i==n)
            for(int k=0; k<n; k++)
                sumMaxValue = max(sumMaxValue, memozation[num+k]);
        else num += i;
    }

    // debug: view memozation value
    // num=0;
    // for(i=1; i<=n; i++) {
    //     for(j=0; j<i; j++) {
    //         cout << memozation[num++] << " ";
    //     }
    //     cout << "\n";
    // }

    cout << sumMaxValue << "\n";

    return 0;
}
