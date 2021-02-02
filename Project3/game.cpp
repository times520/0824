#include "标头.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int j = 0;
	int i = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < row - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)//玩家下棋
{
	int i = 0;
	int j = 0;
	
	
	//判断合法性
	while (1)//这个存在为了方便发生错误进行循环
	{
		printf("玩家输入\n");
		scanf("%d%d", &i, &j);
		if (i <= row && i >= 1 && j <= col && j >= 1)
		{
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				break;//没有错误跳出，让电脑下
			}
			else
			{
				printf("位置重复，请重下\n");
			}
		}
		else
		{
			printf("输入范围有误\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)//电脑下棋
{
	int x = 0;
	int y = 0;
	printf("电脑输入\n");
	
	while (1)
	{
		x = rand() % row;
		y = rand() % col;

		if (board[x][y] == ' ')//这里xy没必要减1，因为余数从0开始且不等于除数
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)//判断是否还有空格
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//各自判断
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//行
		{
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++)//行列分开否则会发生错误
	{
		if (board[0][i] == board[0][i] && board[1][i] == board[2][i] && board[1][i] != ' ')//列
		{
			return board[1][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];//对角线1
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];//对角线2
	}
	//判断平局还是继续
	if (1 == IsFull(board, row, col))
	{
		return 'Q';
	}
	return 'C';
}
