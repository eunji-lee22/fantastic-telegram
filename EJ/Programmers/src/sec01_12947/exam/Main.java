package sec01_12947.exam;
import java.util.*;
import java.io.*;
import java.lang.reflect.Array;

class Main{
	public static void main(String[] args) {
	int x = 10;
	System.out.print(solution(x));
	}
	public static boolean solution(int x) {
		boolean answer = true;
		int sum = 0;
		int y = x;
		while(x >= 1) {
			sum = sum + x%10;
			x = x/10;
		}
		if(y % sum != 0) answer = false;
		
		return answer;
	}
	//��Ŭ���� ȣ���� : �� ���� ���� ��, �ִ������� ������ �ּҰ������ ��
}