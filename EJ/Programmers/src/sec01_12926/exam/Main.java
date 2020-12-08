package sec01_12926.exam;
import java.util.*;
import java.io.*;

class Main{
	
	public static void main(String[] args) {
	String s = "a B z";
	int n = 4;
	int m = 0;
	
	System.out.print(solution(s, n));
	}
    public static String solution(String s, int n) {
    	String answer = "";
    	char add = ' ';

    	for(int i = 0; i< s.length(); i++) {
    		//공백
    		if((int)s.charAt(i) == 32) add = s.charAt(i);
    		//소문자
    		if((int)s.charAt(i) >= 97 && (int)s.charAt(i) <= 122) {
    			add = (char)((int)s.charAt(i) + n);
    			if(add >122) add = (char) ((int)add - 26);
    		}
    		//대문자
    		if((int)s.charAt(i) >= 65 && (int)s.charAt(i) <= 90) {
    			add = (char)((int)s.charAt(i) + n);
    			if(add >90) add = (char) ((int)add - 26);
    		}
    		answer += add;
    	}
    	return answer;
    }
}