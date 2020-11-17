package sec10_2447.exam;
import java.io.*;
import java.util.*;

public class Main {
	static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
	
	public static void main(String[] args) throws IOException {
		
		Scanner in = new Scanner(System.in);
		int N = in.nextInt();
		
		bw.write((int) (Math.pow(2, N)-1) + "\n");
		Hanoi(N, 1, 2, 3);
		
		bw.flush();
		bw.close();
	}
	
	public static void Hanoi(int N, int start, int mid, int to) throws IOException {
		
		if(N == 1) {
			bw.write(start + " " + to + "\n");
			return ;
		}
		Hanoi(N-1, start, to, mid);
		
		bw.write(start + " " + to + "\n");
		
		Hanoi(N-1, mid, start, to);
	
	}
}
