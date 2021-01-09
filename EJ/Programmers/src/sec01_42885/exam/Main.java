 package sec01_42885.exam;

	import java.util.*;

class Main{
	public static void main(String[] args) {
		int[] people = {10, 70,50,80,50};
		int limit = 100;
	
		System.out.print(solution(people, limit));
	}
	public static int solution(int[] people, int limit) {
		ArrayList<Integer> AL = new ArrayList<>();
		
		Arrays.sort(people);
		for(int i = 0; i<people.length ; i++)
			AL.add(people[i]);

		int min = 0; 
		int cnt = 0; 
		while(!AL.isEmpty()) {
			min = AL.get(AL.size()-1);
			AL.remove(AL.size()-1);
			while(!AL.isEmpty() && min + AL.get(0) <= limit) {
				min = min + AL.get(0);
				AL.remove(0);	
			}
			cnt ++;
		}
		return cnt;
	}
}