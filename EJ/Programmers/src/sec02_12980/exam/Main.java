 package sec02_12980.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		int n = 5000;
		System.out.print(solution(n));
	}
	public static int solution(int n) {
		int ans = 0;
		while (n > 0) {
			if(n%2 == 0) n = n/2;
			else {
				n = n-1;
				ans = ans + 1;
			}
		}
		return ans;
	}
}