#include <iostream>
#include "Sales_item.h"

int main() {

	Sales_item refBook, currBook;
	//get an input to establish a baseline. If there's one, the first thing is to set the count to one
	if (std::cin >> refBook) {
		int count = 1;
		//then you start asking for other inputs and compare them
		while (std::cin >> currBook) {
			if (refBook.isbn() == currBook.isbn()) {
				count++;
			}
			else {
        //replace the whole item, who cares about the lost information in this case
				refBook = currBook;
        //reset the counter
				count = 1;
			}
			std::cout << "isbn " << refBook.isbn() << " transactions " << count << std::endl;
		}
	}
}