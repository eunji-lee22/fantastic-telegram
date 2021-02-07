 package sec02_17687.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		int n = 2; //����
		int t = 4; //���� ������ ����
		int m = 2; //�����ο�
		int p = 1; //Ʃ�����
		
		System.out.print(solution(n,t,m,p));
		}
	public static String solution(int n, int t, int m, int p) {
       String str = "0";
       int count = 0; 
       String answer = "";
       
       // �� ���� �� = �����ο� * ���� ���� ����
       while(str.length() < (t * m)) {
    	   String byNum = "";
    	   int num = count++;
    	   
    	   //n���� ��ȯ
    	   while(num != 0) {
    		   if(num %n >= 10) //A~F
    			   byNum += String.valueOf((char)(num %n + 55));
    		   else
    			   byNum += String.valueOf(num%n);
    		   
    		   num /= n;
    	   }
    	   //�������� str�� ���ϱ�
    	   str += new StringBuffer(byNum).reverse().toString();
       }
       
       //������ �ش� �ϴ� ��ȣ�� ���
       //t��, m���� ������ �� p ������ �ش��ϴ� ���
       for(int i = 0; i< t; i++)
    	   answer += String.valueOf(str.charAt(m * i + p -1));
       
       return answer;

	}
}