package sec08_2869.exam;
import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt(); // �׽�Ʈ���̽� �� 
		String room_n ; // ���ȣ
		
		for (int i = 0; i< T ; i++) { // �׽�Ʈ ���̽� �� ��ŭ �ݺ�

			int H = sc.nextInt(); //  ����
			int W = sc.nextInt();//  ���� ��� 
			int N = sc.nextInt();//  �մ� ����
			String XX = null, YY = null;
			
			XX  = String.valueOf(N/H + 1);	
			YY = String.valueOf(N%H);
			
			if (N%H == 0) {
				YY = String.valueOf(H); 
				XX = String.valueOf(N/H);
			}


			if (N/H + 1 < 10) System.out.println(YY + "0" + XX);
			else System.out.println(YY + XX);
		}
	}
}
