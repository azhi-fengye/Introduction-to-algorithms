#include<stdio.h>
#include<Windows.h>
#define RONGQI "≤‚ ‘"
int main()
{
	int cishu = 5;
	char rongqi[100] = { 0 };
	scanf_s("%s", rongqi, 99);
	HWND windowscs = FindWindow(NULL, rongqi);
	while (cishu)
	{
		SendMessage(windowscs, WM_PASTE, 0, 0);
		SendMessage(windowscs, WM_KEYDOWN, VK_RETURN, 0);
		cishu--;
	}
	return 0;
}