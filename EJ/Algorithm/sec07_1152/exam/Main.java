package sec07_1152.exam;
import java.io.*;
import java.util.*;

public class Main {
public static void main(String[] args) throws Exception {
	Scanner sc = new Scanner(System.in);

    String input = sc.nextLine().trim();
    sc.close();
     
    if (input.isEmpty()) {
        System.out.println(0);
    } else {
        System.out.println(input.split(" ").length);
    }
    
//	//1.���ڿ� �Է�
//	String Str = sc.nextLine(); 
//	int i = 0, j = 0;
//	int cnt = 0;
//	
//	//2. ù��° ���� ��ġ ã��
//	for(i = 0; i<Str.length(); i++) {
//		if(Str.charAt(i) != 32) break;	
//	}
//	//3. ù��° ���� �� ���� ������ ������� ������ ���� ����
//	for(j = i; j<Str.length()-1;j++) {
//		if(Str.charAt(j) == 32) cnt++;
//	}
//	//4. ���� ���� + 1 = �ܾ�� ���
//	System.out.println(cnt+1);
	
}
}
