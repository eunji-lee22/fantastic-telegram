#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;

    int minBugger=a, cost=0;

    minBugger = (b < minBugger) ? b : minBugger;
    minBugger = (c < minBugger) ? c : minBugger;
    cost = minBugger + ((d < e) ? d : e) - 50;

    cout << cost << "\n";

    return 0;
}
