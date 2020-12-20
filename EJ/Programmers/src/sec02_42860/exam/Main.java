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
	
	//A���� ���ϴ� ���, Z ���� ���� ��� �� �ּڰ� ���ϱ�
	for(int i = 0; i<name.length(); i++) {
		if(name.charAt(i) != 'A') {
			int up = name.charAt(i) - 'A';
			int down = 1 + 'Z' - name.charAt(i);
			answer += (up < down)? up : down;
		}
	}
	//�ּ� �̵�Ƚ��(���� A�� ���ĺ��� �ִٸ�, �ݴ������� �̵�)
	int minMove = name.length() - 1;//���� A�� �ƴҶ� �ּ��̵�

	for(int i = 0; i<name.length(); i++) {
		if(name.charAt(i) != 'A') {
			int next = i + 1;
			while(next <name.length() && name.charAt(next) == 'A') {
				next++; 
			}
			// �̹� �̵��� Ƚ�� * 2 + (��ü���� - �Ȱ��� �Ǵ� ����) 
			int move = 2 * i + name.length() - next;
			minMove = Math.min(move,  minMove);
		}
	}
	return answer + minMove;
	}
}