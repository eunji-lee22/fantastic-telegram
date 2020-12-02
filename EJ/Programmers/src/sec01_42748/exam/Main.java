package sec01_42748.exam;
import java.util.*;
import java.io.*;

class Main{
	public static void main(String[] args) {
	int n = 6;
	int[] lost = {4,5};
	int[] reserve = {5,6};
	
	System.out.print(solution(n, lost, reserve));
	}
    public static int solution(int n, int[] lost, int[] reserve) {
        
    	int cnt = 0, i = 0, j = 0;
        boolean[] res = new boolean [n];
        
        Arrays.fill(res, true);
        Arrays.sort(lost);
        Arrays.sort(reserve);
        
        // 잃어버린 사람 false 처리
        for(i = 0; i<lost.length; i++) {
        	res[lost[i]-1] = false;
        }
        
        //잃어버린 사람 중 여분 가지고 있는 사람있는지 확인
    	for( i = 0; i< lost.length; i++) {
    			for(j = 0 ; j<reserve.length; j++){
    				if(lost[i] == reserve[j]) {
    					res[lost[i]-1] = true;
    					lost[i] = 9999;
    					reserve[j] = 8888;
    				}
    			}
    	}
    	
    	for(i = 0; i< lost.length; i++) {
    		for(j = 0 ; j < reserve.length; j++) {
    			if(lost[i]-1 == reserve[j]) {
    				res[lost[i]-1] = true;
    				lost[i] = 9999;
    				reserve[j] = 8888;
    				break;
    			}else if(lost[i] + 1 == reserve[j]) {
    				res[lost[i]-1] = true;
    				lost[i] = 9999;
    				reserve[j] = 8888;
    				break;
    			}
    		}
    	}
    	
    	for(i = 0; i<res.length; i++) {
    		if(res[i] == true) cnt++;
    	}
    	return cnt;
    }
}