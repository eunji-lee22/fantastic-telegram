package sec12_2750.exam;
import java.io.*;
import java.util.*;

public class Main {	
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();
		
		int[] arr = new int [N];
		
		for(int i = 0 ; i< N ; i++) {
			arr[i] = sc.nextInt();
		}Arrays.sort(arr);
		
		for(int i = 0; i < N; i++) {
			System.out.println(arr[i]);
		}
	}
}