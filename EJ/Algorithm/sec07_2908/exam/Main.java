package sec07_2908.exam;
import java.io.*;
import java.util.*;

public class Main {
public static void main(String[] args) throws Exception {
	Scanner sc = new Scanner(System.in);
	String cmp = "";
	int N = 0;
	int cnt = 0;
	
	// 1. 문자열 입력 횟수 : N 입력
	N = sc.nextInt();
	String str = " ";
	
	//2. 문자열 입력 후 배열 저장
	for(int k = 0; k<N ; k++) {              
		cnt = cnt + 1;
		str = sc.next();
		int arr[] = new int [26];
		for(int j =0 ; j<str.length(); j++) {  
			arr[(int)str.charAt(j) - 97] += +1 ; //2 1 1 
		}
	//3. 배열 내 알파벳 카운트
		for(int n =0; n < arr.length; n++) {
			if (arr[n] == 1 || arr[n] == 0) {}
			else{
				cmp = "";
				for(int i = 0 ; i<arr[n]; i++) 
					cmp = cmp +(char)(97+n);
					if(str.indexOf(cmp) == -1) { // 존재하지 않으면  
						cnt = cnt -1;
						break;
					}
			}
		}
	}System.out.print(cnt);
	}
}

