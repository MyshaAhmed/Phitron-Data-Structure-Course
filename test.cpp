#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the number of test cases

    while (t--) {
        string sentence;
        getline(cin, sentence);

        map<string, int> wordCount; // Map to count the frequency of each word
        stringstream ss(sentence); // To split the sentence into words
        string word;
        string mostFrequentWord = "";
        int maxCount = 0;

        while (ss >> word) {
            wordCount[word]++;

            // Update the most frequent word based on count and order of appearance
            if (wordCount[word] > maxCount) {
                maxCount = wordCount[word];
                mostFrequentWord = word;
            }
        }

        cout << mostFrequentWord << " " << maxCount << endl;
    }

    return 0;
}
