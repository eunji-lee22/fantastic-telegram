 package sec02_1845.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		int num[] = {1,2,3,4,5,6};
		System.out.print(solution(num));
	}
	public static int solution(int[] nums) {
		//N개가 주어질 때 N/2의 경우의 수
		int max = nums.length/2;
		
		//중복제거
		HashSet<Integer> numsSet = new HashSet<>();
		
		for(int num : nums) {
			numsSet.add(num);
		}
		// 중복제거 후 셋 크기가 max보다 크면 max, 작으면 size 리턴
		if(numsSet.size()>max) {
			return max;
		}else {
			return numsSet.size();
		}
	}
}