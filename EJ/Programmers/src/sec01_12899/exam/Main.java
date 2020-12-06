 package sec01_12899.exam;

import java.text.ParseException;
import java.util.ArrayList;

class Main{
	public static void main(String[] args) throws ParseException {
	int n = 9;
	
	System.out.print(solution(n));
	}
	public static String solution(int n) {
		String answer = "";
		String[] numbers = {"4", "1", "2"};
		
		while(n>=1) {
			int remain = n % 3;
			n /=3;
			
			if(remain == 0) n = n - 1;
			
			answer = numbers[remain] + answer;
		}
		
		return answer;
	}
}