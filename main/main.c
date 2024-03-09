#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_log.h"
#include "cJSON.h"
#include "datamanager.h"

void app_main(void) {
    // struct dataSensor_st sensor_data;

    // // Giả sử giá trị dưới đây được đọc từ các cảm biến thực tế
    // sensor_data.timeStamp = esp_timer_get_time(); // Lấy thời gian hiện tại

    // #if CONFIG_USING_TEMPERATURE_SENSOR
    // sensor_data.temperature = 25.5; // Giả sử
    // sensor_data.humidity = 50.0; // Giả sử
    // sensor_data.pressure = 1013.25; // Giả sử
    // #endif

    // #if CONFIG_USING_DUST_SENSOR
    // sensor_data.pm1_0 = 12; // Giả sử
    // sensor_data.pm2_5 = 35; // Giả sử
    // sensor_data.pm10 = 55; // Giả sử
    // #endif

    // #if CONFIG_USING_CO2_SENSOR
    // sensor_data.CO2 = 400; // Giả sử
    // #endif

    // #if CONFIG_USING_NO_SENSOR
    // sensor_data.NO = 20; // Giả sử
    // #endif

    // #if CONFIG_USING_CO_SENSOR
    // sensor_data.CO = 5; // Giả sử
    // #endif

    // #if CONFIG_USING_SO2_SENSOR
    // sensor_data.SO2 = 10; // Giả sử
    // #endif

    // // Gọi hàm để tạo và in JSON
    // generate_and_print_json(&sensor_data);
}