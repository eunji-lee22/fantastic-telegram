package sec07_1157.exam;
import java.io.*;
import java.util.*;

public class Main {
public static void main(String[] args) throws Exception {
	Scanner sc = new Scanner(System.in);
	
	String Str = sc.next();	 //���ڿ��Է�
	int abc[] = new int [26]; //���ĺ� �迭
	int sort_abc[] = new int [26]; 	//���ĺ� �迭 ���� 
	int max = 0;							// �ֺ� ���ڿ�
	int max_num = 0;							// �ֺ� ���ڿ�
	
	//2. �빮�� ��ȯ
	Str = Str.toUpperCase();
	
	//3. ���ĺ� ���̸�ŭ for �� ���� ��, �� ���ĺ� ���� count �� �迭�� ����
	for(int j = 0; j<Str.length();j++) {
		for(int i = 0; i<abc.length;i++) {
			if((int)Str.charAt(j) == 65 + i) {
				abc[i] = abc[i] + 1;
				break;
			}
		}
	}
	
	//4. �ִ밪 ã�� �� �ش� ��ġ�� ���ĺ� �� ����
	for(int i = 0; i < abc.length; i++) {
		if(abc[i]>max) {
			max = abc[i];
			max_num = i;
		}
	}

	 Arrays.sort(abc);
	 
	if(abc[abc.length-1]==abc[abc.length-2]) {
		System.out.print("?");
	}else {
				System.out.print((char)(max_num+65));
			}
	}
	
}
