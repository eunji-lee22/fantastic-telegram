package sec01_12940.exam;
import java.util.*;
import java.io.*;
import java.lang.reflect.Array;

class Main{
	public static void main(String[] args) {
	int n = 3;
	int m = 12;
	System.out.print(solution(n, m));
	}
	public static int[] solution(int n, int m) {
		int[] answer = new int[2];
		int largeNum = n;
		
		if(m > n) largeNum = m;
		
		int i = largeNum;
		
		while(1 < largeNum) {
			if(n%i == 0 & m%i == 0) {
				answer[0] = i;
				answer[1] = n * m / i;
				break;
			}
			i--;
		}
		return answer;
	}
	//유클리드 호제법 : 두 수를 곱한 뒤, 최대공약수로 나누면 최소공배수가 됨
}