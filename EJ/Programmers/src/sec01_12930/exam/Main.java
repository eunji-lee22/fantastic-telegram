package sec01_12930.exam;
import java.util.*;
import java.io.*;
import java.lang.reflect.Array;

class Main{
	public static void main(String[] args) {
	String s = "try hello world";
	
	System.out.print(solution(s));
	}
	public static String solution(String s) {
		String ans = "";
		//���⸦ ��������  splitó��
		String[] strArr = s.split(" ",-1);
		
		StringBuffer sb = new StringBuffer();
		

		for(int i = 0; i<strArr.length; i++){
			char[] charArr = strArr[i].toCharArray();
			//�ܾ
			for(int j = 0; j < charArr.length; j++) {
				if(j%2 == 0)
					charArr[j] = Character.toUpperCase(charArr[j]);
				else
					charArr[j] = Character.toLowerCase(charArr[j]);
			}
			//�ٽ� ���� ó��
			if(i!=strArr.length-1)
				sb.append(new String(charArr) + " ");
			else
				sb.append(new String(charArr));
		}
		return sb.toString();
    }
}