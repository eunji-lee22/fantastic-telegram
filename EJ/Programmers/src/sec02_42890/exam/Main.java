 package sec02_42890.exam;


import java.util.*;

import org.omg.CosNaming.NamingContextPackage.NotEmpty;

class Main{

	
	public static void main(String[] args) {
		String [][] relation = {{"100","ryan","music","2"},{"200","apeach","math","2"},{"300","tube","computer","3"},
									{"400","con","computer","4"},{"500","muzi","music","3"},{"600","apeach","music","2"}};
		System.out.print(solution(relation));
	}
	static List<String> candidateKey = new ArrayList<String>();
	public static int solution(String[][] relation) {
        
        int[] flag = new int[relation[0].length];
        powerSet(relation,flag, 0);
        
        return candidateKey.size();
	}
	private static void powerSet(String[][] relation, int[] flag, int index) {
		if(index == flag.length) {
			String s = "";
			
			for(int i = 0; i< flag.length; i++) {
				if(flag[i] == 1) {
					s += String.valueOf(i);
				}
			}
			if(s.equals("") || s.equals(null)) return;
			
			//후보키가 될 수 없는 경우
			if(!candidateKey.isEmpty()) {
				for(int i = 0; i<candidateKey.size(); i++) {
					//후보키 꺼내서 비교
					String candiKey = candidateKey.get(i);
					boolean possible = false;
					for(char c: candiKey.toCharArray()) {
						if(!s.contains(String.valueOf(c))) {
							possible = true;
							break;
						}
					}
					if(!possible) return;
				}
			}
				
			Map<String, Integer> duplicateCheck = new HashMap<String, Integer>();
				
			String[] arrS = s.split("");
			for(int j = 0; j<relation.length;j++) {
				String s2 = "";
				for(int i = 0; i<arrS.length; i++) {
						s2 += relation[j][Integer.valueOf(arrS[i])];
					}
					if(duplicateCheck.get(s2) == null) duplicateCheck.put(s2, 1);
					else return;
				}
				candidateKey.add(s);
				
				return;
			}
			flag[index] = 0;
			powerSet(relation,flag, index+1);
			
			flag[index] = 1;
			powerSet(relation,flag, index+1);
			}
		}
}
        