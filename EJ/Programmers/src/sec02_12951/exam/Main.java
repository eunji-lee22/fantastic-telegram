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
        //ù���� �빮�ڷ� ��ȯ
        answer.append(firstStr.toUpperCase()); 
        
        for (int i = 1; i < s.length(); i++) {
          String now = s.charAt(i) + "";
          if (now.equals(' ')) { //����
            answer.append(" ");
          } else if (s.charAt(i - 1) == ' ') { // �� ���ڿ��� �����̸�
            answer.append(now.toUpperCase()); // �빮��
          } else {
            answer.append(now.toLowerCase()); // �ҹ���
          }
        }
        return answer.toString();
	}
}