 package sec01_12912.exam;

import java.text.ParseException;
import java.util.ArrayList;

class Main{
	public static void main(String[] args) {
		int a = 3, b = 3;
		System.out.print(solution(a, b));
		}
	public static long solution(int a, int b) {
		int sum = 0; 
		
		if(a == b) return a; 
		else {
			int min = (a > b) ? b : a;
			int max = (a > b) ? a : b;
			for(int i = min ; i <= max; i++) sum+= i;
			return sum;
		}
	}
}