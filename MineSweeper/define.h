#pragma once
#include "stdio.h"
#include "stdlib.h"
#include "iostream"
#include "vector"
#include <time.h>

//方格的状态
enum BoxState{
	UN_DIG,			//未挖开
	DIGGED,			//已挖开（安全）
	MARKED,			//已标记（玩家认为是雷）

	MINE,			//游戏结束后展示的雷
	WRONG_MAKRED,	//错误标记的雷 直接致死玩家的雷
};

struct MineBox
{
	BoxState curState;
	int mineNum;
};

enum Gamestate
{
	PLAYING,//游戏进行中
	LOSS,	//输
	WIN		//赢
};

enum GameLevel {
	EASY,	//简单
	COMMEN,	//普通
	HARD	//困难
};

//默认参数
const int initRow = 15;	//行
const int initCol = 10;	//列
const int initMineCount = 50;//雷数量
const int initTime = 0;//时间