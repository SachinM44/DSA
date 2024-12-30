class Solution {
public:
    int noDevice(string& row) {
        int c = 0;
        for (auto b : row) {
            if (b == '1') {
                c += b - '0'; // This will add 1 for each '1' character
            }
        }
        return c;
    }

    int numberOfBeams(vector<string>& bank) {
        vector<int> device;
        for (auto row : bank) {
            device.push_back(noDevice(row));
        }

        int n = device.size(); // Initialize n after populating the device vector
        int beams = 0;

        for (int i = 0; i < n - 1; i++) { // Corrected loop condition
            if (device[i] == 0) continue;
            for (int j = i + 1; j < n; j++) {
                if (device[j] != 0) {
                    beams += device[i] * device[j];
                    break; // Move to the next row in the outer loop
                }
            }
        }

        return beams;
    }
};
