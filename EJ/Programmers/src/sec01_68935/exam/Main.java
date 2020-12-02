 package sec01_68935.exam;

import java.lang.reflect.Array;
import java.sql.Date;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Arrays;

class Main{
	public static void main(String[] args) throws ParseException {
	int n = 3;
	
	System.out.print(solution(n));
	}
	public static int solution(int n) {
		//입력 : n
		int answer = 0; 
		
		//자리수 계산
		int len = 0;
		int sqrt = 1;
		
		while(n>= sqrt) {
			sqrt = sqrt * 3; 
			len++;
		}
		if(n == 1) { len = 1;}
		
		int[] arr = new int[len];
		for(int i = 0; i< len; i++) {
			arr[len -1 - i] = (int) (n / (Math.pow(3, arr.length-1-i)));
			n = (int) (n - arr[len -1 - i ]*(Math.pow(3,arr.length-1-i)));
			
			answer = (int) (answer + (arr[len-1-i] * Math.pow(3, i)));
		}
		
    	return answer;
	}
}