package sec05_10818.exam;

	import java.io.*;
	import java.util.*;
	
	public class Main {
		public static void main(String[] args) throws IOException {
			
			Scanner sc = new Scanner(System.in); 
			int cnt = sc.nextInt();// �迭�� ����
			int []arr = new int[cnt];      // �迭
			int max, min;          //�ִ�, �ּڰ�

			//�迭�Է�
			for(int i = 0; i < cnt; i++) {
				arr[i] = sc.nextInt();
			}
			
			min = arr[0];
			max = arr[0];
			
			//�ִ밪, �ּڰ�
			for(int i = 0; i<cnt;i++) {
				
				if(min>arr[i]) min = arr[i];
				if(max<arr[i]) max = arr[i];
			}
			
//			Arrays.sort(arr); �����Լ� ��� 
						
			System.out.println(min + " " + max);
			
		}
	}
	
