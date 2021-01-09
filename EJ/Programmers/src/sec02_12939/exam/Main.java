 package sec02_12939.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		
		String s = "-1 -2 -3 -4";
		System.out.print(solution(s));
		}
	public static String solution(String s) {
        String[] str = s.split(" ");
        int[] integer = new int[str.length];
        
        for(int i = 0; i<str.length; i++) {
        	integer[i] = Integer.parseInt(str[i]);
        }
        Arrays.sort(integer);
        String answer = integer[0] +" " + integer[integer.length-1];
        
        return answer;
	}
}