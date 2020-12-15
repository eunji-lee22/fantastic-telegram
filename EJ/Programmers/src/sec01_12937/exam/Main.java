package sec01_12937.exam;
import java.util.*;

class Main{
	public static void main(String[] args) {
	int num = 3;
	
	System.out.print(solution(num));
	}
    public static String solution(int num) {
        String answer = "Odd";
		
        if(num %2 == 0) {
        	answer = "Even";
        }
		return answer;
    }
}