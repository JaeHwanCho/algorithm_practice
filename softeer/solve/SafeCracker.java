package solve;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class SafeCracker implements Solve {

    public static class Group implements Comparable<Group> {
        int m;
        int p;

        public Group(int m, int p) {
            this.m = m;
            this.p = p;
        }

        @Override
        public int compareTo(Group g) {
            return this.p < g.p ? 1 : -1;
        }
    }

    @Override
    public void method() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        long result = 0L;
        int w = Integer.parseInt(st.nextToken());
        int n = Integer.parseInt(st.nextToken());

        PriorityQueue<Group> groups = new PriorityQueue<Group>();

        // ArrayList<Group> groups = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine(), " ");

            int m = Integer.parseInt(st.nextToken());
            int p = Integer.parseInt(st.nextToken());
            Group group = new Group(m, p);

            groups.offer(group);
        }
        // Collections.sort(groups);

        while(!groups.isEmpty()){
            Group group = groups.poll();
            if(w < group.m){
                result = result + w * group.p;
                break;
            } else {
                result = result + group.m * group.p;
                w = w - group.m;
            }
        }

        // for (Group group : groups) {
        //     if (w >= group.m) {
        //         result += group.m * group.p;
        //         w -= group.m;
        //     } else {
        //         result += w * group.p;
        //         w = 0;
        //         break;
        //     }
        // }

        System.out.println(result + "");
    }
}
