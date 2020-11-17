package sec05_2562.exam;
	import java.io.*;
	import java.util.*;
	
	public class Main {
		public static void main(String[] args) throws IOException {
			
			Scanner sc = new Scanner(System.in); 
			int []arr = new int[9];      // 배열
			int max = 0, max_n = 0;          //최댓값, 최솟값

			//배열입력
			for(int i = 0; i < 9; i++) {
				arr[i] = sc.nextInt();
			}
			
			
			//최대값, 최솟값
			for(int i = 0; i< 9 ;i++) {
				
				if(max<arr[i]) {
					max = arr[i];
					max_n = i+1;
				}
			}
			
//			Arrays.sort(arr); //정렬함수 사용 
			
			System.out.println(max);
			System.out.println(max_n);
			
		}
	}