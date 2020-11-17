package sec04_1110.exam;

import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		
		Scanner sc = new Scanner(System.in);
		int input;    		//입력값
		int A = 0 , B = 0;
		int sum = 0;		 //비교값 
		int N = 0;			//count
		
		input = sc.nextInt();
		
		A = input / 10;  // 2
		B = input % 10;  // 6
		
		
		while (true) {  //0 !=26 8 !=26 14 != 26 12 != 26 6!=26)
		
		sum = A + B;   //8 14 12 6
		A = B;         //6  8 4  2
		B = sum % 10;  //8  4 2  0
		
		N++;          //1 2 3 4
		
		if ((A * 10 + B) == input) break;
		}
		
		System.out.println(N);
	}
}

        