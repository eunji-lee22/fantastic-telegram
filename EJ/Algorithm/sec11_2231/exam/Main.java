package sec11_2231.exam;
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt(); //입력받는 수 
        int ans = 0;
        for(int i=N; i>0; i--) {
            int sum = 0;
            String strN = String.valueOf(i);

            for(int j=0; j<strN.length(); j++){
                sum += strN.charAt(j)-48;
            }
            
            if(i + sum == N)
                ans = i;
        }
        if(ans == 0)
            System.out.println(0);
        else
            System.out.println(ans);
    }
}
