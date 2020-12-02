 package sec01_12915.exam;

import java.text.ParseException;
import java.util.ArrayList;
import java.util.Collections;

class Main{
	public static void main(String[] args) {
		String[] answer = {"abzcd","cdzab","abzfg","abzaa","abzbb","bbzaa"};
		int n = 1;
		System.out.print(solution(answer, n));
		}
	public static String[] solution(String[] strings, int n) {
		
		ArrayList<String> list = new ArrayList<>();
		
		for(int i = 0; i<strings.length; i++) 
			list.add(strings[i].charAt(n)+strings[i]);
		
		Collections.sort(list);
		
		String[] answer = new String[list.size()];
		
		for(int i = 0; i<list.size(); i++) 
			answer[i] = list.get(i).substring(1,list.get(i).length());
		
		return answer;
	}
}