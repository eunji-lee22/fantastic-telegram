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
        
//      1. 1�� ���� -> ���̷� ��ȯ
//      2. ���̰� 1�� �� ������ �ݺ�
//      3. answer[0] = 0�� ����, answer[1]= ��ȯ �ݺ� ��
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