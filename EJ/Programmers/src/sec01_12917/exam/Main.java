package sec01_12917.exam;
import java.util.*;
import java.io.*;
import java.lang.reflect.Array;

class Main{
	public static void main(String[] args) {
	String s = "Zbcdefg";
	
	System.out.print(solution(s));
	}
	public static String solution(String s) {
		String[] arr = s.split("");
		Arrays.sort(arr);
		Collections.reverse(Arrays.asList(arr));
		return String.join("", arr);
    }
}