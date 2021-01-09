 package sec02_64065.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		
		String s = "{{2},{2,1},{2,1,3},{2,1,3,4}}";
		System.out.print(solution(s));
		
		}
	public static int[] solution(String s) {
//		},{를 -로 변환
		s = s.substring(2, s.length()-2).replace("},{", "-");
		String[] arr = s.split("-");
//		길이 오름차순으로 정렬
		Arrays.sort(arr, new Comparator<String>() {
			public int compare(String o1, String o2) {
				return o1.length() - o2.length();
			}
		});
//		길이에따라 정렬된 값을 가져와서, 정수형으로 바꾸고 리스트에 저장
		ArrayList<Integer> list = new ArrayList<>();
		for(String temp: arr) {
			String[] val = temp.split(",");
			
			for(int i = 0; i<val.length; i++) {
				int num = Integer.valueOf(val[i]);
				
				if(!list.contains(num)) {
					list.add(num);
				}
			}
		}
		
		int[] answer = new int[list.size()];
		for(int i = 0; i<list.size(); i++){
			answer[i] = list.get(i);
		}
		return answer;
	}
}