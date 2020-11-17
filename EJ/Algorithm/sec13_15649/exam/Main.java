package sec13_15649.exam;
import java.io.*;
import java.util.*;

public class Main {	
	public static int[] arr;
	public static boolean[] visit;
	
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();
		int M = sc.nextInt();
		
		arr = new int[M];
		visit = new boolean[N];
		dfs(N, M,0);
	}
	public static void dfs(int N, int M, int depth) {
		if(depth == M) {
			for(int val : arr) {
				System.out.print(val + " ");
			}
			System.out.println();
			return ;
		}
			for(int i = 0; i< N; i++) {
				if(!visit[i]) {
					visit[i] = true;
					arr[depth] = i + 1;
					dfs(N, M, depth + 1);
					visit[i] = false;
			}
		}
	}
}