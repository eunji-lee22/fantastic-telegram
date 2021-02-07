 package sec02_17687.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		int n = 2; //진법
		int t = 4; //구할 숫자의 갯수
		int m = 2; //게임인원
		int p = 1; //튜브순서
		
		System.out.print(solution(n,t,m,p));
		}
	public static String solution(int n, int t, int m, int p) {
       String str = "0";
       int count = 0; 
       String answer = "";
       
       // 총 게임 수 = 게임인원 * 구할 숫자 갯수
       while(str.length() < (t * m)) {
    	   String byNum = "";
    	   int num = count++;
    	   
    	   //n진법 변환
    	   while(num != 0) {
    		   if(num %n >= 10) //A~F
    			   byNum += String.valueOf((char)(num %n + 55));
    		   else
    			   byNum += String.valueOf(num%n);
    		   
    		   num /= n;
    	   }
    	   //역순으로 str에 더하기
    	   str += new StringBuffer(byNum).reverse().toString();
       }
       
       //순서에 해당 하는 번호만 출력
       //t번, m명이 게임할 때 p 순서에 해당하는 경우
       for(int i = 0; i< t; i++)
    	   answer += String.valueOf(str.charAt(m * i + p -1));
       
       return answer;

	}
}