 package sec02_64065.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		
		String s = "{{2},{2,1},{2,1,3},{2,1,3,4}}";
		System.out.print(solution(s));
		
		}
	public static int[] solution(String s) {
//		},{�� -�� ��ȯ
		s = s.substring(2, s.length()-2).replace("},{", "-");
		String[] arr = s.split("-");
//		���� ������������ ����
		Arrays.sort(arr, new Comparator<String>() {
			public int compare(String o1, String o2) {
				return o1.length() - o2.length();
			}
		});
//		���̿����� ���ĵ� ���� �����ͼ�, ���������� �ٲٰ� ����Ʈ�� ����
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