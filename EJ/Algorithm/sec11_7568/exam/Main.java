package sec11_7568.exam;
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int N = sc.nextInt(); //��ü ��� �� 
        int [][] arr = new int [N][2]; //������, Ű
        int rank[] = new int[N]; //���
        
        for(int i = 0; i< N ; i++) {
        	rank[i] = 1;
        	arr[i][0] = sc.nextInt(); //������
        	arr[i][1] = sc.nextInt(); //Ű
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
