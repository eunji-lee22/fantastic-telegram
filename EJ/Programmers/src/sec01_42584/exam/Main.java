package sec01_42584.exam;
import java.util.*;
import java.io.*;

class Main{
	public static void main(String[] args) {
	int[] prices = {1,2,3,2,3};
	
	System.out.print(solution(prices));
	}
	public static int[] solution(int[] prices) {
		int[] answer = new int[prices.length];
        
		for(int i = 0; i<prices.length; i++) {
			for(int j = i+1; j<prices.length; j++){
				//증가했을 때 일정할 때 감소할때 
				if(prices[i] > prices[j]) {
					answer[i] = answer[i] +1 ; 
					break;
				}
				else answer[i] = answer[i] +1;
			}
		}
        return answer;
	}
}