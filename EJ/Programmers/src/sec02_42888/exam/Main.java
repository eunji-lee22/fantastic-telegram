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
			//공백으로 구분해서, 각각 명령어 ID 닉네임 Tokenizer 처리
			StringTokenizer st = new StringTokenizer(log);
			String command = st.nextToken();
			String userId = st.nextToken();
			String nickname = "";
			
			//Leave가 아니면 nickname get
			if(!command.equals("Leave")) {
				nickname = st.nextToken();
			}
			
			switch(command) {
			case "Enter" :
				//입장 시 ID와 Nickname 함께 저장
				//chat 로그 저장
				nickMap.put(userId, nickname);
				chatLog.add(userId + "님이 들어왔습니다.");
				break;
			case "Leave":
				//퇴장 시 chat 로그만 저장
				chatLog.add(userId + "님이 나갔습니다.");
				break;
			case "Change":
				//변경 시 ID와 Nickname 함께 저장
				nickMap.put(userId, nickname);
				break;
			}
		}
		String[] answer = new String[chatLog.size()];
		int logIdx = 0;
		//HashMap을 이용해서 ID -> Nickname로 변경
		for(String str : chatLog) {
			int endOfId = str.indexOf("님");
			String userId = str.substring(0,endOfId);
			
			answer[logIdx++] = str.replace(userId,  nickMap.get(userId));
		}
		return answer;
	}
}