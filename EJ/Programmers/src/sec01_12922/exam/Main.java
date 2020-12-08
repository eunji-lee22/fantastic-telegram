package sec01_12922.exam;
import java.util.*;
import java.io.*;
import java.lang.reflect.Array;

class Main{
	public static void main(String[] args) {
	int n = 3;
	System.out.print(solution(n));
	}
	public static String solution(int n) {
		String ans = "";
		
		for(int i = 0; i<n ; i++) {
			switch(i%2) {
			case 0 : ans = ans + "¼ö";
			break;
			case 1 : ans = ans + "¹Ú";
			break;
			}
		}
		return ans;
    }
}