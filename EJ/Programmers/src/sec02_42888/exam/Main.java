 package sec02_42888.exam;

import java.util.*;


class Main{
	public static void main(String[] args) {
		String[] record = {"Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan"};
		System.out.print(solution(record));
		}
	public static String[] solution(String[] record) {
		ArrayList<String> chatLog = new ArrayList();
		HashMap<String, String> nickMap = new HashMap<>();
		
		for(String log : record) {
			//�������� �����ؼ�, ���� ��ɾ� ID �г��� Tokenizer ó��
			StringTokenizer st = new StringTokenizer(log);
			String command = st.nextToken();
			String userId = st.nextToken();
			String nickname = "";
			
			//Leave�� �ƴϸ� nickname get
			if(!command.equals("Leave")) {
				nickname = st.nextToken();
			}
			
			switch(command) {
			case "Enter" :
				//���� �� ID�� Nickname �Բ� ����
				//chat �α� ����
				nickMap.put(userId, nickname);
				chatLog.add(userId + "���� ���Խ��ϴ�.");
				break;
			case "Leave":
				//���� �� chat �α׸� ����
				chatLog.add(userId + "���� �������ϴ�.");
				break;
			case "Change":
				//���� �� ID�� Nickname �Բ� ����
				nickMap.put(userId, nickname);
				break;
			}
		}
		String[] answer = new String[chatLog.size()];
		int logIdx = 0;
		//HashMap�� �̿��ؼ� ID -> Nickname�� ����
		for(String str : chatLog) {
			int endOfId = str.indexOf("��");
			String userId = str.substring(0,endOfId);
			
			answer[logIdx++] = str.replace(userId,  nickMap.get(userId));
		}
		return answer;
	}
}