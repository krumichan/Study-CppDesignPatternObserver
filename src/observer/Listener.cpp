#include "Listener.h"
#include <iostream>

using namespace std;

/**
 * コンストラクタ
 */
Listener::Listener() : AbstractObserver()
{
	this->mName = "(default)";
}

/**
 * コンストラクタ
 */
Listener::Listener(std::string _name) : AbstractObserver()
{
	this->mName = _name;
}

/**
 * 受信関数
 * @param 実行コマンド
 */
void Listener::Update(std::string _command)
{
	if (_command.compare("command1") == 0)
	{
		this->Command1();
	}
	else if (_command.compare("command2") == 0)
	{
		this->Command2();
	}
}

/**
 * 実行内容
 */
void Listener::Command1()
{
	cout << this->mName << " : command 1 実行" << endl;
}

/**
 * 実行内容
 */
void Listener::Command2()
{
	cout << this->mName << " : command 2 実行" << endl;
}
