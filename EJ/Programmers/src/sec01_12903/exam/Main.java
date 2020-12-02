 package sec01_12903.exam;

import java.sql.Date;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;

class Main{
	public static void main(String[] args) throws ParseException {
	String a = "abcdef";
	System.out.print(solution(a));
	}
    public static String solution(String s) {
    	String ans = null;
    	
    	if (s.length() %2 == 1 ) {
    		ans = s.substring(s.length()/2, s.length()/2 + 1);
    	}
    	else{
    		ans = ans = s.substring(s.length()/2-1, s.length()/2 +1);
    	}

        return ans;
    }
}