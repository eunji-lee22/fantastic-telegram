 package sec02_12924.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		
		int n = 15;
		System.out.print(solution(n));
		}
	public static int solution(int n) {
        int answer = 0; 
        
        for(int i = 1; i<=n ; i++) {
        	int sum = 0;
        	for(int j = i; j<=n ; j++) {
        		sum+= j;
        		
        		if(sum == n) {
        			answer++;
        			break;
        		}else if(sum>n) {
        			break;
        		}
        	}
        }
        return answer;
	}
}