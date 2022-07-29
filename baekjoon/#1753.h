#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int v_1753, e_1753, startLoc_1753;
vector<pair<int, int>> arr_1753[20001];
int dist_1753[20001]{};
int visited_1753[20001]{};

void dijkstra_1753(int start) {

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	pq.push({ 0, start });
	dist_1753[start] = 0;
	visited_1753[start] = 1;

	while (!pq.empty()) {

		int now = pq.top().second;
		int now_dist = pq.top().first;

		pq.pop();
		visited_1753[now] = 1;

		for (int i = 0; i < arr_1753[now].size(); i++) {

			int next = arr_1753[now][i].second;
			int next_dist = now_dist + arr_1753[now][i].first;

			if (visited_1753[next])
				continue;
			if (next_dist > dist_1753[next])	
				continue;

			dist_1753[next] = next_dist;
			pq.push({ next_dist, next });

		}
	}
}

int num_1753() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	cin >> v_1753 >> e_1753;
	cin >> startLoc_1753;

	for (int i = 0; i < e_1753; i++) {
		int start, end, distance;
		cin >> start >> end >> distance;
		arr_1753[start].push_back({ distance, end });
	}
	fill(dist_1753, dist_1753 + v_1753 + 1, 2000000000);

	dijkstra_1753(startLoc_1753);
	
	for (int i = 1; i <= v_1753; i++) {
		if (dist_1753[i] == 2000000000) {
			cout << "INF" << "\n";
		}
		else {
			cout << dist_1753[i] << "\n";
		}
	}

	return 0;
}