package sec01_42576.exam;
import java.util.*;
import java.io.*;

class Main{
	public static void main(String[] args) {
	String Participant[] = {"leo", "kiki", "eden"};
	String Completion[] = {	"eden", "kiki"};
	
	System.out.print(solution(Participant, Completion));
	}
	public static String solution(String[] participant, String[] completion) {
        
        Collection<String> Part = new ArrayList(Arrays.asList(participant));
        Collection<String>Comp = new ArrayList(Arrays.asList(completion));
        
        List<String> targetList1 = new ArrayList<String>(Part);
        List<String> targetList2 = new ArrayList<String>(Comp);
        
        targetList1.removeAll(Comp);
        targetList2.removeAll(Part);
        
//        System.out.println(targetList2.toString());
        
        return targetList1.toString();
	}
}