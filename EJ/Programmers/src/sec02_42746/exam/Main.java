 package sec02_42746.exam;


import java.util.*;

import org.omg.CosNaming.NamingContextPackage.NotEmpty;

class Main{
	public static void main(String[] args) {
		int[] numbers = {6, 10, 2};
		System.out.print(solution(numbers));
	}
	public static String solution(int[] numbers) {
		String answer = "";
		
		String[] arr = new String[numbers.length];
		for(int i = 0; i<numbers.length; i++) {
			arr[i] = (String.valueOf(numbers[i]));
		}
		Arrays.sort(arr, new Comparator<String>() {
			public int compare(String s1, String s2) {
				return (s2 + s1).compareTo(s1 + s2); //내림차순 정렬
			}
		});
		if(arr[0].equals("0")) return "0";
		for(String str : arr) {
			answer += str;
		}
		return answer;
	}
}