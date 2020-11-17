package sec09_9020.exam;
import java.io.*;
import java.util.*;

public class Main {
	public static boolean[] prime = new boolean[10001];
	public static void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		get_prime();
		int T = Integer.parseInt(br.readLine());
		
		while(T-- > 0) {
			int n = Integer.parseInt(br.readLine());
			int first_part = n / 2;
			int scnd_part = n / 2;
			
			while(true) {
				if(!prime[first_part]&&!prime[scnd_part]) {
					System.out.println(first_part + " " + scnd_part);
					break;
				}
				first_part--;
				scnd_part++;
			}
		}
	}
	
	public static void get_prime() {
		prime[0] = prime[1] = true;
		
		for(int i = 2; i <=Math.sqrt(prime.length);i++) {
			if(prime[i]) continue;
			for(int j = i * i ; j< prime.length ;j+=i) {
			prime[j] = true;
			}
		}
	}
}