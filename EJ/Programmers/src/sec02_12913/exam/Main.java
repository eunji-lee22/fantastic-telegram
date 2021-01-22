 package sec02_12913.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		int land[][] = {{1,2,3,5},{5,6,7,8},{4,3,2,1}};
		System.out.print(solution(land));
	}
	public static int solution(int[][] land) {
		int length = land.length;
		
		for(int i = 1; i<length; i++){
			land[i][0] += Math.max(land[i-1][1], Math.max(land[i-1][2], land[i-1][3]));
			land[i][1] += Math.max(land[i-1][0], Math.max(land[i-1][2], land[i-1][3]));
			land[i][2] += Math.max(land[i-1][0], Math.max(land[i-1][2], land[i-1][3]));
			land[i][3] += Math.max(land[i-1][0], Math.max(land[i-1][2], land[i-1][2]));

		}
        return Math.max(land[length-1][0], Math.max(land[length-1][1], 
        		Math.max(land[length-1][2], land[length-1][3])));
	}
}