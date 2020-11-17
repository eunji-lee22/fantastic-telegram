package sec08_2869.exam;
import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt(); // 테스트케이스 수 
		String room_n ; // 방번호
		
		for (int i = 0; i< T ; i++) { // 테스트 케이스 수 만큼 반복

			int H = sc.nextInt(); //  층수
			int W = sc.nextInt();//  층당 방수 
			int N = sc.nextInt();//  손님 순서
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
