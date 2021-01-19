 package sec02_70129.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		
		String s = "110010101001";
		System.out.print(solution(s));
		}
	public static int[] solution(String s) {
        int[] answer = new int[2];
        int count = 0;
        int count_zero = 0;
        
//      1. 1의 갯수 -> 길이로 변환
//      2. 길이가 1이 될 때까지 반복
//      3. answer[0] = 0의 갯수, answer[1]= 변환 반복 수
        while(!s.equals("1")) {
        	int count_one = 0;
        	for(int i = 0; i<s.length(); i++) {
        		if(s.charAt(i) == '1') {
        			count_one++;
        		}else {
        			count_zero++;
        		}
        	}
        	s = Integer.toBinaryString(count_one);
        	count++;
        }
        answer[0] = count;
        answer[1] = count_zero;

        return answer;
	}
}