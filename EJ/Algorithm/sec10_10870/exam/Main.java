package sec10_10870.exam;
import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		
		int sum = fibo(N);
		System.out.println(sum);
	}
	public static int fibo(int N) {
		if(N == 1) return 1;
		else if(N==0) return 0;
		
		return fibo(N-1) + fibo(N-2);
	}
}