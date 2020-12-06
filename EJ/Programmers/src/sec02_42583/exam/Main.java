 package sec02_42583.exam;

import java.text.ParseException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;

import org.omg.CosNaming.NamingContextPackage.NotEmpty;

class Main{
	public static void main(String[] args) {
		int bridge_length = 2;
		int weight = 10;
		int[] truck_weights = {7,4,5,6};
		
		System.out.print(solution(bridge_length, weight, truck_weights));
		}
	public static int solution(int bridge_length, int weight, int[] truck_weights) {
		int answer = 0; 
		Queue<Integer> q = new ConcurrentLinkedQueue<>();
		int sum = 0;
		
		for(int i : truck_weights) {
			while(true) {
				//비어있을 때
				if(q.isEmpty()) {
					q.add(i);
					sum += i;
					answer++;
					break;
				}else if(q.size() == bridge_length) {
					sum -= q.poll();
				}else {
					if(sum + i > weight) {
						answer++;
						q.add(0);
					}else {
						q.add(i);
						sum += i;
						answer ++;
						break;
					}
				}
			}
		}
		return answer + bridge_length;
	}
}