package sec05_4344.exam;
	import java.io.*;
	import java.util.*;

	public class Main {
		public static void main(String[] args) throws IOException {

			Scanner sc = new Scanner(System.in);
			
			//1. 테스트 수 입력받기
			int N = sc.nextInt();
			
//			float Sum = 0; //합계점수
			
			//2. 각 케이스의 학생 수 및 학생들 점수 입력받기
			
			for (int i=0;i<N;i++) {
				int N_s = sc.nextInt(); //학생수
				int Score[] = new int [N_s]; // 점수 배열 선언
				float Sum = 0;
				for(int j=0;j<N_s;j++) {
					Score[j] = sc.nextInt(); //각 학생별 점수 입력
					Sum = Sum + Score[j];    //학생들 점수 합계
				}
				float Avg = Sum / N_s; //평균값
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