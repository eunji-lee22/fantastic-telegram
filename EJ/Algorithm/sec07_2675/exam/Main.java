package sec07_2675.exam;
import java.io.*;
import java.util.*;

public class Main {
public static void main(String[] args) throws Exception {
	Scanner sc = new Scanner(System.in);
	
	int T = sc.nextInt(); //�׽�Ʈ ���̽� ����
	
//	toUpperCase();
	for (int i = 0 ; i < T; i++) {
		
		int R = sc.nextInt();
		String Str = sc.next(); // ���ڿ�
		
		for(int j = 0; j<Str.length(); j++) {
			for(int k = 0; k < R ; k++) {
			System.out.print(Str.charAt(j));
		}
	}
		System.out.println();
	}
}
}
