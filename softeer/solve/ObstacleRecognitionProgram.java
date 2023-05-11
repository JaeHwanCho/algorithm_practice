package solve;

import java.io.*;
import java.util.*;

public class ObstacleRecognitionProgram implements Solve {

    public static int[][] arr = new int[26][26];
    public static int[][] visit = new int[26][26];
    public static int[] dx = {1 , 0, -1, 0};
    public static int[] dy = {0 , 1, 0, -1};
    public static int bfs(int x, int y, int n, int count) {
        int res = 1;
        for (int i = 0; i < 4; i++) {
            int nextX = x + dx[i];
            int nextY = y + dy[i];

            if (nextX < 0 || nextY < 0 || nextX >= n || nextY >= n) {
                continue;
            }
            else if (arr[nextX][nextY] == 0 || visit[nextX][nextY] != 0) {
                continue;
            } else {
                visit[nextX][nextY] = 1;
                res += bfs(nextX, nextY, n, count);
            }
        }
        return res;
    }

    @Override
    public void method() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int n = Integer.parseInt(st.nextToken());
        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine(), " ");
            String str = st.nextToken();

            for (int j = 0; j < n; j++) {
                arr[i][j] = Integer.parseInt(str.charAt(j) + "");
            }
        }
        ArrayList<Integer> result = new ArrayList();
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (visit[i][j] == 0 && arr[i][j] == 1) {
                    count++;
                    visit[i][j] = 1;
                    result.add(bfs(i, j, n, count));
                }
            }
        }
        Collections.sort(result);
        System.out.println(count);
        for (int i = 0; i < result.size(); i++) {
            System.out.println(result.get(i));
        }
    }
}
