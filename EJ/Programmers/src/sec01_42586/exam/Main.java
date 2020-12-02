package sec01_42586.exam;
import java.util.*;
import java.io.*;

class Main{
	public static void main(String[] args) {
	int[] progresses = {95, 95, 95, 95};
	int[] speeds = {4, 3, 2, 1};
	
	System.out.print(solution(progresses, speeds));
	}
	public static ArrayList<Integer> solution(int[] progresses, int[] speeds) {
	
	ArrayList<Integer> aL = new ArrayList<Integer>();
	
	int length = progresses.length;
	int[] workday = new int[length];
	
	for(int i = 0; i<length; i++) 
		workday[i] = (int)Math.ceil((double)(100-progresses[i])/speeds[i]); 
	int sum = 0, cnt = 0;
	

		for(int j = 0; j<length; j++){
			cnt = 1;
			if(sum >=length) break;
			for(int k = j+1; k<length;k++) {
				if(workday[j] < workday[k]) { //앞이 뒤보다 작거나 같으면
					j = j + cnt -1;
					break;
				}
				cnt++;
			}aL.add(cnt); 
			sum = sum + cnt; 
		}
	return aL;
	}
}