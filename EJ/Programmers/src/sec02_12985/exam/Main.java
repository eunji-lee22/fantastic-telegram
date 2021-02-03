 package sec02_12985.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		int n = 8;
		int a = 4;
		int b = 7;
		
		System.out.print(solution(n,a,b));
	}
    public static int solution(int n, int a, int b) {
			int ans = 0;
			while(a != b) {
				if (a%2 == 1) a = (a+1)/2;
				else a = a/2;
				
				if (b%2 == 1) b = (b+1)/2;
				else b = b/2;
				
				ans ++;
			} 
			return ans;
	}
}