package sec01_2588.exam;

import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int A, B;
        
        A = sc.nextInt(); //입력값1 (472)
        B = sc.nextInt(); //입력값2 (385)
        
        String BB = Integer.toString(B); //문자로 변환
        
        int trem = 0;
        
        trem = BB.charAt(2)-48; //1의 자리수
        System.out.println(A*trem);
        
        trem = BB.charAt(1)-48; //10의 자리수
        System.out.println(A*trem);
        
        trem = BB.charAt(0)-48; //100의 자리수
        System.out.println(A*trem);
        
        System.out.println(A*B);
        
        sc.close();
    }
}