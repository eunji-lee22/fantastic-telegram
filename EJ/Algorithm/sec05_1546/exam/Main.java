package sec05_1546.exam;
	import java.io.*;
	import java.util.*;

//import com.sun.javafx.scene.layout.region.Margins.Converter;
	
	public class Main {
		public static void main(String[] args) throws IOException {
			
			Scanner sc = new Scanner(System.in);
			int N = sc.nextInt(); //���� ���� ��
			int []Score = new int[N]; //���� ����
			int Sum = 0; //�հ�����
			float Avg = 0; //�������
			
			int MaxS ; //�ִ� ��
			
			for (int i=0;i<N;i++) {
				Score[i] = sc.nextInt();
				Sum = Sum + Score[i];
			}
			
			Arrays.sort(Score); //����
			MaxS = Score[N-1]; //�ִ� get
			
//			Avg = (float)((Sum * 100.0) /(N * MaxS));
			
			System.out.println(Sum*100.0/(N*MaxS));
		}
	}
			
			