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
//���� : 3��
//�׽�Ʈ 1 ��	��� (0.01ms, 51.7MB)
//�׽�Ʈ 2 ��	��� (0.03ms, 51.7MB)
//�׽�Ʈ 3 ��	��� (0.03ms, 54.3MB)
//�׽�Ʈ 4 ��	��� (0.05ms, 52.9MB)
//�׽�Ʈ 5 ��	��� (0.03ms, 53MB)
//�׽�Ʈ 6 ��	��� (0.01ms, 53MB)
//�׽�Ʈ 7 ��	��� (0.05ms, 53.8MB)
//�׽�Ʈ 8 ��	��� (0.03ms, 53.3MB)
//�׽�Ʈ 9 ��	��� (0.04ms, 52MB)
//�׽�Ʈ 10 ��	��� (0.02ms, 52.9MB)
//�׽�Ʈ 11 ��	��� (0.04ms, 52.7MB)
//�׽�Ʈ 12 ��	��� (0.04ms, 52.7MB)
//�׽�Ʈ 13 ��	��� (0.07ms, 52.5MB)
//�׽�Ʈ 14 ��	��� (0.05ms, 53.2MB)