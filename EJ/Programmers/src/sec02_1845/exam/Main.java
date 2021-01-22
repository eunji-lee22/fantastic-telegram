 package sec02_1845.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		int num[] = {1,2,3,4,5,6};
		System.out.print(solution(num));
	}
	public static int solution(int[] nums) {
		//N���� �־��� �� N/2�� ����� ��
		int max = nums.length/2;
		
		//�ߺ�����
		HashSet<Integer> numsSet = new HashSet<>();
		
		for(int num : nums) {
			numsSet.add(num);
		}
		// �ߺ����� �� �� ũ�Ⱑ max���� ũ�� max, ������ size ����
		if(numsSet.size()>max) {
			return max;
		}else {
			return numsSet.size();
		}
	}
}