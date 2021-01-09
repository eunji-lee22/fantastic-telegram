package sec01_12944.exam;
import java.util.*;
import java.io.*;
import java.lang.reflect.Array;

class Main{
	public static void main(String[] args) {
	int[] arr = {1, 2, 3, 4};
	System.out.print(solution(arr));
	}
	public static double solution(int[] arr) {
		double answer = 0;
		int sum = 0; 
		for(int i = 0; i<arr.length; i++) {
			answer = answer + arr[i];
		}
		return answer / arr.length;
	}
}