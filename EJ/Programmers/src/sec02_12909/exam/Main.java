 package sec02_12909.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		
		String s = "()()";
		System.out.print(solution(s));
		}
	public static boolean solution(String s) {
        boolean answer = true;
        int cnt = 0; 
        for(int i = 0; i<s.length() ; i++) {
        	if(s.charAt(i) == '(') cnt ++;
        	else {
        		cnt--;
        		if(cnt < 0) break;
        	}
        }

        if(cnt != 0) answer = false;
        
        return answer;
	}
}