 package sec01_17682.exam;

import java.lang.reflect.Array;
import java.sql.Date;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Arrays;

class Main{
	public static void main(String[] args) {
		String dartResult = "	0S*0T*1S";
		
		System.out.print(solution(dartResult));
	}
	public static int solution(String dartResult) {
        int sum = 0;
        int answer_bak = 0; 
        int i = 0; 
        while(i < dartResult.length()) {
        	char dart_N = dartResult.charAt(i);
        	int answer = 0;
        	
        	//1. 숫자(0~10)
//        	if(dart_N - '0' >= 0 && dart_N- '0' <= 9) {
        		//10인지 확인
    		if(dart_N - '0' == 1 && dartResult.charAt(i+1) - '0' == -39 ) {
    			answer = 10;
    			i = i +2;
    		}else {
    			answer = dart_N - '0';
    			if(answer == -39) {answer = 0;}
    			i++;
    		}

        	//2. 보너스(S, D, T)       	
    		if(i<dartResult.length()) {
    			switch(dartResult.charAt(i)) {
    			case 'S' :
	        		answer = (int) Math.pow(answer, 1);
	        		i++;
	        		break;
    			case 'D' :
	        		answer = (int) Math.pow(answer, 2);
	        		i++;
	        		break;
    			case 'T':
	        		answer = (int) Math.pow(answer, 3);
	        		i++;
	        		break;
    			}
    		}
        	//3. 옵션(*, #)
    		if(i < dartResult.length()) {
    			switch(dartResult.charAt(i)) {
    			case '*' :
	        		answer = answer * 2 + answer_bak;
	        		i++;
	        		break;
    			case '#':
	        		answer = -answer;
	        		i++;
	        		break;
	        	}
	    	}
        	answer_bak = answer;
        	sum = sum + answer;
        }
        return sum;
	}
}
