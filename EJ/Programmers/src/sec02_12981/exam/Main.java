 package sec02_12981.exam;

import java.text.ParseException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import org.omg.CosNaming.NamingContextPackage.NotEmpty;

class Main{
	public static void main(String[] args) {
		int n = 3;
//		String[] words = {"eqwe", "eqw", "w", "mom", "ror"};
		String[] words = {"tank", "kick", "know", "wheel", "land", "dream", "mother", "robot", "tank"};
//		String[] words = {"hello", "one", "even", "never", "now", "world", "draw"};
		
		System.out.print(solution(n, words));
		}
	public static int[] solution(int n, String[] words) {
		//���� ���� Ż���ϴ� ��ȣ, ���° Ż������ return 
		int[] answer = new int[2];
		List<String> list = new ArrayList<String>();
		boolean flag = true;
		
		
		for(int i = 0; i<words.length; i++) {
			if(i > 0 && words[i-1].charAt(words[i-1].length()-1) != words[i].charAt(0) || list.contains(words[i])) {
				answer[0] = (i%n) + 1;
				answer[1] = (i/n) + 1;
				flag = false;
				break;
			}
			list.add(words[i]);
		}
		if(flag) return new int[] {0,0};
		return answer;
//		
//		
//		int[] answer = new int [2]; 
//		int cnt = 1;
//		boolean flag = true;
//		int i, j;
//		int length = words.length;
//
//		
//		for( i = 1; i<=length; i++) {
//			
//			// �޴ܾ��� ù�ڸ� == �մܾ��� ���ڸ� 
//			if(words[i].charAt(0) == words[i-1].charAt(words[i-1].length()-1)) {
//				
//				//�տ� ���� �ܾ�� �ߺ� ���� Ȯ��
//				for(j = 0; j<i; j++) {
//					if(words[i] == words[j]) {
//						flag = false;
//						break;
//					}
//				}
//				
//				if(flag == true) cnt++;
//				if(flag == false) break;
//				
//			//�����ձ� ����
//			}else {
//				flag = false;
//				break;
//			}
//		}
//		//������ ��쿡�� ��ȣ�� Ƚ�� ���
//		if(flag == false) {
//		answer[0] =  cnt %n + 1;
//		answer[1] = (cnt) /n + 1 ;
//		}
//        return flag;
//        
    }
}