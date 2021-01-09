 package sec01_17681.exam;

import java.lang.reflect.Array;
import java.sql.Date;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Arrays;

class Main{
	public static void main(String[] args) {
		int n = 6;
		int[] arr1 = {46,33,33,22,31,50}; 
		int[] arr2 = {27,56,19,14,14,10};
		
		System.out.print(solution(n, arr1, arr2));
	}
	public static String[] solution(int n, int[] arr1, int[] arr2) {
		String[] answer = new String[n];
		String[] ans1 = new String[n];
		String[] ans2 = new String[n];
		//1. �������� ��ȯ
		for(int i = 0; i<n; i++) {
			ans1[i] = Long.toString(Long.parseLong(Integer.toBinaryString(arr1[i])));
			ans2[i] = Long.toString(Long.parseLong(Integer.toBinaryString(arr2[i])));
			
			answer[i] = Long.parseLong(ans1[i]) + Long.parseLong(ans2[i]) + "";
		}
		//2.��ȯ �� ���
		for(int i = 0; i<n; i++) {
			while(answer[i].length() != n) 
				answer[i] = '0' + answer[i];
			
			answer[i] = answer[i].replace('0', ' ');
			answer[i] = answer[i].replace('1', '#');
			answer[i] = answer[i].replace('2', '#');
		}		
		return answer;		
	}
}
//���� : 1��
//(�׽�Ʈ ���̽� 2, 6�� ��Ÿ�� ���� : type�� Int -> Long���� ����)
