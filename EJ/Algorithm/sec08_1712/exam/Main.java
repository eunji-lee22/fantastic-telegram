package sec08_1712.exam;
import java.io.*;
import java.util.*;

public class Main {
public static void main(String[] args) throws Exception {
	Scanner sc = new Scanner(System.in);
	
	int A = sc.nextInt(); //������ 1000 
	int B = sc.nextInt(); //������     70
	int C = sc.nextInt(); //�ǸŰ�   700

//	700 * x > 1000 + 70*x
//	(700-70)x > 1000
//	x > 1000 / (700-70)
	
	if ( C <= B) System.out.print("-1");
	else System.out.print((A/(C-B))+1);
}
}
