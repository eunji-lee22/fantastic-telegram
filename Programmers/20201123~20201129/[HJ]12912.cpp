#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int n = (a > b) ? a - b + 1 : b - a + 1;

    answer = a+b;
    answer = answer * n / 2;
    return answer;
}