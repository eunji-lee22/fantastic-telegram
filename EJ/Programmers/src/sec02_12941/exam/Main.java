 package sec02_12941.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		int A[] = {1,2,4};
		int B[] = {4,5,4};
		System.out.print(solution(A, B));
	}
	public static int solution(int[] A, int[] B) {
		//A, B Á¤·Ä ÈÄ °ö¼ÀÀÇ ÇÕ °è»ê
		int length = A.length;
		int sum = 0;
		
		Arrays.sort(A);
		Arrays.sort(B);
		
		for(int i = 0; i<length; i++)  sum = sum + A[i]*B[length-i-1];
		
		return sum;
	}
}