#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";

    int day = 0, month[12]={0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};

    day = month[a-1] + b;

    switch(day%7)
    {            
        case 0: answer = "THU"; break;
        case 1: answer = "FRI"; break;
        case 2: answer = "SAT"; break;
        case 3: answer = "SUN"; break;
        case 4: answer = "MON"; break;
        case 5: answer = "TUE"; break;
        case 6: answer = "WED"; break;
    }

    return answer;
}