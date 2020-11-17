package sec08_1011.exam;
import java.io.*;
import java.util.*;

public class Main {
public static void main(String[] args) throws Exception {
	Scanner sc = new Scanner(System.in);
	
	int N = sc.nextInt(); //¼³ÅÁ¾ç 
	int div = 0;
	int cnt = 0 ; //ºÀÅõ ¼ö 
	
	div = N/5;
	
	switch(N%5) {
	case 0:
		cnt = N/5;
		break;
	case 1:
		cnt = N/5 -1 + 2;
		if (div < 1 ) cnt = -1;
		break;
	case 2:
		cnt = N/5 -2 + 4;
		if (div < 2 ) cnt = -1;
		break;
	case 3:
		cnt = N/5 -0 +1;
		break;
	case 4:
		cnt = N/5 -1 + 3;
		if (div < 1 ) cnt = -1;
		break;
	}
	
	System.out.print(cnt);
}
}
