package sec03_8393.exam;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int cnt = sc.nextInt();//Ƚ��
		int A, B ; //�Է��� ���� 
		
		
		 for (int i = 0; i < cnt; i++) {
			 A = sc.nextInt(); // �Է�
			 B = sc.nextInt(); // �Է�
			 
			 System.out.println(A + B);
		 }
	}
}