#pragma once
#include "define.h"

class Model
{
public:
	Model();
	~Model();

	void digMine(int x, int y);
	void markMine(int x, int y);
	void startGame(int mRol, int mCol, GameLevel level, int mineNum);
	void restartGame();
	void checkGame();
private:
	std::vector<std::vector<MineBox>> gameMap;	//游戏地图
	int row_model;	//逻辑行
	int col_model;	//逻辑列
	
	int mine_sum;	//雷总数
	int curMineSum;	//当前剩余雷的数量
	
	int timeSeconds;//时间

	Gamestate gState;//状态
	GameLevel gLevel;//难度等级
};

Model::Model()
{
}

Model::~Model()
{
}