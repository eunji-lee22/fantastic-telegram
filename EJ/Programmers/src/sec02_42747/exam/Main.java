 package sec02_42747.exam;

import java.util.*;

import org.omg.CosNaming.NamingContextPackage.NotEmpty;

class Main{
	public static void main(String[] args) {
		int[] citations = {0,1,2,3,4};
		System.out.print(solution(citations));
	}
	public static int solution(int[] citations) {
		int answer = 0;
		
		Arrays.sort(citations);
		
		for(int i = 0; i<citations.length; i++) {
			
			if(citations[i] >= citations.length - i) {
				answer = citations.length - i;
				break;
			}
		}
		return answer;
	}
}