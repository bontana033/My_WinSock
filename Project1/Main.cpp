#include <WinSock2.h>

int main(int argc, char* argv[]) {
	WSADATA wsa;
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
		return -1;
	MessageBox(NULL, "윈속 초기화 성공", "성공", MB_OK);

	WSACleanup();
	return 0;
}