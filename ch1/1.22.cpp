#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item refBook, currBook;
  /* inside this if statement you're doing TWO things!
   * 1) checking whether the input is a Sales_item
   * 2) assigning the contents of your input to refBook!
   * so without this you wouldn't have any initial value in refBook.
   * If you try and compile it, you'll still get the sums to go up, but no isbn
   * that's because the first time around the sums start adding from 0 and that's valid
   * but there's still no ISBN to be found, and that is not part of any sum*/
	if (std::cin >> refBook) {
    // This while loop condition does same TWO things as well!
		while (std::cin >> currBook) {
			refBook += currBook;
		}
	}
  
  return 0;
}
