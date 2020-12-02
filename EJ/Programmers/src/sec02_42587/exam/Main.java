 package sec02_42587.exam;

import java.text.ParseException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.PriorityQueue;
import java.util.Queue;

import org.omg.CosNaming.NamingContextPackage.NotEmpty;

class Main{
	public static void main(String[] args) {
		int[] priorities= {1, 1, 9, 1, 1, 1};
		int location = 1;
		System.out.print(solution(priorities, location));
		}
	public static int solution(int[] priorities, int location) {
		Queue<Integer> pq = new PriorityQueue<Integer>(Collections.reverseOrder());
		int answer = 1;
		
		for(int i  : priorities) {
			pq.offer(i);
		}
		
		while(!pq.isEmpty()) {
			for(int i = 0; i< priorities.length; i++) {
				if(priorities[i] == pq.peek()) {
					if(location == i) {
						return answer;
					}
					answer++;
					pq.poll();
				}
			}
		}
		return answer;
	}
}