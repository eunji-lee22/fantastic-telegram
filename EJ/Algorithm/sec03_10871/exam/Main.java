package sec03_10871.exam;

import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		
		int cnt = sc.nextInt(); //��������
		int min = sc.nextInt();//�ּ� ���ذ�
		int num[] = new int[cnt];	  //�Է¹޴� �迭
		int i;
		
		//�迭�� �� �Է�
		for (i = 0; i < cnt; i++) {
		num[i] = sc.nextInt();
		}
		
		for(i= 0; i<cnt; i++) {
			if (num[i] < min) System.out.print(num[i] + " ");
		}
	}
}