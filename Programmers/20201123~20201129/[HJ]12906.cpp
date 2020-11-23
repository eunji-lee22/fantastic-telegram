#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    for(int i=0, size=arr.size(); i<size; i++)
    {
        if(i==0) answer.push_back(arr[i]);
        else if(answer.back() == arr[i]) continue;
        else answer.push_back(arr[i]);
    }

    return answer;
}