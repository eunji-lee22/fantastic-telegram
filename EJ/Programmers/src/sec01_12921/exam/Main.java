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
        
        //�Է¹��� ���� �迭�� �ʱ�ȭ
        for(i = 2; i<=n ; i++) arr[i] = i;
       
    	for(i = 2; i<=root ; i++){
    		// �̹� üũ�� ����� Ȯ�� ����
    		if(arr[i] == 0 ) continue; 
    		//i�� ������ i�� ������� 0���� üũ
    		for(int j = i + i; j <= n ; j+=i ) { 
    			arr[j] = 0; 
    			cnt--;
    		}
    	}
    	//0�� �ƴ� �� count;
    	for(i = 2; i<= n ; i++) {
    		if(arr[i] != 0) answer++;
    	}
    	
    	return answer;
    }
}