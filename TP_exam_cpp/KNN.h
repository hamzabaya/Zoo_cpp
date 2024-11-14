#ifndef KNN_H
#define KNN_H

#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

template <typename T>
class KNN {
protected:
    int k;  // Number of nearest neighbors

public:

    KNN() : k(1) {}

    KNN(int k) : k(k) {}

    int getK() const { return k; }

    vector<int> findNearestNeighbours(vector<T>& trainData, T& target) {
        vector<pair<double, int>> distances;

        for (size_t i = 0; i < trainData.size(); ++i) {
            double distance = similarityMeasure(trainData[i], target);
            distances.push_back({distance, static_cast<int>(i)});
        }

        sort(distances.begin(), distances.end());

        vector<int> neighbors;
        for (int i = 0; i < k && i < distances.size(); ++i) {
            neighbors.push_back(distances[i].second);
        }

        return neighbors;
    }

    virtual double similarityMeasure(T& a, T& b) const = 0;
};

#endif // KNN_H
