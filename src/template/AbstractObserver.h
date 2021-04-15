#pragma once

#include "AbstractSubject.h"
#include <string>
#include <memory>

class AbstractObserver
{
protected:
	/**
	 * コンストラクタ
	 */
	AbstractObserver();

public:
	/**
	 * デストラクタ
	 */
	virtual ~AbstractObserver();

public:
	/**
	 * リスナー
	 * @param 実行コマンド
	 */
	virtual void Update(std::string) = 0;
};
