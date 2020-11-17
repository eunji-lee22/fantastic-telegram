package sec09_1978.exam;
import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws Exception {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt(); // 테스트케이스 수
		int cnt = N;
		
		for(int i = 0; i< N ; i++) {
			int n = sc.nextInt();
			if (n ==1 ) cnt = cnt -1;
			for(int j = 2; j<= n-1 ; j++) {
				if (n%j == 0) {
					cnt = cnt -1;
					break;
				}
			}
		}System.out.print(cnt);
	}
}
