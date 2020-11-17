package sec03_11021.exam;

import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		int n;
		
		try {
			n = Integer.parseInt(br.readLine().trim());
			
			for(int i = 1; i <= n; i++) {
				String text = br.readLine();
				String[] word = text.split(" ");
				int a = Integer.parseInt(word[0]);
				int b = Integer.parseInt(word[1]);
				bw.write("Case #" + i + ": " + (a+b) + "\n");
			}
			
		} catch (NumberFormatException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		bw.flush();
		bw.close();
	}
}
