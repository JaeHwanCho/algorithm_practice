package solve;

import java.io.*;
import java.util.*;

public class ConferenceRoomReservation implements Solve {

    public static class RoomInfo implements Comparable<RoomInfo> {
        public int start;
        public int end;

        public RoomInfo(int start, int end) {
            this.start = start;
            this.end = end;
        }

        @Override
        public int compareTo(RoomInfo info) {
            return this.start < info.start ? -1: 1;
        }
    }

    @Override
    public void method() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        ArrayList<String> rooms = new ArrayList();
        ArrayList<ArrayList<RoomInfo>> arr = new ArrayList();
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        for (int i = 0; i < n; i++) {
            rooms.add(br.readLine());
            arr.add(new ArrayList());
        }
        Collections.sort(rooms);

        for (int i = 0; i < m; i++) {
            st = new StringTokenizer(br.readLine(), " ");
            String roomName = st.nextToken();
            for (int j = 0; j < n; j++) {
                if (roomName.equals(rooms.get(j))) {
                    arr.get(j).add(new RoomInfo(Integer.parseInt(st.nextToken()), Integer.parseInt(st.nextToken())));
                    break;
                }
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            Collections.sort(arr.get(i));
        }

        // System.out.println("@@@@@");
        // System.out.println(arr.get(0).get(0).start);
        // System.out.println(arr.get(0).get(1).start);
        // System.out.println(arr.get(0).get(2).start);
        // System.out.println("@@@@@");


        for (int i = 0; i < arr.size(); i++) {

            System.out.println("Room " + rooms.get(i) + ":");
            boolean available = false;
            int now = 9;
            int count = 0;
            ArrayList<String> res = new ArrayList();

            for (int j = 0; j < arr.get(i).size(); j++) {
                if (now == arr.get(i).get(j).start) {
                    now = arr.get(i).get(j).end;
                    continue;
                }
                if (now != arr.get(i).get(j).start) {
                    available = true;
                    count++;
                    if (now < 10 && arr.get(i).get(j).start < 10) {
                        res.add("0" + now + "-0" + arr.get(i).get(j).start);
                    } else if (now < 10) {
                        res.add("0" + now + "-" + arr.get(i).get(j).start);
                    } else if (arr.get(i).get(j).start < 10) {
                        res.add(now + "-0" + arr.get(i).get(j).start);
                    } else {
                        res.add(now + "-" + arr.get(i).get(j).start);
                    }
                    now = arr.get(i).get(j).end;
                }
            }
            if (now < 18) {
                available = true;
                count++;
                if (now < 10) {
                    res.add("0" + now + "-18");
                } else {
                    res.add(now + "-18");
                }
            }
            if (!available) {
                System.out.println("Not available");
            } else {
                System.out.println(count + " available:");
            }
            for (int j = 0; j < res.size(); j++) {
                System.out.println(res.get(j));
            }


            if (i != arr.size() - 1) {
                System.out.println("-----");
            }
        }
    }
}
