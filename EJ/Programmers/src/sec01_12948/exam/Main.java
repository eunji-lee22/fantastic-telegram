package sec01_12948.exam;

class Main{
	public static void main(String[] args) {
	String phone_number = "01033334444";
	System.out.print(solution(phone_number));
	}
	public static String solution(String num) {
        String num_s = "";
        
        for(int i = 0; i<num.length()-4; i++) num_s = num_s + "*";
        String num_e = num.substring(num.length()-4, num.length());
        
        return num_s + num_e;
	}
}