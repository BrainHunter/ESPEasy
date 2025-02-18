#ifndef ESPEASY_BUILD_INFO_H
#define ESPEASY_BUILD_INFO_H


// ********************************************************************************
//   DO NOT CHANGE ANYTHING BELOW THIS LINE
// ********************************************************************************
#define ESP_PROJECT_PID           2016110801L

#if defined(ESP8266)
  # define VERSION                             2 // config file version (not ESPEasy version). increase if you make incompatible changes to
                                                 // config system.
#endif // if defined(ESP8266)
#if defined(ESP32)
  # define VERSION                             3 // Change in config.dat mapping needs a full reset
#endif // if defined(ESP32)

#define BUILD                           20103    // git version 2.1.03
#if defined(ESP8266)
  # define BUILD_NOTES                 " - Mega"
#endif // if defined(ESP8266)
#if defined(ESP32)
  # define BUILD_NOTES                 " - Mega32"
#endif // if defined(ESP32)

#ifndef BUILD_GIT
# define BUILD_GIT "(custom)"
#endif // ifndef BUILD_GIT


#endif // ESPEASY_BUILD_INFO_H
