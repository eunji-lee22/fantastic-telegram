package sec02_2884.exam;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int H = sc.nextInt(); // �ð��Է�
		int M = sc.nextInt(); // ���Է�
		
		int H_a, M_a; //�˸��ð�, ��
		
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