 package sec02_49993.exam;

import java.text.ParseException;
import java.util.ArrayList;
import java.util.Arrays;

import org.omg.CosNaming.NamingContextPackage.NotEmpty;

class Main{
	public static void main(String[] args) {
		String[] skill_trees = {"BACDE", "CBADF", "AECB", "BDA"};
		String skill = "CBD";
		
		System.out.print(solution(skill, skill_trees));
		}
	public static int solution(String skill, String[] skill_trees) {
		
		int answer = 0; 
		String[] skill_set = skill_trees.clone(); //���纻 ����
		
		//�迭���� �ش��ϴ� ���ڿ� �ִ��� Ȯ�� ��, ��ġ ���������� ������ ����
		for(int i = 0; i<skill_trees.length; i++) {
			for(int j = 0; j<skill_trees[i].length(); j++) {
				if(!skill.contains(String.valueOf(skill_trees[i].charAt(j)))) {
					skill_set[i] = skill_set[i].replace(String.valueOf(skill_trees[i].charAt(j)), "");
				}
			}
		}
		//�ڸ�����ŭ ©�� ��ġ�ϴ��� Ȯ��
		for(int k = 0; k<skill_set.length; k++) {
			if(skill_set[k].equals(skill.substring(0,skill_set[k].length()))) 
				answer++;
		}
		return answer;
	}
}