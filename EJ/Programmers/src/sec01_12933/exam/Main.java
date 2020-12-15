package sec01_12933.exam;
import java.util.*;

class Main{
	public static void main(String[] args) {
	long n = 118372;
	
	System.out.print(solution(n));
	}
	public static long solution(long n) {
		int length = Long.toString(n).length();
		String answer = "";
		
		Integer res[] = new Integer[length];
		for(int j = 0; j < length ; j++) {
			res[j] = (int) (n%10);
			n = n / 10;
		}
		//정렬
		Arrays.sort(res, Collections.reverseOrder());
		
		//조합
		for(int i = 0; i<length; i++) {
			answer = answer + Integer.toString(res[i]);
		}
		//출력
		return Long.valueOf(answer);
    }
}