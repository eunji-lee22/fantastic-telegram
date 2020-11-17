package sec03_2439.exam;

import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		int n; 
		
		try {
			n = Integer.parseInt(br.readLine().trim()); // 5
			
			for(int i = 1; i <= n; i++) { //1 2 3 4 5
				int j;
				for(j = n - i ; j > 0; j--) {// 4 3 2 1 
					bw.write(" ");
				}
				for(int k = 0; k < i; k++) { // 1 2 3 4
					bw.write("*");
				}
				bw.write("\n");
			}
			
		} catch (NumberFormatException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		bw.flush();
		bw.close();
	}
}
