package sec11_7568.exam;
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int N = sc.nextInt(); //전체 사람 수 
        int [][] arr = new int [N][2]; //몸무게, 키
        int rank[] = new int[N]; //등수
        
        for(int i = 0; i< N ; i++) {
        	rank[i] = 1;
        	arr[i][0] = sc.nextInt(); //몸무게
        	arr[i][1] = sc.nextInt(); //키
        }
        
        for(int j = 0; j < N ; j++) {
        	for(int k = 0 ; k < N; k++) {
        		if((arr[j][0] > arr[k][0]) && (arr[j][1] > arr[k][1])) {
        			rank[k]++;
        		}
        	}
        }
        for(int i = 0; i< N ; i++) {
        	System.out.print(rank[i] + " ");
        }
    }
}
