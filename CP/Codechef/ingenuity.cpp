#include <bits/stdc++.h>

using namespace std;

int countWordOccurrences(string& text, string& word) {
    int count = 0;
    size_t pos = 0;
    while ((pos = text.find(word, pos)) != string::npos) {
        count++;
        pos += word.length();
    }
    return count;
}

int main() {
    int M;
    cin >> M;

    string word_A;
    cin >> word_A;

    vector<pair<string, int>> text_counts;

    cin.ignore();

    for (int i = 0; i < M; i++) {
        string text;
        getline(cin, text);
        int count = countWordOccurrences(text, word_A);
        text_counts.push_back(make_pair(text, count));
    }

    sort(text_counts.begin(), text_counts.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second < b.second;
    });

    for (auto text_count : text_counts) {
        cout << text_count.first << endl;
    }

    return 0;
}
