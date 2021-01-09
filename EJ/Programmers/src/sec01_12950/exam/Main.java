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
//점수 : 1점
//테스트 1 〉	통과 (0.02ms, 51.9MB)
//테스트 2 〉	통과 (0.06ms, 52.5MB)
//테스트 3 〉	통과 (0.15ms, 54.7MB)
//테스트 4 〉	통과 (0.09ms, 53.4MB)
//테스트 5 〉	통과 (0.04ms, 52.1MB)
//테스트 6 〉	통과 (0.07ms, 53.4MB)
//테스트 7 〉	통과 (0.02ms, 53MB)
//테스트 8 〉	통과 (0.07ms, 52.3MB)
//테스트 9 〉	통과 (0.46ms, 58.5MB)
//테스트 10 〉	통과 (0.31ms, 57.5MB)
//테스트 11 〉	통과 (0.20ms, 56.4MB)
//테스트 12 〉	통과 (0.27ms, 57.2MB)
//테스트 13 〉	통과 (0.21ms, 56.1MB)
//테스트 14 〉	통과 (0.28ms, 57.3MB)
//테스트 15 〉	통과 (0.30ms, 58.4MB)
//테스트 16 〉	통과 (0.29ms, 57.1MB)
//테스트 17 〉	통과 (6.64ms, 103MB)