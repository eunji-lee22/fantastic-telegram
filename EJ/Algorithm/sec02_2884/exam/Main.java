package sec02_2884.exam;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int H = sc.nextInt(); // 시간입력
		int M = sc.nextInt(); // 분입력
		
		int H_a, M_a; //알림시간, 분
		
		if ( M >= 45) {
			M_a = M - 45;
			H_a = H;
		}else {
			M_a = M + 15;
			H_a = H - 1;
		}
		
		if (H_a < 0) {
			H_a = H_a + 24;
		}
		System.out.print(H_a +" " + M_a);
	}
}