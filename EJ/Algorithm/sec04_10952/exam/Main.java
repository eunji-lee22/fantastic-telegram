package sec04_10952.exam;

import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		int A, B;
		
		
		while (true) {
			
		A = sc.nextInt();
		B = sc.nextInt();
		
		
		if(A == 0 && B == 0) {
			break;
		}else {
			System.out.println(A + B);
		}
		}
	}
}

