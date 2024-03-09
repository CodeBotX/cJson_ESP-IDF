#include "cJSON.h"
void generate_and_print_json(const struct dataSensor_st *sensor_data) {
    cJSON *root = cJSON_CreateObject();

    if (root == NULL) {
        ESP_LOGE("JSON", "Failed to create JSON object.");
        return;
    }

    cJSON_AddNumberToObject(root, "timeStamp", sensor_data->timeStamp);

    #if CONFIG_USING_TEMPERATURE_SENSOR
        cJSON_AddNumberToObject(root, "temperature", sensor_data->temperature);
        cJSON_AddNumberToObject(root, "humidity", sensor_data->humidity);
        cJSON_AddNumberToObject(root, "pressure", sensor_data->pressure);
    #endif // CONFIG_USING_BME

    #if CONFIG_USING_DUST_SENSOR
        cJSON_AddNumberToObject(root, "pm1_0", sensor_data->pm1_0);
        cJSON_AddNumberToObject(root, "pm2_5", sensor_data->pm2_5);
        cJSON_AddNumberToObject(root, "pm10", sensor_data->pm10);
    #endif // CONFIG_USING_PMS

    #if CONFIG_USING_CO2_SENSOR
        cJSON_AddNumberToObject(root, "CO2", sensor_data->CO2);
    #endif 

    #if CONFIG_USING_NO_SENSOR
        cJSON_AddNumberToObject(root, "NO", sensor_data->NO);
    #endif // CONFIG_USING_NO_SENSOR

    #if CONFIG_USING_CO_SENSOR
        cJSON_AddNumberToObject(root, "CO", sensor_data->CO);
    #endif // CONFIG_USING_CO_SENSOR

    #if CONFIG_USING_SO2_SENSOR
        cJSON_AddNumberToObject(root, "SO2", sensor_data->SO2);
    #endif // CONFIG_USING_SO2_SENSOR

        char *json_str = cJSON_Print(root);
        if (json_str != NULL) {
            ESP_LOGI("JSON", "Generated JSON: %s", json_str);
            free(json_str);
        } else {
            ESP_LOGE("JSON", "Failed to stringify JSON object.");
        }

        cJSON_Delete(root);
}