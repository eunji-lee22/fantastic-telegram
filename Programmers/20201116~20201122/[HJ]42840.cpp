#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;

    int pattern1[5]={1,2,3,4,5}, pattern2[8]={2,1,2,3,2,4,2,5}, pattern3[10]={3,3,1,1,2,2,4,4,5,5};
    int score1=0,score2=0,score3=0;

    for(int i=0, max=answers.size(); i<max; i++)
    {
        if(answers[i]==pattern1[i%5]) score1++;
        if(answers[i]==pattern2[i%8]) score2++;
        if(answers[i]==pattern3[i%10]) score3++;
    }

    if(score1 >= score2 && score1 >= score3) answer.push_back(1);
    if(score2 >= score1 && score2 >= score3) answer.push_back(2);
    if(score3 >= score1 && score3 >= score2) answer.push_back(3);

    return answer;
}