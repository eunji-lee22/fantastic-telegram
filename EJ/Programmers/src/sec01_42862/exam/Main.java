 package sec01_42862.exam;

import java.sql.Date;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;

class Main{
	public static void main(String[] args) throws ParseException {
	int a = 5;
	int b = 24;
	
	System.out.print(solution(a, b));
	}
    public static String solution(int a, int b) throws ParseException {
    	String MM = null, DD = null;
    	
    	if(a < 10) MM = "0" + Integer.toString(a);
    	else MM = Integer.toString(a);
    	if(b < 10) DD = "0" + Integer.toString(b);
    	else DD = Integer.toString(b);
    	
    	
    	String day = "2016" + MM + DD;
    	
    	SimpleDateFormat formatter = new SimpleDateFormat("yyyyMMdd");    	
    	java.util.Date date = formatter.parse(day);
    	Calendar cal = Calendar.getInstance();
    	cal.setTime(date);
    	int dayOfWeek = cal.get(Calendar.DAY_OF_WEEK);
    	String EngDayOfWeek = "";
    	

    	switch(dayOfWeek) {
    	case 1:
    		EngDayOfWeek = "SUN";
    		break;
    	case 2:
    		EngDayOfWeek = "MON";
    		break;
    	case 3:
    		EngDayOfWeek = "TUE";
    		break;
    	case 4:
    		EngDayOfWeek = "WED";
    		break;
    	case 5:
    		EngDayOfWeek = "THU";
    		break;
    	case 6:
    		EngDayOfWeek = "FRI";
    		break;
    	case 7:
    		EngDayOfWeek = "SAT";
    		break;
    	}
    	return EngDayOfWeek;
    }
}