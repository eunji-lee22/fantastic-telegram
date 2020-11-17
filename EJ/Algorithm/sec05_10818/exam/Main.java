package sec05_10818.exam;

	import java.io.*;
	import java.util.*;
	
	public class Main {
		public static void main(String[] args) throws IOException {
			
			Scanner sc = new Scanner(System.in); 
			int cnt = sc.nextInt();// 배열의 갯수
			int []arr = new int[cnt];      // 배열
			int max, min;          //최댓값, 최솟값

			//배열입력
			for(int i = 0; i < cnt; i++) {
				arr[i] = sc.nextInt();
			}
			
			min = arr[0];
			max = arr[0];
			
			//최대값, 최솟값
			for(int i = 0; i<cnt;i++) {
				
				if(min>arr[i]) min = arr[i];
				if(max<arr[i]) max = arr[i];
			}
			
//			Arrays.sort(arr); 정렬함수 사용 
						
			System.out.println(min + " " + max);
			
		}
	}
	
