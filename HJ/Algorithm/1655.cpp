#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    priority_queue<int, vector<int>, greater<int>> minHeap;
    priority_queue<int, vector<int>, less<int>> maxHeap;
    int N;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        int input = 0;
        cin >> input;

        if(i==0) maxHeap.push(input);
        else if(maxHeap.size() > minHeap.size())
        {
            if(input < maxHeap.top())
            {
                minHeap.push(maxHeap.top());
                maxHeap.pop();
                maxHeap.push(input);
            }
            else minHeap.push(input);
        }
        else if(maxHeap.size() == minHeap.size())
        {
            if(input > minHeap.top())
            {
                maxHeap.push(minHeap.top());
                minHeap.pop();                
                minHeap.push(input);
            }
            else maxHeap.push(input);
        }

        cout << maxHeap.top() << "\n";
    }

    return 0;
}