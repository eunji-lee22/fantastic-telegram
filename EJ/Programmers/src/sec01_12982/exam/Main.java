package sec01_12982.exam;
import java.util.*;

class Main{
	public static void main(String[] args) {
	int[]d = {1,3,2,5,4};
	int budget = 9;
	
	}
	public static int solution(int[] d, int budget) {
		int sum = 0;
		int i = 0;
		int length = d.length;
		
		while(length > i && sum <= budget) {
			sum = sum + d[i];
			i++;
		}
		
		return i;
    }
}
