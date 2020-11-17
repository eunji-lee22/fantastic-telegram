package sec08_2292.exam;
import java.io.*;
import java.util.*;

public class Main {
public static void main(String[] args) throws Exception {
	Scanner sc = new Scanner(System.in);
	
	int N = sc.nextInt(); //입력 받은 벌집위치
	int i ;                   //반복 횟수
	int sum = 0;
	
	if (N == 1) i = 0;
	else{
		for (i=0; ; i++) {
			if (N  <= 1 + 6*sum(i) ) 
			break;
		}
	}
	System.out.print(i+1);
}

public static int sum(int n) {
	int sum = 0;
	for(int i = 0; i<=n ; i++) {
		sum = sum + i;
	}
	return sum;
}
}
