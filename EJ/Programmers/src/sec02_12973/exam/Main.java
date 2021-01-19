 package sec02_12973.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		String s = "baabaa";
		System.out.print(solution(s));
	}
	public static int solution(String s)
    {
		char[] input = s.toCharArray();
		Stack<Character> stack = new Stack<Character>();
		for (int i = 0; i < input.length ; i++) {
			if(!stack.empty() && stack.peek() == input[i] ) {
				stack.pop();
			}else {
				stack.push(input[i]);
			}
		}
		if(stack.empty()) {
			return 1;
		}else {
			return 0;
		}
    }
}