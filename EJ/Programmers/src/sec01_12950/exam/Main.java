package sec01_12950.exam;
import java.util.*;

class Main{
	public static void main(String[] args) {
	int[][] arr1 = {{1,2} , {2,3}};
	int[][] arr2 = {{3,4} , {5,6}};
	
	System.out.print(solution(arr1, arr2));
	}
	public static int[][] solution(int[][] arr1, int[][] arr2) {
		int[][] answer = new int[arr1.length][arr1[0].length];
		
		for(int i = 0; i<arr1.length; i++) {
			for(int j = 0; j<arr1[0].length; j++) {
				answer[i][j] = arr1[i][j] + arr2[i][j];
			}
		}
		return answer;
    }
}
//���� : 1��
//�׽�Ʈ 1 ��	��� (0.02ms, 51.9MB)
//�׽�Ʈ 2 ��	��� (0.06ms, 52.5MB)
//�׽�Ʈ 3 ��	��� (0.15ms, 54.7MB)
//�׽�Ʈ 4 ��	��� (0.09ms, 53.4MB)
//�׽�Ʈ 5 ��	��� (0.04ms, 52.1MB)
//�׽�Ʈ 6 ��	��� (0.07ms, 53.4MB)
//�׽�Ʈ 7 ��	��� (0.02ms, 53MB)
//�׽�Ʈ 8 ��	��� (0.07ms, 52.3MB)
//�׽�Ʈ 9 ��	��� (0.46ms, 58.5MB)
//�׽�Ʈ 10 ��	��� (0.31ms, 57.5MB)
//�׽�Ʈ 11 ��	��� (0.20ms, 56.4MB)
//�׽�Ʈ 12 ��	��� (0.27ms, 57.2MB)
//�׽�Ʈ 13 ��	��� (0.21ms, 56.1MB)
//�׽�Ʈ 14 ��	��� (0.28ms, 57.3MB)
//�׽�Ʈ 15 ��	��� (0.30ms, 58.4MB)
//�׽�Ʈ 16 ��	��� (0.29ms, 57.1MB)
//�׽�Ʈ 17 ��	��� (6.64ms, 103MB)