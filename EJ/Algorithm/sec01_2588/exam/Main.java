package sec01_2588.exam;

import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int A, B;
        
        A = sc.nextInt(); //�Է°�1 (472)
        B = sc.nextInt(); //�Է°�2 (385)
        
        String BB = Integer.toString(B); //���ڷ� ��ȯ
        
        int trem = 0;
        
        trem = BB.charAt(2)-48; //1�� �ڸ���
        System.out.println(A*trem);
        
        trem = BB.charAt(1)-48; //10�� �ڸ���
        System.out.println(A*trem);
        
        trem = BB.charAt(0)-48; //100�� �ڸ���
        System.out.println(A*trem);
        
        System.out.println(A*B);
        
        sc.close();
    }
}