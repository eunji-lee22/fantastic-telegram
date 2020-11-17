package sec03_8393.exam;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int cnt = sc.nextInt();//횟수
		int A, B ; //입력할 정수 
		
		
		 for (int i = 0; i < cnt; i++) {
			 A = sc.nextInt(); // 입력
			 B = sc.nextInt(); // 입력
			 
			 System.out.println(A + B);
		 }
	}
}