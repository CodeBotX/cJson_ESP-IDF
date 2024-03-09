# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/ESP_IDF/Espressif/frameworks/esp-idf-v5.1.2/components/bootloader/subproject"
  "E:/sourcescode_idf/library_for_airSen/build/bootloader"
  "E:/sourcescode_idf/library_for_airSen/build/bootloader-prefix"
  "E:/sourcescode_idf/library_for_airSen/build/bootloader-prefix/tmp"
  "E:/sourcescode_idf/library_for_airSen/build/bootloader-prefix/src/bootloader-stamp"
  "E:/sourcescode_idf/library_for_airSen/build/bootloader-prefix/src"
  "E:/sourcescode_idf/library_for_airSen/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "E:/sourcescode_idf/library_for_airSen/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "E:/sourcescode_idf/library_for_airSen/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
