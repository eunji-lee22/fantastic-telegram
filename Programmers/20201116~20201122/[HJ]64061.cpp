#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> s;

    for(int i=0, max=moves.size(); i<max; i++)
    {
        for(int h=0, height=board.size(); h<height; h++)
        {
            int doll = board[h][moves[i]-1];
            if(doll == 0) continue;
            if(!s.empty() && s.top()==doll)
            {
                s.pop();
                answer = answer+2;
            }
            else s.push(doll);

            board[h][moves[i]-1] = 0;
            break;
        }
    }

    return answer;
}