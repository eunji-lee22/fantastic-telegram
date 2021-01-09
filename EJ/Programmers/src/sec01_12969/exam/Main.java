package sec01_12969.exam;
import java.util.*;

class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        
        for(int i = 0; i<b; i++) {
        	for(int j = 0; j<a; j++) {
        		System.out.print("*");
        	}
        	System.out.println("");
        }
    }
}

// 점수 : 1점

//테스트 1 〉	통과 (225.93ms, 50.1MB)
//테스트 2 〉	통과 (217.42ms, 48.5MB)
//테스트 3 〉	통과 (235.70ms, 49.2MB)
//테스트 4 〉	통과 (203.46ms, 48.8MB)
//테스트 5 〉	통과 (241.42ms, 49.3MB)
//테스트 6 〉	통과 (214.28ms, 48.9MB)
//테스트 7 〉	통과 (248.05ms, 49.1MB)
//테스트 8 〉	통과 (311.69ms, 49.8MB)
//테스트 9 〉	통과 (468.43ms, 54.6MB)
//테스트 10 〉	통과 (280.33ms, 50MB)
//테스트 11 〉	통과 (359.54ms, 51.1MB)