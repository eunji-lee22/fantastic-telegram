package sec03_10871.exam;

import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		
		int cnt = sc.nextInt(); //수열갯수
		int min = sc.nextInt();//최소 기준값
		int num[] = new int[cnt];	  //입력받는 배열
		int i;
		
		//배열에 값 입력
		for (i = 0; i < cnt; i++) {
		num[i] = sc.nextInt();
		}
		
		for(i= 0; i<cnt; i++) {
			if (num[i] < min) System.out.print(num[i] + " ");
		}
	}
}