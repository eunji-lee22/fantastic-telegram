 package sec02_17677.exam;

import java.util.*;

class Main{
	public static void main(String[] args) {
		String str1 ="E=M*C^2";
		String str2 ="e=m*c^2";
		
		System.out.print(solution(str1, str2));
		}
	public static int solution(String str1, String str2) {
        int i =0;
        int length1 = str1.length();
        int length2 = str2.length();
        double jak = 0;
        ArrayList<String> AL1 = new ArrayList<>();
        ArrayList<String> AL2 = new ArrayList<>();
        ArrayList<String> AL_com= new ArrayList<>();
        ArrayList<String> AL_all = new ArrayList<>();
        
        //소문자로 변환
        str1 = str1.toLowerCase();
        str2 = str2.toLowerCase();
        
        for(i = 0; i < length1-1; i++) {
        	if((str1.charAt(i) >= 'a' && str1.charAt(i)  <= 'z') &&
        	   (str1.charAt(i+1) >= 'a' && str1.charAt(i+1)  <= 'z')){
        		AL1.add(str1.charAt(i) +""+ str1.charAt(i+1));
        	}
        }        
        for(i = 0; i < length2-1; i++) {
        	if((str2.charAt(i) >= 'a' && str2.charAt(i)  <= 'z') &&
        	   (str2.charAt(i+1) >= 'a' && str2.charAt(i+1)  <= 'z')){
        		AL2.add(str2.charAt(i) +""+ str2.charAt(i+1));
        	}
        }
        
        Collections.sort(AL1);
        Collections.sort(AL2);
        
        
        for(String s : AL1) {
        	if(AL2.remove(s)) AL_com.add(s);
        	AL_all.add(s);
        }
        for(String s : AL2) AL_all.add(s);
        
        
        if(AL_com.size() == 0&&AL_all.size()==0) jak = 1;
        else jak = ((double)AL_com.size() / (double)AL_all.size());
        
        return (int) jak*65536;
	}
}