package sec05_2577.exam;
	import java.io.*;
	import java.util.*;
	
	public class Main {
		public static void main(String[] args) throws IOException {
			
			Scanner sc = new Scanner(System.in); 
			int Value = (sc.nextInt() * sc.nextInt() * sc.nextInt());
			String str = Integer.toString(Value);
			sc.close();
			
			for(int i = 0;i < 10; i++) {
				int count = 0;
				
				for(int j=0;j<str.length(); j++) {
					if((str.charAt(j) - '0') == i){
						count++;
					}
				}
				System.out.println(count);
			}
		}
	}	

	