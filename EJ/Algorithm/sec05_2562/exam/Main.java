package sec05_2562.exam;
	import java.io.*;
	import java.util.*;
	
	public class Main {
		public static void main(String[] args) throws IOException {
			
			Scanner sc = new Scanner(System.in); 
			int []arr = new int[9];      // �迭
			int max = 0, max_n = 0;          //�ִ�, �ּڰ�

			//�迭�Է�
			for(int i = 0; i < 9; i++) {
				arr[i] = sc.nextInt();
			}
			
			
			//�ִ밪, �ּڰ�
			for(int i = 0; i< 9 ;i++) {
				
				if(max<arr[i]) {
					max = arr[i];
					max_n = i+1;
				}
			}
			
//			Arrays.sort(arr); //�����Լ� ��� 
			
			System.out.println(max);
			System.out.println(max_n);
			
		}
	}