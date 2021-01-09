 package sec02_42578.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		String[][] clothes = {{"yellow_hat", "headgear"}, {"blue_sunglasses", "eyewear"}, {"green_turban", "headgear"}, {"blue_turban", "headgear"}};
		System.out.print(solution(clothes));
		}
	public static int solution(String[][] clothes) {
		int answer = 1; 
		//key value ����
		
		HashMap<String, Integer> clothesMap = new HashMap<>();
		
		for(int i = 0 ; i<clothes.length; i++){
			clothesMap.put(clothes[i][1], clothesMap.getOrDefault(clothes[i][1],  0)+1);
		}
		
		Set<String> keySet = clothesMap.keySet();
		
		for(String key : keySet) {
			answer *= clothesMap.get(key)+1;
		}
		return answer -1; // �ƹ��͵� �������� �ʴ� ����� �� ����
	}
}