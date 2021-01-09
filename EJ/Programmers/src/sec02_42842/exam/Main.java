 package sec02_42842.exam;

import java.text.ParseException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;

import org.omg.CosNaming.NamingContextPackage.NotEmpty;

class Main{
	static int answer = 0;
	public static void main(String[] args) {
		int brown = 24; int yellow = 24;
		System.out.print(solution(brown, yellow));
		}
	public static int[] solution(int brown, int yellow) {
		int[] answer = new int[2];
		int sum = (brown + 4) /2;
		int m = 3; //가로 최소값
		int n = sum -m;// 세로 최대값
		
		while(n >=3 && n >=m) {
			if((n-2)*(m-2) == yellow) {
				answer[0] = n;
				answer[1] = m;
				break;
			}
			n--; m++;
		}
		return answer;
	}
}