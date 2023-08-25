#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N, M; // N = number of attendees, M = number of topics
    cin >> N >> M;

    vector<string> attendees(N);
    for (int i = 0; i < N;i++) {
        cin >> attendees[i];
    }

    int maxTopics = 0;
    int numTeams = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int topicsKnown = 0;
            for (int k = 0; k < M; k++) {
                if (attendees[i][k] == '1' || attendees[j][k] == '1') {
                    topicsKnown++;
                }
            }
            if (topicsKnown > maxTopics) {
                maxTopics = topicsKnown;
                numTeams = 1;
            } else if (topicsKnown == maxTopics) {
                numTeams++;
            }
        }
    }

    cout << maxTopics << endl << numTeams << endl;

    return 0;
}
