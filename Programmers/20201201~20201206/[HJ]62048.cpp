using namespace std;

int getGcd(int w, int h)
{
    if(h > w) w ? getGcd(w, h%w) : h;
    return h ? getGcd(h, w%h) : w;
}

long long solution(int w,int h) {
    long long answer = 1;
    
    int gcd = getGcd(w, h);
    int sw = w / gcd;
    int sh = h / gcd;
    int broken = (sw+sh-1) * gcd;
    answer = (long long)w * (long long) h - broken;
    
    return answer;
}
/*
 * 채점을 시작합니다.
 * 정확성  테스트
 * 테스트 1 〉	통과 (0.01ms, 3.97MB)
 * 테스트 2 〉	통과 (0.01ms, 3.96MB)
 * 테스트 3 〉	통과 (0.01ms, 3.93MB)
 * 테스트 4 〉	통과 (0.01ms, 3.88MB)
 * 테스트 5 〉	통과 (0.01ms, 3.94MB)
 * 테스트 6 〉	통과 (0.01ms, 3.96MB)
 * 테스트 7 〉	통과 (0.01ms, 3.95MB)
 * 테스트 8 〉	통과 (0.01ms, 3.92MB)
 * 테스트 9 〉	통과 (0.01ms, 3.99MB)
 * 테스트 10 〉	통과 (0.01ms, 3.95MB)
 * 테스트 11 〉	통과 (0.01ms, 3.9MB)
 * 테스트 12 〉	통과 (0.01ms, 3.95MB)
 * 테스트 13 〉	통과 (0.01ms, 3.73MB)
 * 테스트 14 〉	통과 (0.01ms, 3.94MB)
 * 테스트 15 〉	통과 (0.02ms, 3.97MB)
 * 테스트 16 〉	통과 (0.01ms, 3.89MB)
 * 테스트 17 〉	통과 (0.01ms, 3.96MB)
 * 테스트 18 〉	통과 (0.01ms, 3.84MB)
 * 채점 결과
 * 정확성: 100.0
 * 합계: 100.0 / 100.0
 * 점수: 10
 * /