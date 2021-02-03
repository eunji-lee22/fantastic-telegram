 package sec02_17683.exam;

import java.util.*;
import org.omg.CosNaming.NamingContextPackage.NotEmpty;

class Main{
	public static void main(String[] args) {
		
		String m = "ABCDEFG";
		String[] musicinfos = {"12:00,12:14,HELLO,CDEFGAB", "13:00,13:05,WORLD,ABCDEF"};
		System.out.print(solution(m,musicinfos));
		
		}
	public static String solution(String m, String[] musicinfos) {
		String answer = "(None)";
		
		//1. ���� ��� �Ǿ��� �Ǻ��� A#,C#,D# ���� �ҹ��ڷ� ����
		StringBuilder sb1 = new StringBuilder();
		m = parsing(sb1, m);
		
		List<Music> list = new ArrayList<>();
		for(int i = 0; i<musicinfos.length; i++) {
			String[] str = musicinfos[i].split(",");
			String[] a = str[0].split(":");
			String[] b = str[1].split(":");
			
		//2. �ð��� �ֱ� ���� 1�ð� �ʰ����η� ������ �� ����
			int time = 0;
			if(Integer.parseInt(b[0]) - Integer.parseInt(a[0]) == 0) {
				time = Integer.parseInt(b[1]) - Integer.parseInt(a[1]);
			}else {
				time = (Integer.parseInt(b[0]) - Integer.parseInt(a[0])) * 60 + Integer.parseInt(b[1]) 
				- Integer.parseInt(a[1]);
			}
			//3. # �� �κ� ����
			StringBuilder sb = new StringBuilder();
			String aa = parsing(sb, str[3]);
			
			//4. ����� �ð� ��ŭ �ݺ��ؼ� ����
			sb = new StringBuilder();
			int idx = 0;
			for(int j = 0; j<time; j++) {
				sb.append(aa.charAt(idx));
				idx++;
				if(idx >= aa.length()) {
					idx = 0;
				}
			}
			list.add(new Music(time, str[2], sb.toString()));
		}
		int cnt = 0; 
		List<Music> mu = new ArrayList<>();
		for(int i = 0; i<list.size(); i++) {
			if(list.get(i).music.contains(sb1.toString())) {
				cnt++;
				answer = list.get(i).title;
				mu.add(list.get(i));
			}
		}
		if(cnt >=2) {
			//5. ����� �ð��� �� �� ���, �ð� ���� ���, ���� �Էµ� ���� ����
			int max = mu.get(0).minute;
			answer = mu.get(0).title;
			for(int i = 1; i<mu.size(); i++) {
				if(max<mu.get(i).minute) {
					max = mu.get(i).minute;
					answer = mu.get(i).title;
				}
			}
		}
		return answer;
	}
	static String parsing(StringBuilder sb, String str) {
		for(int i = 0; i<str.length(); i++) {
			char temp = str.charAt(i);
			if(temp == 'A' || temp == 'C'|| temp == 'D'|| temp == 'F'|| temp == 'G') {
				if(i<str.length()-1) {
					if(str.charAt(i+1) == '#') {
						switch(temp) {
						case 'A': sb.append("a"); break;
						case 'C': sb.append("c"); break;
						case 'D': sb.append("d"); break;
						case 'F': sb.append("f"); break;
						case 'G': sb.append("g"); break;
						}
						i++;
					}else {
						sb.append(temp);
					}
				} else {
					sb.append(temp);
				}
			} else {
				sb.append(temp);
			}
		}
		return sb.toString();
	}
	static class Music {
		int minute;
		String title;
		String music;
		
		public Music(int minute, String title, String music) {
			super();
			this.minute = minute;
			this.title = title;
			this.music = music;
		}
		public String toString() {
			return "Music [minute=" + minute + ", title=" + title + ", music=" + music + "]";
		}
	}
}