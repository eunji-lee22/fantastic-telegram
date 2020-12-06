package sec01_12919.exam;
import java.util.*;
import java.io.*;
import java.lang.reflect.Array;

class Main{
	public static void main(String[] args) {
	String[] s = {"Jane", "Jane", "Kim"};
	
	System.out.print(solution(s));
	}
	public static String solution(String[] s) {
		int i ;
		String ans = "";
		
		for(i = 0; i<s.length; i++) {
			if(s[i].equals("Kim")) {
				ans = "김서방은 " + i + "에 있다";
				break;
			}
		}
		return ans;
    }
}