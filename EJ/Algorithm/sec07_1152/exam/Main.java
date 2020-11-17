package sec07_1152.exam;
import java.io.*;
import java.util.*;

public class Main {
public static void main(String[] args) throws Exception {
	Scanner sc = new Scanner(System.in);

    String input = sc.nextLine().trim();
    sc.close();
     
    if (input.isEmpty()) {
        System.out.println(0);
    } else {
        System.out.println(input.split(" ").length);
    }
    
//	//1.문자열 입력
//	String Str = sc.nextLine(); 
//	int i = 0, j = 0;
//	int cnt = 0;
//	
//	//2. 첫번째 공백 위치 찾기
//	for(i = 0; i<Str.length(); i++) {
//		if(Str.charAt(i) != 32) break;	
//	}
//	//3. 첫번째 공백 뒤 부터 마지막 공백까지 공백의 갯수 세기
//	for(j = i; j<Str.length()-1;j++) {
//		if(Str.charAt(j) == 32) cnt++;
//	}
//	//4. 공백 갯수 + 1 = 단어수 출력
//	System.out.println(cnt+1);
	
}
}
