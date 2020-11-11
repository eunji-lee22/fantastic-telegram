#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char n[1000001];
    cin >> n;
   
    int cnt =0;
    while(strlen(n)>1){
		int sum = 0;
		for(int i = 0, len = strlen(n); i < len; i++){
			sum += n[i] - '0';
		}
		sprintf(n,"%d",sum);
		cnt++;
    }
    cout<<cnt<<"\n";
    if((n[0]-'0')%3 == 0) cout << "YES\n";
    else cout << "NO\n";
}

/*
 *  strlen: 문자열의 길이
 *  sprintf: 문자를 숫자 형식으로 출력
 *  핵심 로직: while(strlen(n)>1)
 *  이걸 몰라서 10 미만의 숫자를 입력 받았을 때, 오류가 생김.
 *  로직 변경할 때마다, 전체 케이스 다 생각하기.
 */