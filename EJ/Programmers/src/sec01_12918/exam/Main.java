package sec01_12918.exam;
import java.util.*;
import java.io.*;
import java.lang.reflect.Array;

class Main{
	public static void main(String[] args) {
	String s = "a234aa";
	
	System.out.print(solution(s));
	}
	public static boolean solution(String s) {
		boolean answer = true;
		
		if ((s.length() == 4)||(s.length() == 6)){
			for(int i = 0; i < s.length(); i++) { //48~57
				int num = s.charAt(i) - '0';
				if((num >= 0) && (num <= 9)){}
				else {
					answer = false;
					break;
				}
			}
		}
		else answer = false;
        return answer;
    }
}