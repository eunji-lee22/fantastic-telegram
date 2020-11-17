package sec07_11720.exam;
import java.io.*;
import java.util.*;

public class Main {
public static void main(String[] args) throws Exception {
	Scanner sc = new Scanner(System.in);

	int N = sc.nextInt();
	int sum = 0;
	
	String Str = sc.next(); //nextLine(); -- 한 라인을 입력받음
	
	
	for(int i = 0;i < N; i++) {
		int ch = (int)Str.charAt(i) - 48;
		sum = sum + ch;
	}
	System.out.print(sum);
	
}
}
