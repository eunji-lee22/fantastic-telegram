 package sec02_42860.exam;


import java.util.*;

import org.omg.CosNaming.NamingContextPackage.NotEmpty;

class Main{
	public static void main(String[] args) {
		String name = "CCABJ";
		System.out.print(solution(name));
	}
	public static int solution(String name) {
	int answer = 0; 
	
	//A에서 더하는 방법, Z 에서 빼는 방법 중 최솟값 구하기
	for(int i = 0; i<name.length(); i++) {
		if(name.charAt(i) != 'A') {
			int up = name.charAt(i) - 'A';
			int down = 1 + 'Z' - name.charAt(i);
			answer += (up < down)? up : down;
		}
	}
	//최소 이동횟수(만약 A인 알파벳이 있다면, 반대편으로 이동)
	int minMove = name.length() - 1;//전부 A가 아닐때 최소이동

	for(int i = 0; i<name.length(); i++) {
		if(name.charAt(i) != 'A') {
			int next = i + 1;
			while(next <name.length() && name.charAt(next) == 'A') {
				next++; 
			}
			// 이미 이동한 횟수 * 2 + (전체길이 - 안가도 되는 길이) 
			int move = 2 * i + name.length() - next;
			minMove = Math.min(move,  minMove);
		}
	}
	return answer + minMove;
	}
}