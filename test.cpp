#include "pch.h"
#include "C:\Users\umv22\OneDrive\Код будущего C++\Программы\Задача166\Задача166\Header.cpp"

TEST(Case, Test1) {
	vector<int> vec = { 6, 7 ,8, 9, 10 };
	ASSERT_TRUE(increase({ 1, 2 ,3, 4, 5 }, 5) == vec);
	ASSERT_TRUE(increase({ 2, 3 ,4, 5, 6 }, 4) == vec);
	ASSERT_EQ(increase({ 5, 6 ,7, 8, 9}, 1), vec);
}