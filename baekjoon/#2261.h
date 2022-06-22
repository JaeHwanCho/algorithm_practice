#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <set>

using namespace std;
struct point_2261 {
	int x, y;
	point_2261(int x, int y) : x(x), y(y) {
	}
	bool operator < (const point_2261& v) const {
		if (y == v.y) {
			return x < v.x;
		}
		else {
			return y < v.y;
		}
	}
};

bool cmp_2261(const point_2261& a, const point_2261& b) {
	return a.x < b.x;
}
int getDist_2261(const point_2261& a, const point_2261& b) {
	return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

int num_2261() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int temp_x, temp_y;
	int res;
	int temp;
	int start = 0;

	cin >> n;
	vector<point_2261> a;

	for (int i = 0; i < n; i++) {
		cin >> temp_x >> temp_y;
		a.push_back(point_2261(temp_x, temp_y));
	}
	sort(a.begin(), a.end(), cmp_2261);

	res = getDist_2261(a[0], a[1]);

	set<point_2261> comp;
	comp.insert(a[0]);
	comp.insert(a[1]);
	
	for (int i = 2; i < n; i++) {
		while (start < i) {
			int x = a[i].x - a[start].x;
			if (x * x > res) {
				comp.erase(a[start]);
				start++;
			}
			else {
				break;
			}
		}

		temp = (int)(sqrt((double)res) + 1);

		auto upper = comp.upper_bound(point_2261(100000, a[i].y + temp));
		auto lower = comp.lower_bound(point_2261(-100000, a[i].y - temp));
		
		for (auto it = lower; it != upper; it++) {
			int d = getDist_2261(a[i], *it);
			if (d < res) {
				res = d;
			}
		}
		comp.insert(a[i]);
	}
	cout << res;

	return 0;
}