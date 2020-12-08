package sec01_12925.exam;
import java.util.*;
import java.io.*;
import java.lang.reflect.Array;

class Main{
	public static void main(String[] args) {
	String s = "-1234";
	System.out.print(solution(s));
	}
	public static int solution(String s) {
		int sum = 0; 
		boolean flag = true;
		//何龋 备盒 ( + : true, - : false)
		if(s.charAt(0) == '-') {
			flag = false;
			s = s.substring(1); 
		}
		if(s.charAt(0) == '+') {
			flag = true;
			s = s.substring(1); 
		}
		//CHAR -> INT 函券
		for(int i = 0; i<s.length(); i++) {
			sum = (int) (sum + (int)(s.charAt(i) - 48) * Math.pow(10,s.length()-1-i));
		}
		//何龋贸府
		if(flag == false) sum = sum * -1;
		return sum;
    }
}