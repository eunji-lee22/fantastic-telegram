package sec07_1157.exam;
import java.io.*;
import java.util.*;

public class Main {
public static void main(String[] args) throws Exception {
	Scanner sc = new Scanner(System.in);
	
	String Str = sc.next();	 //문자열입력
	int abc[] = new int [26]; //알파벳 배열
	int sort_abc[] = new int [26]; 	//알파벳 배열 정렬 
	int max = 0;							// 최빈 문자열
	int max_num = 0;							// 최빈 문자열
	
	//2. 대문자 변환
	Str = Str.toUpperCase();
	
	//3. 알파벳 길이만큼 for 문 실행 후, 각 알파벳 갯수 count 후 배열에 저장
	for(int j = 0; j<Str.length();j++) {
		for(int i = 0; i<abc.length;i++) {
			if((int)Str.charAt(j) == 65 + i) {
				abc[i] = abc[i] + 1;
				break;
			}
		}
	}
	
	//4. 최대값 찾기 및 해당 위치의 알파벳 값 리턴
	for(int i = 0; i < abc.length; i++) {
		if(abc[i]>max) {
			max = abc[i];
			max_num = i;
		}
	}

	 Arrays.sort(abc);
	 
	if(abc[abc.length-1]==abc[abc.length-2]) {
		System.out.print("?");
	}else {
				System.out.print((char)(max_num+65));
			}
	}
	
}
