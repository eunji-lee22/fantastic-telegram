 package sec02_12951.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		String s = "3people unFollowed me";
		System.out.print(solution(s));
	}
	public static String solution(String s) {
        StringBuilder answer = new StringBuilder(); 
        String firstStr = s.charAt(0) + "";
        //첫글자 대문자로 변환
        answer.append(firstStr.toUpperCase()); 
        
        for (int i = 1; i < s.length(); i++) {
          String now = s.charAt(i) + "";
          if (now.equals(' ')) { //공백
            answer.append(" ");
          } else if (s.charAt(i - 1) == ' ') { // 전 문자열이 공백이면
            answer.append(now.toUpperCase()); // 대문자
          } else {
            answer.append(now.toLowerCase()); // 소문자
          }
        }
        return answer.toString();
	}
}