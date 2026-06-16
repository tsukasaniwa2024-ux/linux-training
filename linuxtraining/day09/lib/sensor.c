#include "sensor.h"

float calc_avg_temperature(const SensorData *data, int count)
{
    if (count <= 0) return 0.0f;
    float sum = 0.0f;
    for (int i = 0; i < count; i++) {
        sum += data[i].temperature;
    }
    return sum / count;
}

float calc_max_temperature(const SensorData *data, int count)
{
    if (count <= 0) return 0.0f;
    float max = data[0].temperature;
    for (int i = 1; i < count; i++) {
        if (data[i].temperature > max) {
            max = data[i].temperature;
        }
    }
    return max;
}

float calc_min_temperature(const SensorData *data, int count)
{
    if (count <= 0) return 0.0f;
    float min = data[0].temperature;
    for (int i = 1; i < count; i++) {
        if (data[i].temperature < min) {
            min = data[i].temperature;
        }
    }
    return min;
}

float calc_avg_humidity(const SensorData *data, int count)
{
    if (count <= 0) return 0.0f;
    float sum = 0.0f;
    for (int i = 0; i < count; i++) {
        sum += data[i].humidity;
    }
    return sum / count;
}
