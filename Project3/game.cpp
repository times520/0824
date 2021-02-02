#include "��ͷ.h"
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

void PlayerMove(char board[ROW][COL], int row, int col)//�������
{
	int i = 0;
	int j = 0;
	
	
	//�жϺϷ���
	while (1)//�������Ϊ�˷��㷢���������ѭ��
	{
		printf("�������\n");
		scanf("%d%d", &i, &j);
		if (i <= row && i >= 1 && j <= col && j >= 1)
		{
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				break;//û�д����������õ�����
			}
			else
			{
				printf("λ���ظ���������\n");
			}
		}
		else
		{
			printf("���뷶Χ����\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)//��������
{
	int x = 0;
	int y = 0;
	printf("��������\n");
	
	while (1)
	{
		x = rand() % row;
		y = rand() % col;

		if (board[x][y] == ' ')//����xyû��Ҫ��1����Ϊ������0��ʼ�Ҳ����ڳ���
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)//�ж��Ƿ��пո�
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
	for (i = 0; i < row; i++)//�����ж�
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//��
		{
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++)//���зֿ�����ᷢ������
	{
		if (board[0][i] == board[0][i] && board[1][i] == board[2][i] && board[1][i] != ' ')//��
		{
			return board[1][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];//�Խ���1
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];//�Խ���2
	}
	//�ж�ƽ�ֻ��Ǽ���
	if (1 == IsFull(board, row, col))
	{
		return 'Q';
	}
	return 'C';
}
