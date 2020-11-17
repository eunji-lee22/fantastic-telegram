package sec08_1193.exam;
import java.io.*;
import java.util.*;

public class Main {
public static void main(String[] args) throws Exception {
	Scanner sc = new Scanner(System.in);
	
	int N = sc.nextInt(); // 입력받는 순번
	int Max = 0;
	int x = 0 , y = 0;
	int sum = 0, tmp = 0;
	
		for(int i = 1;;i++) {
			sum = Max- N;
			if(sum >= 0) {
				y =  sum +1 ;
				x =   i - y ;
				if (i%2 == 0) {
				tmp =x; x= y; y = tmp;
				}
				break;
			}
			Max = Max + i;
		}
		System.out.println(x + "/" + y);
	}
}
