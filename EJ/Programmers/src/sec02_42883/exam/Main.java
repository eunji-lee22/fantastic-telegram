 package sec02_42883.exam;

import java.text.ParseException;
import java.util.ArrayList;
import java.util.Arrays;

import org.omg.CosNaming.NamingContextPackage.NotEmpty;

class Main{
	public static void main(String[] args) {
		String number = "4177252841";
		int k = 4;
		
		System.out.print(solution(number, k));
		}
	public static String solution(String number, int k) {
        int pos = 0; 
        char max;
        
        //ȿ���� pass
        StringBuilder answer = new StringBuilder();
        
//        if(number.charAt(0) == '0') return "0";
        for(int i = 0; i<number.length()-k; i++) {
        	//��ü �ڸ������� k�� ������ ���̸�ŭ �ݺ�
        	max = '0';
        	
        	for(int j = pos;j<=k + i; j++) {
        		if(max < number.charAt(j)) {
        			max = number.charAt(j);
        			pos = j + 1;
        		}
        	}
        	answer.append(max);
        }
        return answer.toString();
    }
}