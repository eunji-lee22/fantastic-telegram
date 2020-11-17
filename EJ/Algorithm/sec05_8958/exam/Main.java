package sec05_8958.exam;
	import java.io.*;
	import java.util.*;

//import com.sun.javafx.scene.layout.region.Margins.Converter;
	
	public class Main {
		public static void main(String[] args) throws IOException {
			
			Scanner sc = new Scanner(System.in);
			int N = sc.nextInt();
			
			String ans[] = new String[N+1]; //답안
			
			//점수입력
			for(int i=0; i<=N; i++) {
			ans[i] = sc.nextLine();
			
//			System.out.println(ans[i]);
			
			}
			
//			//채점
			for(int i=1; i<N+1; i++) {
				
				int cnt = 0;
				int sum = 0;
				
				for(int j=0; j < ans[i].length(); j++) {
					if(ans[i].charAt(j) == 'O'){
						sum += ++cnt;
					}else {
						cnt = 0;
					}
				}
				System.out.println(sum);
			}sc.close();
			
			
		}		
	}