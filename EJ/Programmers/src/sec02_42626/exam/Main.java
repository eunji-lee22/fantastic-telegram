 package sec02_42626.exam;

import java.text.ParseException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.PriorityQueue;
import java.util.Queue;

import org.omg.CosNaming.NamingContextPackage.NotEmpty;

class Main{
	public static void main(String[] args) {
		int[] scoville = {1, 2};
		int K = 100;
		System.out.print(solution(scoville, K));
	}
	public static int solution(int[] scoville, int K) {
		int answer = 0;
		
		PriorityQueue<Integer> heap = new PriorityQueue();
		
		for(int aScoville : scoville) {
			heap.offer(aScoville);
		}
		while(heap.peek() <= K) {
			if(heap.size() == 1) {
				return -1;
			}
			int a = heap.poll();
			int b = heap.poll();
			
			int result = a + b *2;
			
			heap.offer(result);
			answer++;
		}
		return answer;
	}
}