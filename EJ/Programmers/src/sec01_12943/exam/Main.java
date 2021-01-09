package sec01_12943.exam;
import java.util.*;
import java.io.*;
import java.lang.reflect.Array;

class Main{
	public static void main(String[] args) {
		int num = 626331;
		System.out.print(solution(num));
	}
	public static int solution(int m) {
		int n = 0; 
		long num = (long)m;
		
		while(num != 1) {
			n++;
			if(num % 2 == 0 ) num = num /2; 
			else num = num * 3 + 1;
			if(n==480) {
				int  kk = 0;
			}
			if(n == 500) {
				n = -1;
				break;
			}
		}
        return n;
	}
}