package sec01_60058.exam;
	import java.util.*;
	import java.io.*;
	
	class Main{
	    int pos = 0;
	    boolean isCorrect(String str){
	        boolean ret = true;
	        int left = 0, right = 0;
	        
	        Stack<Character> mystack = new Stack<Character>();
	        
	        for(int i = 0; i<str.length(); ++i){
	            if(str.charAt(i) == '('){
	                left++;
	                mystack.push('(');
	            }else {
	                right++;
	                if(mystack.empty())
	                    ret = false;
	                else
	                    mystack.pop();
	            }
	            if(left == right){
	               pos = i + 1;
	                return ret;
	            }
	        }
	        return true;
	    }
	    public String solution(String p) {
	        if(p.isEmpty()) return p;
	        
	        boolean correct = isCorrect(p);
	        String u = p.substring(0,pos);
	        String v = p.substring(pos,p.length());
	        
	        if(correct){
	            return u + solution(v);
	        }
	        
	        String answer = "(" + solution(v) + ")";
	        for(int i = 1; i<u.length()-1; ++i){
	            if(u.charAt(i) == '(')
	                answer += ")";
	            else
	                answer += "(";
	        }
			return answer;
	    }
	}