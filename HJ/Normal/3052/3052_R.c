#include <stdio.h>

int main()
{
    int count = 0, input;
    int data[42] = {0};

    for(int i=0; i<10; i++){
        scanf("%d", &input);

        data[input%42]++;
    }

    for(int i=0; i<42; i++)
        if(data[i] > 0) count++;

    printf("%d", count);
    
    return 0;
}

/*
 *  Review
 *  1. 기존: 최선의경우 10번 비교, 최악의경우 45번 비교
 *     변경: 42번 비교
 *     입력 횟수가 증가할 수록, 변경한 로직이 유리
 *     +입력 횟수가 n일때,
 *      기존: n ~ n(n-1)/2
 *      변경: 42
 * 
 *  2. 가독성
 *     중첩 for문 구조 해결
 *     변수 초기화가 깔끔해짐.
 */