package sec05_1546.exam;
	import java.io.*;
	import java.util.*;

//import com.sun.javafx.scene.layout.region.Margins.Converter;
	
	public class Main {
		public static void main(String[] args) throws IOException {
			
			Scanner sc = new Scanner(System.in);
			int N = sc.nextInt(); //시험 과목 수
			int []Score = new int[N]; //시험 점수
			int Sum = 0; //합계점수
			float Avg = 0; //평균점수
			
			int MaxS ; //최대 값
			
			for (int i=0;i<N;i++) {
				Score[i] = sc.nextInt();
				Sum = Sum + Score[i];
			}
			
			Arrays.sort(Score); //정렬
			MaxS = Score[N-1]; //최댓값 get
			
//			Avg = (float)((Sum * 100.0) /(N * MaxS));
			
			System.out.println(Sum*100.0/(N*MaxS));
		}
	}
			
			