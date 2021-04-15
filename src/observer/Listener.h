#pragma once

#include "../template/AbstractObserver.h"

class Listener : public AbstractObserver
{
public:
	/**
	 * コンストラクタ
	 */
	Listener();

	/**
	 * コンストラクタ
	 */
	Listener(std::string);

public:
	/**
	 * 受信関数
	 * @param 実行コマンド
	 */
	void Update(std::string) override;

private:
	/**
	 * 実行内容
	 */
	void Command1();

	/**
	 * 実行内容
	 */
	void Command2();

private:
	/**
	 * リスナー名
	 */
	std::string mName;

};
