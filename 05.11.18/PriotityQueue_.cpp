#include "PriotityQueue_.h"




bool PriotityQueue_::empty() const
{
	return arr.size()==0;
}

int PriotityQueue_::size() const
{
	return arr.size();
}

void PriotityQueue_::push(string str, int priority)
{
	//arr.push_back(pair<string,int>(str, priority));
	int pos = 0;
	for (; pos < arr.size(); pos++)
	{
		if (priority > arr[pos].second)
			break;
	}
	arr.insert(begin(arr) + pos, pair<string, int>(str, priority));
	/*sort(begin(arr), end(arr), []
	(pair<string, int> & p1, pair<string, int>&p2)
	{return p1.second > p2.second; });*/
}

pair<string, int>& PriotityQueue_::front()
{
	return arr[0];
}

const pair<string, int>& PriotityQueue_::front() const
{
	return arr[0];
}

pair<string, int>& PriotityQueue_::back()
{
	return arr[arr.size() - 1];
}

const pair<string, int>& PriotityQueue_::back() const
{
	return arr[arr.size() - 1];
}

void PriotityQueue_::pop()
{
	arr.erase(begin(arr));
}
