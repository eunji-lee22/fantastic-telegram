package sec01_12928.exam;
import java.util.*;
import java.io.*;

class Main{
	
	public static void main(String[] args) {
		int n = 1;
	
	System.out.print(solution(n));
	}
    public static int solution(int n) {
    	int answer = 0;
    	int[] arr = new int [n+1];
    	
    	for(int i = 1; i<= n ; i++) {
    		if(n%i == 0 && arr[i] == 0) {
    			arr[i] = i;
    			arr[n/i] = n/i;
    			if(n/i == i) {
    				answer += i ;
    			}else answer += i+ n/i;
    		}
    	}

    	return answer;
    }
}