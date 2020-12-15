package sec01_12935.exam;
import java.util.*;

class Main{
	public static void main(String[] args) {
	int[] arr = {4,3,2,1};
	
	System.out.print(solution(arr));
	}
	public static int[] solution(int[] arr) {
		
		int[] answer = {-1};
		
		ArrayList<Integer> arrList = new ArrayList<>();
		int length = arr.length;
		
		if(length == 0 || length == 1) {
			return answer;
		}else {
			length = arr.length;
		}
		
		for(int i = 0; i<arr.length; i++) {
			arrList.add(arr[i]);
		}
		//ÃÖ¼Ò°ª
		int min = Collections.min(arrList);
		arrList.remove(arrList.indexOf(min));
		
		int[] ans = new int [arrList.size()];
		
		for(int i = 0; i<arrList.size(); i++){
			ans[i] = arrList.get(i);
		}
		return ans;
    }
}