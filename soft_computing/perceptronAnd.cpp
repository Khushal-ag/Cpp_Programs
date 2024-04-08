#include <bits/stdc++.h>
using namespace std;
class Perceptron
{
public:
    double w1, w2, bias;

    Perceptron()
    {
        // Initialize weights and bias with random values between -1 and 1
        w1 = randomWeight();
        w2 = randomWeight();
        bias = randomWeight();
    }

    int activate(double input1, double input2)
    {
        double sum = w1 * input1 + w2 * input2 + bias;
        return (sum >= 0) ? 1 : 0;
    }

    void train(vector<vector<double>> &trainingData, vector<double> &targets, int maxEpochs, double learningRate)
    {
        for (int epoch = 0; epoch < maxEpochs; ++epoch)
        {
            bool allCorrect = true;
            for (size_t i = 0; i < trainingData.size(); ++i)
            {
                int prediction = activate(trainingData[i][0], trainingData[i][1]);
                int error = targets[i] - prediction;

                if (error != 0)
                {
                    allCorrect = false;
                    w1 += learningRate * error * trainingData[i][0];
                    w2 += learningRate * error * trainingData[i][1];
                    bias += learningRate * error;
                }
                cout << "W1= " << w1 << " W2= " << w2 << " bias= " << bias << endl;
            }

            if (allCorrect)
            {
                cout << "Training completed in " << epoch + 1 << " epochs." << endl;
                break;
            }
        }
    }

private:
    double randomWeight()
    {
        return static_cast<double>(rand()) / RAND_MAX * 2.0 - 1.0; // Random value between -1 and 1
    }
};

int main()
{
    srand(static_cast<unsigned>(time(nullptr)));

    // Training data: input1, input2
    vector<vector<double>> trainingData = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};

    // Desired outputs (targets) for AND gate
    vector<double> targets = {0, 0, 0, 1};

    // Create a perceptron
    Perceptron andPerceptron;

    // Train the perceptron
    int maxEpochs = 1000;
    double learningRate = 0.1;
    andPerceptron.train(trainingData, targets, maxEpochs, learningRate);

    // Test the trained perceptron
    cout << "AND Perceptron Output after Training:" << endl;
    for (size_t i = 0; i < trainingData.size(); ++i)
    {
        int prediction = andPerceptron.activate(trainingData[i][0], trainingData[i][1]);
        cout << trainingData[i][0] << " AND " << trainingData[i][1] << " = " << prediction << endl;
    }

    return 0;
}