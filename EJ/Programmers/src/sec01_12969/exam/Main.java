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

// ���� : 1��

//�׽�Ʈ 1 ��	��� (225.93ms, 50.1MB)
//�׽�Ʈ 2 ��	��� (217.42ms, 48.5MB)
//�׽�Ʈ 3 ��	��� (235.70ms, 49.2MB)
//�׽�Ʈ 4 ��	��� (203.46ms, 48.8MB)
//�׽�Ʈ 5 ��	��� (241.42ms, 49.3MB)
//�׽�Ʈ 6 ��	��� (214.28ms, 48.9MB)
//�׽�Ʈ 7 ��	��� (248.05ms, 49.1MB)
//�׽�Ʈ 8 ��	��� (311.69ms, 49.8MB)
//�׽�Ʈ 9 ��	��� (468.43ms, 54.6MB)
//�׽�Ʈ 10 ��	��� (280.33ms, 50MB)
//�׽�Ʈ 11 ��	��� (359.54ms, 51.1MB)