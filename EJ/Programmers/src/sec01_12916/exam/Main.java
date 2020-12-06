package sec01_12916.exam;
import java.util.*;
import java.io.*;

class Main{
	public static void main(String[] args) {
	int Answer[] = {1, 2, 3, 4, 5};
	int ans[] = {0,0,0};
	System.out.print(solution(Answer));
	}
    public static int[] solution(int[] answers) {
    	int[] supo1 = new int [answers.length];
    	int[] supo2 = new int [answers.length];
    	int[] supo3 = new int [answers.length];
    	int[] ans = {0,0,0};
    	
    	// 답안 생성
    	for(int i = 0; i<answers.length; i++) {
    		supo1[i] = (i%5) + 1;
    		switch (i%8) {
    			case 1 : supo2[i] = 1; break;
    			case 3 : supo2[i] = 3; break;
    			case 5 : supo2[i] = 4; break;
    			case 7 : supo2[i] = 5; break;
    			default : supo2[i] = 2; break;
    		}
    		switch (i%10) {
				case 0 : supo3[i] = 3; break;
				case 1 : supo3[i] = 3; break;
				case 2 : supo3[i] = 1; break;
				case 3 : supo3[i] = 1; break;
				case 4 : supo3[i] = 2; break;
				case 5 : supo3[i] = 2; break;
				case 6 : supo3[i] = 4; break;
				case 7 : supo3[i] = 4; break;
				case 8 : supo3[i] = 5; break;
				case 9 : supo3[i] = 5; break;
    		}
    	}
    	//점수계산
    	for(int i = 0 ; i<answers.length; i++) {
    		if(answers[i] == supo1[i]) ans[0] = ans[0] + 1;
    		if(answers[i] == supo2[i]) ans[1] = ans[1] + 1;
    		if(answers[i] == supo3[i]) ans[2] = ans[2] + 1;
    	}
    	
    	//최대 값 return 
    	int max = Math.max(Math.max(ans[0], ans[1]), ans[2]);
    	
    	ArrayList<Integer> list = new ArrayList<Integer>();
    	
    	if(max == ans[0]) list.add(1);
    	if(max == ans[1]) list.add(2);
    	if(max == ans[2]) list.add(3);
    	
    	int[] r_ans = { };
    	r_ans = new int[list.size()];
    	
    	for(int i = 0; i < r_ans.length; i++) {
    		r_ans[i] = list.get(i);
    	}
		return r_ans;
    }
}