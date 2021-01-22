 package sec02_12945.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		int n = 3;
		System.out.print(solution(n));
	}
	public static int solution(int n) {
		int n1= 1, n2 = 1, sum = 0;
		
		if(n==1 || n==2) return 1;
		
		for(int i = 3; i<=n ; i++) {
			sum = n1 + n2;
			sum %= 1234567;
			n1 = n2;
			n2 = sum;
		}
		
		return sum;
	}
}