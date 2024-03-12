set(app_src datamanager.c cJSON_Utils.c cJSON.c)
set(pre_req log)
# đăng kí thành phần với hệ thống build
idf_component_register(SRCS ${app_src} # chỉ định các file nguồn thành phần 
                    INCLUDE_DIRS "." # Chỉ định các thư mục chứa file header mà compiler cần biết để include, dấu '.' chỉ thư mục hiện tại
                    REQUIRES ${pre_req}) #Chỉ định các thành phần mà thành phần hiện tại yêu cầu