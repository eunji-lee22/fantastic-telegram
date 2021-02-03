package sec01_72410.exam;
import java.util.*;
import java.io.*;
import java.lang.reflect.Array;

class Main{
	public static void main(String[] args) {
		
		String new_id = "...!@BaT#*..y.abcdefghijklm";
		System.out.print(solution(new_id));
	}
	public static String solution(String new_id) {
        String answer = "";
        int length = new_id.length();
        
//        1�ܰ� new_id�� ��� �빮�ڸ� �����Ǵ� �ҹ��ڷ� ġȯ�մϴ�.
        new_id = new_id.toLowerCase();
        
//        2�ܰ� new_id���� ���ĺ� �ҹ���, ����, ����(-), ����(_), ��ħǥ(.)�� ������ ��� ���ڸ� �����մϴ�.
        for(int i = 0; i<length; i++) {
        	if((new_id.charAt(i) - 0 >= 'a' && new_id.charAt(i)  - 0<= 'z' ) || new_id.charAt(i)  - 0  == '-' || new_id.charAt(i)  - 0 == '_' || new_id.charAt(i)  - 0 == '.' ) { 
        	}else
        		new_id = new_id.substring(0, i) + new_id.substring(i+1,new_id.length());
//        		new_id.replace(new_id.charAt(i), ' ');
        }
        new_id = new_id.replaceAll(" " ,  "");
        
//        3�ܰ� new_id���� ��ħǥ(.)�� 2�� �̻� ���ӵ� �κ��� �ϳ��� ��ħǥ(.)�� ġȯ�մϴ�.
        new_id = new_id.replaceAll("..",".");
        
//        4�ܰ� new_id���� ��ħǥ(.)�� ó���̳� ���� ��ġ�Ѵٸ� �����մϴ�.
        if(new_id.charAt(0) == '.') new_id.replaceFirst(".", "");
        if(new_id.charAt(new_id.length()-1) == '.')  new_id = new_id.substring(0, new_id.length()-2);
        	
//        5�ܰ� new_id�� �� ���ڿ��̶��, new_id�� "a"�� �����մϴ�.
        if(new_id.isEmpty()) {
        	new_id = "a";
        }
//        6�ܰ� new_id�� ���̰� 16�� �̻��̸�, new_id�� ù 15���� ���ڸ� ������ ������ ���ڵ��� ��� �����մϴ�.
//             ���� ���� �� ��ħǥ(.)�� new_id�� ���� ��ġ�Ѵٸ� ���� ��ġ�� ��ħǥ(.) ���ڸ� �����մϴ�.
        if(new_id.length() >= 16)  {
        	new_id = new_id.substring(0, 14);
        	if(new_id.charAt(14) == '.') new_id = new_id.substring(0,13);
        }
        
//			7�ܰ� new_id�� ���̰� 2�� ���϶��, new_id�� ������ ���ڸ� new_id�� ���̰� 3�� �� ������ �ݺ��ؼ� ���� ���Դϴ�.
        while(new_id.length() <=2 ) {
        	new_id = new_id + new_id.charAt(new_id.length()-1);
        }
        
        return new_id;
        
	}
}