//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList() {
	_list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
	if (index-1 >= 0 && index-1 <= 9){
		_list[index-1] = link;
	}
}

Hyperlink TopTenList::get(int index)
{
	if (index-1 >= 0 && index-1 <= 9){
		return _list[index-1];
	}
}

void TopTenList::display_forward(){
	for (int i = 0; i < (int)_list.size(); i++){
		std::cout << i+1 << ". " << _list[i].url << std::endl;
	}
}

void TopTenList::display_backward(){
	for (int i = (int)_list.size()-1; i >= 0; i--){
		std::cout << i+1 << ". " << _list[i].url << std::endl;
	}
}