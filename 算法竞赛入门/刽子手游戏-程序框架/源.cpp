#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define maxn 110
int left,win, lose,chance;//chance:剩下的机会,left:还需要猜测的位置
char comper_Output[maxn], player_Input[maxn];
void guess(char ch)
{
	int bad = 1;
	for (int i = 0; i < strlen(comper_Output); i++)
	{
		if (comper_Output[i] == ch)
		{
			left--;
			comper_Output[i] = ' ';
			//bad = 0;
		}
	}
	if (bad)
	{
		--chance;
	}
	if (chance==0)
	{
		lose = 1;
	}
	if (left==0)
	{
		win = 1;
	}
}

int main()
{
	int rnd;//第几回合数
	while (scanf_s("%d%s", &rnd, comper_Output,110) == 2 && rnd != -1)
	{
		printf("第%d轮:\n", rnd);
		win = lose = 0;
		left = strlen(comper_Output);
		chance = 7;
		scanf_s("%s", player_Input,110);
		for (int i = 0; i < strlen(player_Input); i++)
		{
			guess(player_Input[i]);
			//printf("%s%d%d", comper_Output, left, chance);
			if (win || lose)
			{
				break;
			}
		}
		if (win)
		{
			printf("you are winner");
		}
		if (lose)
		{
			printf("I am sorry you lost");
		}
	}
	return 0;
}