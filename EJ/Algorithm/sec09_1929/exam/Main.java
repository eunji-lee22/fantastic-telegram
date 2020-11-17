package sec09_1929.exam;
import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws Exception {
		Scanner sc = new Scanner(System.in);
		int M = sc.nextInt();
		int N = sc.nextInt(); // 테스트케이스 수
		Integer[] arr = new Integer[N-M+1];
		int sum = 0 , min = 0; 
		
		for(int i = 0; i<= N-M; i++) arr[i] = M + i;
		if(M ==1) arr[0] = 0;
		
		for(int i = M; i<= N ; i++) {
			for(int j = 2; j< i; j++) {
				if(i % j ==0) {
					arr[i-M] = 0; 
					break;
				}
			}
		}Arrays.sort(arr,Collections.reverseOrder());
		for(int k = 0; k<N-M; k++) {
			sum = sum + arr[k];
		}
		if (sum == 0) System.out.print(-1);
		else {
			System.out.println(sum);
			for(int k = N-M; k>= 0 ; k--) {
				if(arr[k] != 0) {
					System.out.println(arr[k]); 
					break;
				}
			}
		}
	}
}
