 package sec01_6406.exam;

import java.lang.reflect.Array;
import java.sql.Date;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Arrays;

class Main{
	public static void main(String[] args) throws ParseException {
	int[][] board = {{0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,1},{4,2,4,4,2},{3,5,1,3,1}};
	int[] moves = {1,5,3,5,1,2,1,4};
	
	System.out.print(solution(board, moves));
	}
    public static int solution(int[][] board, int[] moves) {
    	int i = 0;
    	int j = 0; 
    	int k = 0;
    	int cnt = 0;
    	ArrayList<Integer> aL = new ArrayList<Integer>();
    	
    	int[] arr = new int[moves.length];
    	
    	//배열 완성
    	for(i = 0; i< moves.length; i++) {
    		for(j = 0; j<board.length; j++) {
    			if(board[j][moves[i]-1] != 0) {
    				arr[i] = board[j][moves[i]-1];
    				aL.add(board[j][moves[i]-1]);
    				board[j][moves[i]-1] = 0;
    				break;
    				}
    			}
    		}
    	
    	//완성된 배열 내에서 터트릴 수 있는 인형 확인
    	for(i = aL.size()-1; i>0;  i--) {
    		if(aL.get(i) == aL.get(i-1)) {
    			aL.remove(i);
    			aL.remove(i-1);
    			cnt = cnt + 2;
    		}
    	}
//    	
//    	
//    	for(i = 1; i<arr.length; i++) {
//    		if(arr[i] == arr[i-1]) {
//    			arr[i] = 0; 
//    			arr[i-1]  = 0;
//    			cnt = cnt+2 ;
//    			for(j = 0 ; j<arr.length; j++) {
//    				if(arr[j] == 0) {
//    					for(k = j ; k<arr.length-1; k++) {
//    						arr[k] = arr[k+1];
//	    				}arr[arr.length-1] = 0;
//	    			}
//	    		}
//	    	}
//    	}
    	return cnt;
    	}
}