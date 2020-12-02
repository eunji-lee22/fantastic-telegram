package sec01_12901.exam;
import java.util.*;
import java.io.*;

class Main{
	public static void main(String[] args) {
	int[] array = {1,5,2,6,3,7,4};
	int[][] command = {{2,5,3},{4,4,1},{1,7,3}};
	
	System.out.print(solution(array, command));
	}
    public static int[] solution(int[] array, int[][] command) {
        int n = command.length;
        int res[] = new int [n];
        int arr[] = null;
        int start, end, len;
        
        for(int i = 0; i<n; i++){
        	//½ÃÀÛ
        	start = command[i][0];
        	end = command[i][1];
        	len = command[i][2];
        	arr = new int [end-start+1];
        	for(int j = start-1 ; j<end; j++) {
        		arr[j-start+1] = array[j];
        	}
        	Arrays.sort(arr);
        	res[i] = arr[len-1];
        }
        
    	return res;
    }
}