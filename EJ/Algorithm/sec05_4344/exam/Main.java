package sec05_4344.exam;
	import java.io.*;
	import java.util.*;

	public class Main {
		public static void main(String[] args) throws IOException {

			Scanner sc = new Scanner(System.in);
			
			//1. �׽�Ʈ �� �Է¹ޱ�
			int N = sc.nextInt();
			
//			float Sum = 0; //�հ�����
			
			//2. �� ���̽��� �л� �� �� �л��� ���� �Է¹ޱ�
			
			for (int i=0;i<N;i++) {
				int N_s = sc.nextInt(); //�л���
				int Score[] = new int [N_s]; // ���� �迭 ����
				float Sum = 0;
				for(int j=0;j<N_s;j++) {
					Score[j] = sc.nextInt(); //�� �л��� ���� �Է�
					Sum = Sum + Score[j];    //�л��� ���� �հ�
				}
				float Avg = Sum / N_s; //��հ�
				int cnt = 0;
				for(int k=0;k<N_s;k++) {
					if(Score[k] > Avg) cnt++;
				}
				
				double Percent = (double) cnt/N_s * 100;
				System.out.printf(String.format("%.3f", Percent));
				System.out.println("%");			
				}
			sc.close();
		}
	}