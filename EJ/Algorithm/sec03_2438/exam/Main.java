package sec03_2438.exam;

import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		
		for(int i = 1; i <= n ; i++) {
			for (int j = 0; j < i; j++){
				System.out.print("*");
			}
			System.out.println();
			
		}
	}
}