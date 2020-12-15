package sec01_12932.exam;
import java.util.*;
import java.io.*;
import java.lang.reflect.Array;

class Main{
	public static void main(String[] args) {
	int n = 12345;
	
	System.out.print(solution(n));
	}
	public static int[] solution(long n) {
		
		int length = Long.toString(n).length();
		
		int res[] = new int[length];
		for(int j = 0; j < length ; j++) {
			
			res[j] = (int) (n%10);
			n = n / 10;
		}
		return res;
    }
}