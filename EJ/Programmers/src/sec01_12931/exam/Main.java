package sec01_12931.exam;
import java.util.*;
import java.io.*;
import java.lang.reflect.Array;

class Main{
	public static void main(String[] args) {
	int n = 987;
	
	System.out.print(solution(n));
	}
	public static int solution(int n) {
		int answer = 0;
		String str_n = Integer.toString(n);
		String[] nArr = str_n.split("");
		int length = nArr.length;
		
		for(int i = 0; i<length; i++) {
			answer += Integer.parseInt(nArr[i]);
		}
		return answer;
    }
}