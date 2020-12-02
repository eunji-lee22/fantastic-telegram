 package sec01_12906.exam;

import java.text.ParseException;
import java.util.ArrayList;

class Main{
	public static void main(String[] args) throws ParseException {
	int[] moves = {1,1,3,3,0,1,1};
	
	System.out.print(solution(moves));
	}
	public static int[] solution(int []arr) {
		
		ArrayList<Integer> aL = new ArrayList<Integer>();
		int len = arr.length;
		
		aL.add(arr[0]);
		for(int i = 1; i<len ; i++) {
			if(aL.get(aL.size()-1) != arr[i]) {
				aL.add(arr[i]);
			}
		}
		
		int[] answer = new int [aL.size()];
		
		for(int i = 0; i<aL.size(); i++) {
			answer[i] = aL.get(i);
		}
        return answer;
	}
}