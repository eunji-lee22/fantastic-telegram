#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N=0,R=0,C=0,value=0;
    cin >> N >> R >> C;

    int max = pow(2, N), r=0, c=0;
    while (max != 1)
    {
        max /= 2;

        if(R >= max+r && C>= max+c)
        {
            value += max * max * 3;
            r = max + r;
            c = max + c;
        }
        else if(R >= max+r && C < max+c)
        {
            value += max * max * 2;
            r = max + r;
        }
        else if(R < max+r && C >= max+c)
        {
            value += max * max;
            c = max + c;
        }
        else
        {
            value += 0;
        }
        
    }

    cout << value << "\n";    

    return 0;
}

/*
 *  1. map배열을 선언해서 배열에 하나하나 값을 넣음. -> 배열의 크기가 2^15이어서 [컴파일에러]
 *  2. 배열을 제거하고 값만 1씩 올려서 해당 값을 출력. -> [시간초과]
 *  3. 지난 번, 분할정복을 이용하여 별 찍기 문제에서 배열을 사용하는 것에 감명을 받고
 *     불필요한 계산을 너무 많이 하는 로직을 구현 했단걸 깨달음.
 *  
 *     아이디어! 찾는 값을 사분면의 한 점이라고 생각 했을 때,
 *     점이 해당하는 면 이외에 값은 의미가 없으며,
 *     점이 위치한 면의 왼쪽 최상단 값을 계산을 통해 알 수 있음.
 *     해당 로직을 1*1 이 되도록 반복 후 출력.
 */