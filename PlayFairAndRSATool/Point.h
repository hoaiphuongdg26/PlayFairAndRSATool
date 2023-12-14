#pragma once
struct Point {
	int row, column;
	Point() {
		row = 0;
		column = 0;
	}
	Point(int r, int c) {
		row = r;
		column = c;
	}
};
