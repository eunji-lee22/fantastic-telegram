#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, sum=0, maxSum=-1001;

    cin >> n;

    for(int i=0; i<n; i++) {
        int target;
        cin >> target;

        sum += target;
        maxSum = (sum > maxSum) ? sum : maxSum;

        if(sum < 0) sum = 0;

        // cout << "target: " << target << " sum: " << sum << " maxSum: " << maxSum << "\n";
    }

    cout << maxSum << "\n";

    return 0;
}
