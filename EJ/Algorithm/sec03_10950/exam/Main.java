package sec03_10950.exam;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt(); // ±¸±¸´Ü
		
		for(int i = 1 ; i < 10; i++) {
			System.out.print(N + " * " + i + " = ");
			System.out.println(N*i);
		}
		
	}
}