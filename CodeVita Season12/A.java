import java.util.*;

public class Main {

    public static int calc(List<int[]> friends, int n, int m, int k) {
        // Create adjacency list
        List<List<Integer>> adj = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            adj.add(new ArrayList<>());
        }
        for (int[] pair : friends) {
            adj.get(pair[0]).add(pair[1]);
            adj.get(pair[1]).add(pair[0]);
        }

        // Initialize everyone's status as working from office (WFO)
        int[] currStat = new int[n];
        Arrays.fill(currStat, 1);
        int total = n;

        int days = 1;

        // Simulate until rostering value reaches at least K
        while (total < k) {
            int[] nextStat = new int[n];
            int val = 0;

            for (int i = 0; i < n; i++) {
                int who = 0;
                for (int x : adj.get(i)) {
                    who += currStat[x];
                }

                if (currStat[i] == 1 && who == 3) {
                    nextStat[i] = 1;
                } else if (currStat[i] == 0 && who < 3) {
                    nextStat[i] = 1;
                }

                val += nextStat[i];
            }

            total += val;
            currStat = nextStat;
            days++;
        }

        return days;
    }

    public static void solve() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();

        List<int[]> friends = new ArrayList<>();
        for (int i = 0; i < m; i++) {
            int u = sc.nextInt();
            int v = sc.nextInt();
            friends.add(new int[]{u, v});
        }

        int k = sc.nextInt();
        System.out.println(calc(friends, n, m, k));
    }

    public static void main(String[] args) {
        solve();
    }
}
