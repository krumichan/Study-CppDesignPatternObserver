#include "AbstractSubject.h"
#include <algorithm>

/**
 * コンストラクタ
 */
AbstractSubject::AbstractSubject()
{

}

/**
 * デストラクタ
 */
AbstractSubject::~AbstractSubject()
{

}

/**
 * Observer登録
 */
void AbstractSubject::Resister(AbstractObserver* _observer)
{
	//　既に存在している。
	auto it = std::find(observers.begin(), observers.end(), _observer);
	if (it != observers.end())
	{
		return;
	}

	//　リスナー登録
	observers.push_back(_observer);
}


/**
 * Observer削除
 */
void AbstractSubject::Remove(AbstractObserver* _observer)
{
	//　存在しているか確認。
	auto it = std::find(observers.begin(), observers.end(), _observer);
	if (it != observers.end())
	{
		//　あったら削除
		observers.erase(it);
	}
}

/**
 * notify!
 * @param 実行コマンド
 */
void AbstractSubject::Notify(string _command)
{
	//　全てのリスナーに送信処理
	for (auto _observer : observers)
	{
		_observer->Update(_command);
	}
}
