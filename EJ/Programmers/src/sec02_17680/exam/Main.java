 package sec02_17680.exam;

import java.util.*;
import org.omg.CosNaming.NamingContextPackage.NotEmpty;

class Main{
	public static void main(String[] args) {
		
		int cacheSize = 3;
		String[] cities = {"Jeju", "Pangyo", "Seoul", "Jeju", "LA", "Jeju", "Pangyo", "Seoul", "NewYork", "LA"};
		System.out.print(solution(cacheSize, cities));
		
		}
	public static int solution(int cacheSize, String[] cities) {
		int answer = 0;
		ArrayList<String> list = new ArrayList<>();
		
		for(String city : cities) {
			String temp = city.toLowerCase();
			
			if(list.contains(temp)) {
				answer += 1;
				
				int idx = list.indexOf(temp);
				list.remove(idx);
				list.add(temp);
			}else {
				answer +=5;
				if(cacheSize > 0) {
					if(list.size() >= cacheSize)
						list.remove(0);
					list.add(temp);
				}
			}
		}
		
		return answer;
	}
}