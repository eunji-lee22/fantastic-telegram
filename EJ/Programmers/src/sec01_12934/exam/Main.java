package sec01_12934.exam;
import java.util.*;

class Main{
	public static void main(String[] args) {
	long n = 400000000;
	
	System.out.print(solution(n));
	}
	public static long solution(long n) {      
		
		if (Math.pow((int)Math.sqrt(n), 2) == n) {
        return (long) Math.pow(Math.sqrt(n) + 1, 2);
    }

    return -1;
    }
}