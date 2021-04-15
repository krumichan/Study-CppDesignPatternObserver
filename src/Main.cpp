#include "subject/Notifier.h"
#include "observer/Listener.h"
#include <iostream>

int main(void)
{
	using namespace std;

	Notifier notifier;

	Listener listenerA("nameA");
	Listener listenerB;
	Listener listenerC("nameC");

	notifier.Resister(&listenerA);
	notifier.Resister(&listenerB);
	notifier.Resister(&listenerA);	//　重複の場合、挿入しない。
	notifier.Notify("command1");

	cout << endl << "nameC 追加" << endl << endl;

	notifier.Resister(&listenerC);
	notifier.Notify("command1");

	cout << endl << "nameA 削除" << endl << endl;

	notifier.Remove(&listenerA);
	notifier.Notify("command2");

	return 0;
}
