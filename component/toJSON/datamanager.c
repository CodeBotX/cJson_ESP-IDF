#include "cJSON.h"
#include "datamanager.h"

char* dataSensor_to_JSON(struct dataSensor_st* data) {
    cJSON *root = cJSON_CreateObject();

    cJSON_AddNumberToObject(root, "timeStamp", data->timeStamp);

#if CONFIG_USING_TEMPERATURE_SENSOR
    cJSON_AddNumberToObject(root, "temperature", data->temperature);
    cJSON_AddNumberToObject(root, "humidity", data->humidity);
    cJSON_AddNumberToObject(root, "pressure", data->pressure);
#endif // CONFIG_USING_BME

#if CONFIG_USING_DUST_SENSOR
    cJSON_AddNumberToObject(root, "pm1_0", data->pm1_0);
    cJSON_AddNumberToObject(root, "pm2_5", data->pm2_5);
    cJSON_AddNumberToObject(root, "pm10", data->pm10);
#endif // CONFIG_USING_PMS

#if CONFIG_USING_CO2_SENSOR
    cJSON_AddNumberToObject(root, "CO2", data->CO2);
#endif 

#if CONFIG_USING_NO_SENSOR
    cJSON_AddNumberToObject(root, "NO", data->NO);
#endif // CONFIG_USING_NO_SENSOR

#if CONFIG_USING_CO_SENSOR
    cJSON_AddNumberToObject(root, "CO", data->CO);
#endif // CONFIG_USING_CO_SENSOR

#if CONFIG_USING_CO2_SENSOR
    cJSON_AddNumberToObject(root, "CO2", data->CO2);
#endif // CONFIG_USING_CO2_SENSOR

#if CONFIG_USING_SO2_SENSOR
    cJSON_AddNumberToObject(root, "SO2", data->SO2);
#endif // CONFIG_USING_SO2_SENSOR

    char *jsonString = cJSON_Print(root);
    cJSON_Delete(root);

    return jsonString;
}