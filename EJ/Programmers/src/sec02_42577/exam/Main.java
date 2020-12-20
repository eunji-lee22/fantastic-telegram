 package sec02_42577.exam;

import java.text.ParseException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;

import org.omg.CosNaming.NamingContextPackage.NotEmpty;

class Main{
	public static void main(String[] args) {
		
		String[] phone_book = {"119", "97674223", "1195524421"};
		System.out.print(solution(phone_book));
		
		}
	public static boolean solution(String[] phone_book) {
		boolean answer = true;
		HashMap<String, String> hashMap = new HashMap<String, String>();
		
		//중복제거하면서 맵에 저장됨
		for(int i = 0; i<phone_book.length; i++) {
			hashMap.put(phone_book[i], phone_book[i]);
		}
		for(String phone : phone_book) {
			for(int i = 0; i <phone.length(); i++) {
				//같은 key가 존재하는지 확인
				if(hashMap.containsKey(phone.substring(0, i))) {
					answer = false;
					break;
				}
			}
		}
		return answer;
	}
}