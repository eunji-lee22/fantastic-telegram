package sec04_10951.exam;

import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		int A, B;
		
		
		while (sc.hasNextInt()) {
			
		A = sc.nextInt();
		B = sc.nextInt();
		System.out.println(A + B);
		}
		
		sc.close();
	}
}

    