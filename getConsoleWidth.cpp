#ifdef _WIN32
#include <windows.h>
#endif

#ifdef linux
#include <sys/ioctl.h>
#include <unistd.h>
#endif

int getConsoleWidth()
{
	int columns;

#ifdef _WIN32
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
#endif

#ifdef linux
	struct winsize w;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	columns = w.ws_col;
#endif

	return columns;
}