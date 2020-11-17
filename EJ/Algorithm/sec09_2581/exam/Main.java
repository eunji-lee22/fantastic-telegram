package sec09_2581.exam;
import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws Exception {
		Scanner sc = new Scanner(System.in);
		
		while(true) {
			int M = sc.nextInt();
			if(M == 0) break;
			
			int N = 2*M; // 테스트케이스 수
			M  = M + 1;
			Integer[] arr = new Integer[N-M+1];
			int cnt = 0; 
			
			for(int i = 0; i<= N-M; i++) arr[i] = M + i;
			if(M ==1) arr[0] = 0;
			
			for(int i = M; i<= N ; i++) {
				for(int j = 2; j< i; j++) {
					if(i % j ==0) {
						arr[i-M] = 0; 
						break;
					}
				}
			}
				for(int k = 0; k<=N-M ; k++) {
					if(arr[k] != 0) cnt++;
				}
				System.out.println(cnt);
		}
	}
}

