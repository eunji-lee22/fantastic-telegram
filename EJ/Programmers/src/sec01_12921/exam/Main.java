package sec01_12921.exam;
import java.util.*;
import java.io.*;

class Main{
	public static void main(String[] args) {
	int n = 13;
	System.out.print(solution(n));
	}
	public static int solution(int n) {
    	int answer = 0;
        int i = 0; 
        int[]arr = new int [n+1];
        double root = Math.sqrt(n);
        int cnt = n;
        
        //입력받은 수를 배열에 초기화
        for(i = 2; i<=n ; i++) arr[i] = i;
       
    	for(i = 2; i<=root ; i++){
    		// 이미 체크된 배수는 확인 안함
    		if(arr[i] == 0 ) continue; 
    		//i를 제외한 i의 배수들은 0으로 체크
    		for(int j = i + i; j <= n ; j+=i ) { 
    			arr[j] = 0; 
    			cnt--;
    		}
    	}
    	//0이 아닌 수 count;
    	for(i = 2; i<= n ; i++) {
    		if(arr[i] != 0) answer++;
    	}
    	
    	return answer;
    }
}