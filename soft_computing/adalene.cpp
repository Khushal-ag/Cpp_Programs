#include <bits/stdc++.h>
using namespace std;
class Adaline
{
public:
    double w1, w2, bias;
    double learningRate;

    Adaline(double rate)
    {
        // Initialize weights and bias with random values between -1 and 1
        w1 = randomWeight();
        w2 = randomWeight();
        bias = randomWeight();
        learningRate = rate;
    }

    double activate(double input1, double input2)
    {
        double sum = w1 * input1 + w2 * input2 + bias;
        return sum;
    }

    void train(vector<vector<double>> &trainingData, vector<double> &targets, int maxEpochs)
    {
        for (int epoch = 0; epoch < maxEpochs; ++epoch)
        {
            double totalError = 0.0;
            for (size_t i = 0; i < trainingData.size(); ++i)
            {
                double prediction = activate(trainingData[i][0], trainingData[i][1]);
                double error = targets[i] - prediction;
                totalError += error;

                // Weight and bias updates
                w1 += learningRate * error * trainingData[i][0];
                w2 += learningRate * error * trainingData[i][1];
                bias += learningRate * error;
            }
            cout<<"W1= "<<w1<<" W2= "<<w2<<" Error= "<<totalError<<endl;

            // Check for convergence (small total error)
            if (fabs(totalError) < 0.01)
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
    vector<double> targets = {1, 0, 0, 0};

    // Create an Adaline
    Adaline andAdaline(0.1);

    // Train the Adaline
    int maxEpochs = 1000;
    andAdaline.train(trainingData, targets, maxEpochs);

    // Test the trained Adaline
    cout << "ANDNOT Adaline Output after Training:" << endl;
    for (size_t i = 0; i < trainingData.size(); ++i)
    {
        double prediction = andAdaline.activate(trainingData[i][0], trainingData[i][1]);
        cout << trainingData[i][0] << " ANDNOT " << trainingData[i][1] << " = " << (prediction >= 0 ? 1 : 0) << endl;
    }

    return 0;
}


