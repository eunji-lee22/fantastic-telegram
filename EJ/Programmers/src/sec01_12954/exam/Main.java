package sec01_12954.exam;
import java.util.*;

class Main{
	public static void main(String[] args) {
	int x = -4;
	int n = 5;
	System.out.print(solution(x,n));
	}
	public static long[] solution(int x, int n) {
		long[] answer = new long[n];
		answer[0] = x;
		
		for(int i = 1; i<n; i++) 
			answer[i] = answer[i-1] + x;
		
		return answer;
    }
}
//점수 : 3점
//테스트 1 〉	통과 (0.01ms, 51.7MB)
//테스트 2 〉	통과 (0.03ms, 51.7MB)
//테스트 3 〉	통과 (0.03ms, 54.3MB)
//테스트 4 〉	통과 (0.05ms, 52.9MB)
//테스트 5 〉	통과 (0.03ms, 53MB)
//테스트 6 〉	통과 (0.01ms, 53MB)
//테스트 7 〉	통과 (0.05ms, 53.8MB)
//테스트 8 〉	통과 (0.03ms, 53.3MB)
//테스트 9 〉	통과 (0.04ms, 52MB)
//테스트 10 〉	통과 (0.02ms, 52.9MB)
//테스트 11 〉	통과 (0.04ms, 52.7MB)
//테스트 12 〉	통과 (0.04ms, 52.7MB)
//테스트 13 〉	통과 (0.07ms, 52.5MB)
//테스트 14 〉	통과 (0.05ms, 53.2MB)