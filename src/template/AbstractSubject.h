#pragma once

#include "AbstractObserver.h"
#include <vector>
#include <string>

class AbstractObserver;

using namespace std;

class AbstractSubject
{
protected:
	/**
	 * コンストラクタ
	 */
	AbstractSubject();

public:
	/**
	 * デストラクタ
	 */
	virtual ~AbstractSubject();

public:
	/**
	 * Observer登録
	 */
	virtual void Resister(AbstractObserver*);

	/**
	 * Observer削除
	 */
	virtual void Remove(AbstractObserver*);

	/**
	 * notify!
	 * @param 実行コマンド
	 */
	virtual void Notify(string);


private:
	/**
	 * リスナーグループ
	 */
	vector<AbstractObserver*> observers;
};
