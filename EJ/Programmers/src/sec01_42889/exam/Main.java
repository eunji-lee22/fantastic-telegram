 package sec01_42889.exam;

import java.text.ParseException;
import java.util.Arrays;

class Main{
	public static void main(String[] args) throws ParseException {
		int N = 5;
		int[] stages = {1,2,2,1,3};
		
		System.out.print(solution(N, stages));
	}
    public static int[] solution(int N, int[] stages) {
    	int[] answer = new int[N];
    	double[] rate = new double[N]; 
    	
    	//1. 각 스테이지 별 실패율 계산
    	int people_all = stages.length;
    	
    	for(int i = 0; i<N ; i++) {
    		int people_st = 0;
    		for(int j = 0; j<stages.length; j++) {
    			if(stages[j] == i+1) people_st++;
    		}
    		if(people_st == 0) rate[i] = 0;
    		else {
    			rate[i] = (double)people_st/people_all;
    			people_all = people_all - people_st;
    		}
    	}
    	//2. 실패율의 내림차순 별 스테이지 정렬
    	double[] rate_cl = rate.clone();
    	Arrays.sort(rate);
    	for(int i = 0; i<N; i++) {
    		for(int j = 0; j<N; j++) {
    			if(rate[N-1-i] == rate_cl[j]) {
    				answer[i] = j+1;
    				rate_cl[j] = -1;
    				break;
    			}
    		}
    	}
        return answer;	
    }
}