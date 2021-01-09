 package sec01_67256.exam;

import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Arrays;

class Main{
	public static void main(String[] args) {
		int[] numbers  = {1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5};
		String hand = "right";
	
	System.out.print(solution(numbers, hand));
	}
	public static String solution(int[] numbers, String hand) {
		StringBuilder sb = new StringBuilder();
		int leftIndex = 10;
		int rightIndex = 12;
		
		for(int number:numbers) {
			//왼손
			if(number == 1|| number == 4 || number == 7) {
				sb.append("L");
				leftIndex = number;
			//오른손
			}else if(number == 3 || number == 6 || number == 9) {
				sb.append("R");
				rightIndex = number;
				
			//이동 거리 판별
			}else {
				int left_distance = get_distance(leftIndex, number);
				int right_distance = get_distance(rightIndex, number);
				
				if(left_distance>right_distance) {
					sb.append("R");
					rightIndex = number;
				}else if(left_distance < right_distance) {
					sb.append("L");
					leftIndex = number;
				}else {
					if(hand.equals("right")) {
						sb.append("R");
						rightIndex = number;
					}else {
						sb.append("L");
						leftIndex = number;
					}
				}
			}
		}
		return sb.toString();
	}
	public static int get_distance(int index, int number) {
		
		// 숫자 0의 경우 11로 치환
		index = (index == 0) ? 11 : index;	
		number = (number == 0) ? 11 : number;

		int x = (index - 1) / 3;
		int y = (index - 1) % 3;
		int numberX = number / 3;
		int numberY = 1;
		
		return Math.abs(x-numberX) + Math.abs(y-numberY);
	}
}