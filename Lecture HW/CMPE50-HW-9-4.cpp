#include <iostream>

#include "Set.hpp"

/* Class for which == and != operators are overloaded */

class A

{

	A* a;

public:

	A()

	{

		a = this;

	}

	/* This function definition can be varied */

	bool operator==(const A& obj)

	{

		if (&obj == a)

		{

			return true;

		}

		return false;

	}

	/* This function definition can be varied. */

	bool operator!=(const A& obj)

	{

		if (&obj != a)

		{

			return true;

		}

		return false;

	}

};

/*

* Driver program to test the set Class.

*/

int main()

{

	A a;

	A b;

	/* Set of Integers */

	Set<int> set1;

	/* Set of Objects */

	Set<A> set2;

	/* Adding objects to set */

	set2.addItem(a);

	set2.addItem(b);

	/* Adding items */

	set1.addItem(5);

	set1.addItem(6);

	set1.addItem(1);

	set1.addItem(1);

	set1.addItem(10);

	set1.addItem(12);

	/* Remove items */

	set1.removeItem(6);

	/* Checking members whether members of set or not */

	set1.IsMember(6);

	set1.IsMember(5);

	/* Getting array of set elements */

	int* array = set1.getArrayOfSetItems();

	/* returning array */

	delete array;

	return 0;

}

/*Program Output:
* Item is added to set.
Item is added to set.
Item is added to set.
Item is added to set.
Item is added to set.
Item is already exists.
Item is added to set.
Item is added to set.
Item is removed from set.
Given item is not a member of set.
Given item is member of set.
*/