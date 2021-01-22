 package sec02_12953.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		int[] arr = {2,6,8,14};
		System.out.print(solution(arr));
	}
	public static int solution(int[] arr) {
        int answer = 0;
        int lcm1 = arr[0];
        for(int i=0;i<arr.length;i++) {

                lcm1 =lcm(lcm1,arr[i]);

        }
        return lcm1;
  }
	static int gcd(int a, int b) {
			 while(b!=0) {
				 int r=a%b;
				 a=b;
				 b=r;
			 }
			 return a;
		 }
   static int lcm(int a,int b) {
      return a*b/gcd(a,b);
   }
}