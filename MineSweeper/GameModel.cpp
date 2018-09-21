#include "GameModel.h"
void Model::digMine(int x, int y)
{

}

void Model::markMine(int x, int y)
{

}

void Model::startGame(int mRow, int mCol, GameLevel level, int mineNum)
{
	gameMap.clear();
	row_model = mRow;
	col_model = mCol;
	mine_sum = mineNum;
	curMineSum = mineNum;
	gState = PLAYING;
	gLevel = level;
	
	for (int i = 0; i < row_model; i++)
	{
		std::vector<MineBox> lineBox;
		for (int j = 0; j < col_model; j++)
		{
			MineBox box;
			box.curState = UN_DIG;
			box.mineNum = 0;
			lineBox.push_back(box);
		}
		gameMap.push_back(lineBox);
	}

	//布雷
	srand((unsigned int)time(0));

	int k = mineNum;
	int pRow;
	int pCol;

	while (k>0)
	{
		pRow = rand()%mRow;
		pCol = rand() % mCol;
		if (gameMap[pRow][pCol].mineNum!=-1)
		{
			gameMap[pRow][pCol].mineNum = -1;	//用-1表示雷
			k--;
		}
	}

	//算数字
	for (int i = 0; i < mRow; i++)
	{
		for (int j = 0; j < mCol; j++)
		{
			for (int y = -1; y <=1 ; y++)
			{
				for (int x = -1; x <=1; x++)
				{
					if (i+y>=0 && i+y<=mRow && j+x>=0 && j+x<=mCol && gameMap[i+y][x+j].mineNum==-1 && !(x==0 && y==0))
					{
						gameMap[i][j].mineNum++;
					}
				}
			}
		}
	}
}

void Model::restartGame()
{

}

void Model::checkGame()
{

}