package sec02_1330.exam;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int A, B;
		
		A = sc.nextInt(); //�Է°�1
		B = sc.nextInt(); //�Է°�2
		
		if (A > B) {
			System.out.println('>');
		}else if (A < B) {
			System.out.println('<');
		}else {
			System.out.println("==");
		}
		
	}

}