#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";

    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    int i=0, max=completion.size();

    while(i < max)
    {
        if(participant[i] != completion[i])
        {
            answer = participant[i];
            break;
        }

        i++;
    }
    if(answer == "") answer = participant[i];

    return answer;
}

/*
*   review!
*/
// string solution(vector<string> participant, vector<string> completion) {
//     sort(participant.begin(), participant.end());
//     sort(completion.begin(), completion.end());

//     int i=0, max=completion.size();

//     while(i < max)
//     {
//         if(participant[i] != completion[i])
//             return participant[i];

//         i++;
//     }
//     return participant[i];
// }