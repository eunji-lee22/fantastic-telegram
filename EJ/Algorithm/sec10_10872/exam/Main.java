package sec10_10872.exam;
import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		
		int sum = factorial(N);
		System.out.println(sum);
	}
	public static int factorial(int N) {
		if(N <= 1) return 1;
		return N* factorial(N-1);
	}
}