package sec01_12910.exam;
import java.util.*;
import java.io.*;

class Main{
	public static void main(String[] args) {
	int[] array = {5,9,7,10};
	int divisor = 5;
	
	System.out.print(solution(array, divisor));
	}
    public static ArrayList<Integer> solution(int[] arr, int divisor) {
    	
    	ArrayList<Integer> aL = new ArrayList<Integer>();
    	
        for(int i = 0; i<arr.length; i++){
        	if(arr[i]%divisor == 0) {
        		aL.add(arr[i]);
        	}
        }
        aL.sort(null);
        
        if(aL.isEmpty()) {
        	aL.add(-1);
        }
    	return aL;
    }
}