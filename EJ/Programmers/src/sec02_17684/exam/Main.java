 package sec02_17684.exam;

import java.util.*;
import org.omg.CosNaming.NamingContextPackage.NotEmpty;

class Main{
	public static void main(String[] args) {
		
		String msg = "KAKAO";
		System.out.print(solution(msg));
		
		}
	public static ArrayList<Integer> solution(String msg) {
        int ind = 1;
        int size = msg.length();
        ArrayList<Integer> ans = new ArrayList<Integer>();
        HashMap<String, Integer> hs = new HashMap<String, Integer>();

        //1. A~Z까지 hashmap에 저장
        for(char i = 'A'; i <= 'Z'; i++) {
        	hs.put(i +"", ind++);
        }
     
        
        
        for(int i = 0; i<size; i++) {
        	int a = 1;
        	//1. 문자열이 hash에 저장되어있는지 확인
        	while(i+a <= size && hs.containsKey(msg.substring(i,i+a))) {
        		a++;
        	}
        	
        	//3.  마지막글자에 해당하는 index번호를 출력
        	if(i + a > size) {
        		ans.add(hs.get(msg.substring(i)));
        		break;
        	}
        	// 2. 겹치는 값이 안나왔을 경우, 그 전 문자열까지 ans에 저장하고, 
        	ans.add(hs.get(msg.substring(i,i+a-1)));
        	// 새로운 문자열은 hash에 저장
        	hs.put(msg.substring(i,i+a), ind++);
        	// 시작위치 재 설정
        	if(a>1) i+=a-2;
        	
        	}
        return ans;
	}
}