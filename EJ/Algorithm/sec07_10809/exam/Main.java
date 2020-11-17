package sec07_10809.exam;
import java.io.*;
import java.util.*;

public class Main {
public static void main(String[] args) throws Exception {
	
	Scanner sc = new Scanner(System.in);
	String S = sc.next(); //nextLine(); -- 한 라인을 입력받음
	int arr[] = new int [26] ; // 알파벳 배열
	int cnt = 0; // 갯수 카운트
	
	for(int i = 0; i <arr.length; i++){
		arr[i] = -1;
	}
	// i = 0, arr[1] = 0;
	// i = 1, arr[0] = 1;
	for(int i = 0;i <S.length(); i++) {
		if (arr[((int)S.charAt(i)) - 97] == -1) {
			arr[((int)S.charAt(i)) - 97] = i;
		}; 
	}
	
	for (int j=0;j<arr.length;j++) {
		System.out.print(arr[j] + " ");
	}
}
}
