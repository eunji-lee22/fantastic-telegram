package sec02_9498.exam;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int Year = sc.nextInt(); // 년도 입력
		
		if ((Year % 4 == 0) && ((Year % 100 != 0 )||(Year % 400 == 0))){
				System.out.println("1");
			}
		else {
			System.out.println("0");
		}
	}
}
