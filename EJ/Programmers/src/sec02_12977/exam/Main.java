 package sec02_12977.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		int[] nums = {1,2,3,4};
		System.out.print(solution(nums));
	}
	public static boolean isPrime(int n) {
		//소수판별
		for(int i = 2; i*i <=n; i++) {
			if(n%i == 0) return false;
		}
		return true;
	}
	public static int solution(int[] nums) {
		int answer = 0;
		//3개 숫자의 합
		for(int i = 0; i<nums.length; i++) {
			for(int j = i+1; j<nums.length; j++) {
				for(int k = j+1 ; k<nums.length; k++) {
					int sum = nums[i] + nums[j]+ nums[k];
					if(isPrime(sum)) answer++;
				}
			}
		}
		return answer;
	}
}