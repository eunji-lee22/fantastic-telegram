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

        //1. A~Z���� hashmap�� ����
        for(char i = 'A'; i <= 'Z'; i++) {
        	hs.put(i +"", ind++);
        }
     
        
        
        for(int i = 0; i<size; i++) {
        	int a = 1;
        	//1. ���ڿ��� hash�� ����Ǿ��ִ��� Ȯ��
        	while(i+a <= size && hs.containsKey(msg.substring(i,i+a))) {
        		a++;
        	}
        	
        	//3.  ���������ڿ� �ش��ϴ� index��ȣ�� ���
        	if(i + a > size) {
        		ans.add(hs.get(msg.substring(i)));
        		break;
        	}
        	// 2. ��ġ�� ���� �ȳ����� ���, �� �� ���ڿ����� ans�� �����ϰ�, 
        	ans.add(hs.get(msg.substring(i,i+a-1)));
        	// ���ο� ���ڿ��� hash�� ����
        	hs.put(msg.substring(i,i+a), ind++);
        	// ������ġ �� ����
        	if(a>1) i+=a-2;
        	
        	}
        return ans;
	}
}