 package sec02_62048.exam;

import java.text.ParseException;
import java.util.ArrayList;
import java.util.Arrays;

import org.omg.CosNaming.NamingContextPackage.NotEmpty;

class Main{
	public void main(int w, int h) {
		w = 8;
		h = 12;
		
		System.out.print(solution(w, h));
		}
	public static long solution(int w, int h) {
		long answer = 1;
		long max, min;
        
		//최대값 판별
		if(w<h) {
			min = (long)w;
			max = (long)h;
		}else {
			min = (long)h;
			max = (long)w;
		}
		//최대공약수 계산
		long value = 1;
		while(value>0) {
			value = max % min;
			max = min;
			min = value;
		}
		
		answer = (long)w * (long)h - ((long)w + (long)h - max);
		return answer;
	}
}