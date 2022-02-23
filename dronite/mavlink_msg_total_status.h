#pragma once
// MESSAGE TOTAL_STATUS PACKING

#define MAVLINK_MSG_ID_TOTAL_STATUS 13000

MAVPACKED(
typedef struct __mavlink_total_status_t {
 uint64_t time_usec; /*< [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.*/
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
 float roll; /*< [rad] Roll angle (-pi..+pi)*/
 float pitch; /*< [rad] Pitch angle (-pi..+pi)*/
 float yaw; /*< [rad] Yaw angle (-pi..+pi)*/
 float rollspeed; /*< [rad/s] Roll angular speed*/
 float pitchspeed; /*< [rad/s] Pitch angular speed*/
 float yawspeed; /*< [rad/s] Yaw angular speed*/
 int32_t current_consumed; /*< [mAh] Consumed charge, -1: autopilot does not provide consumption estimate*/
 int32_t energy_consumed; /*< [hJ] Consumed energy, -1: autopilot does not provide energy consumption estimate*/
 uint32_t onboard_control_sensors_present; /*<  Bitmap showing which onboard controllers and sensors are present. Value of 0: not present. Value of 1: present.*/
 uint32_t onboard_control_sensors_enabled; /*<  Bitmap showing which onboard controllers and sensors are enabled:  Value of 0: not enabled. Value of 1: enabled.*/
 uint32_t onboard_control_sensors_health; /*<  Bitmap showing which onboard controllers and sensors have an error (or are operational). Value of 0: error. Value of 1: healthy.*/
 int32_t lat; /*< [degE7] Latitude (WGS84, EGM96 ellipsoid)*/
 int32_t lon; /*< [degE7] Longitude (WGS84, EGM96 ellipsoid)*/
 int32_t alt; /*< [mm] Altitude (MSL). Positive for up. Note that virtually all GPS modules provide the MSL altitude in addition to the WGS84 altitude.*/
 uint32_t custom_mode; /*<  A bitfield for use for autopilot-specific flags*/
 uint16_t voltage_battery; /*< [mV] Battery voltage, UINT16_MAX: Voltage not sent by autopilot*/
 uint16_t sys_voltage_battery; /*< [mV] Battery voltage, UINT16_MAX: Voltage not sent by autopilot*/
 int16_t current_battery; /*< [cA] Battery current, -1: Current not sent by autopilot*/
 int16_t sys_current_battery; /*< [cA] Battery current, -1: Current not sent by autopilot*/
 uint16_t load; /*< [d%] Maximum usage in percent of the mainloop time. Values: [0-1000] - should always be below 1000*/
 uint16_t eph; /*<  GPS HDOP horizontal dilution of position (unitless * 100). If unknown, set to: UINT16_MAX*/
 uint16_t epv; /*<  GPS VDOP vertical dilution of position (unitless * 100). If unknown, set to: UINT16_MAX*/
 uint16_t vel; /*< [cm/s] GPS ground speed. If unknown, set to: UINT16_MAX*/
 uint16_t cog; /*< [cdeg] Course over ground (NOT heading, but direction of movement) in degrees * 100, 0.0..359.99 degrees. If unknown, set to: UINT16_MAX*/
 uint16_t rxerrors; /*<  Count of radio packet receive errors (since boot).*/
 uint16_t fixed; /*<  Count of error corrected radio packets (since boot).*/
 uint16_t mission_current_seq; /*<  Sequence - Message that announces the sequence number of the current active mission item. The MAV will fly towards this mission item.*/
 uint8_t battery_id; /*<  Battery ID*/
 int8_t battery_remaining; /*< [%] Remaining battery energy. Values: [0-100], -1: autopilot does not estimate the remaining battery.*/
 uint8_t battery_function; /*<  Function of the battery*/
 uint8_t battery_type; /*<  Type (chemistry) of the battery*/
 uint8_t fix_type; /*<  GPS fix type.*/
 uint8_t satellites_visible; /*<  Number of satellites visible. If unknown, set to UINT8_MAX*/
 uint8_t vehicle_type; /*<  Vehicle or component type. For a flight controller component the vehicle type (quadrotor, helicopter, etc.). For other components the component type (e.g. camera, gimbal, etc.). This should be used in preference to component id for identifying the component type.*/
 uint8_t autopilot; /*<  Autopilot type / class. Use MAV_AUTOPILOT_INVALID for components that are not flight controllers.*/
 uint8_t base_mode; /*<  System mode bitmap.*/
 uint8_t system_status; /*<  System status flag.*/
 uint8_t mavlink_version; /*<  MAVLink version, not writable by user, gets added by protocol because of magic data type: uint8_t_mavlink_version*/
 uint8_t rssi; /*<  Local (message sender) recieved signal strength indication in device-dependent units/scale. Values: [0-254], UINT8_MAX: invalid/unknown.*/
 uint8_t remrssi; /*<  Remote (message receiver) signal strength indication in device-dependent units/scale. Values: [0-254], UINT8_MAX: invalid/unknown.*/
 uint8_t txbuf; /*< [%] Remaining free transmitter buffer space.*/
 uint8_t noise; /*<  Local background noise level. These are device dependent RSSI values (scale as approx 2x dB on SiK radios). Values: [0-254], UINT8_MAX: invalid/unknown.*/
 uint8_t remnoise; /*<  Remote background noise level. These are device dependent RSSI values (scale as approx 2x dB on SiK radios). Values: [0-254], UINT8_MAX: invalid/unknown.*/
 int32_t time_remaining; /*< [s] Remaining battery time, 0: autopilot does not provide remaining battery time estimate*/
 int32_t sys_time_remaining; /*< [s] Remaining battery time, 0: autopilot does not provide remaining battery time estimate*/
 uint8_t charge_state; /*<  State for extent of discharge, provided by autopilot for warning or external reactions*/
 uint8_t battery_mode; /*<  Battery mode. Default (0) is that battery mode reporting is not supported or battery is in normal-use mode.*/
 uint32_t fault_bitmask; /*<  Fault/health indications. These should be set when charge_state is MAV_BATTERY_CHARGE_STATE_FAILED or MAV_BATTERY_CHARGE_STATE_UNHEALTHY (if not, fault reporting is not supported).*/
 int32_t alt_ellipsoid; /*< [mm] Altitude (above WGS84, EGM96 ellipsoid). Positive for up.*/
 uint32_t h_acc; /*< [mm] Position uncertainty.*/
 uint32_t v_acc; /*< [mm] Altitude uncertainty.*/
 uint32_t vel_acc; /*< [mm] Speed uncertainty.*/
 uint32_t hdg_acc; /*< [degE5] Heading / track uncertainty*/
 uint16_t gps_yaw; /*< [cdeg] Yaw in earth frame from north. Use 0 if this GPS does not provide yaw. Use UINT16_MAX if this GPS is configured to provide yaw and is currently unable to provide it. Use 36000 for north.*/
}) mavlink_total_status_t;

#define MAVLINK_MSG_ID_TOTAL_STATUS_LEN 148
#define MAVLINK_MSG_ID_TOTAL_STATUS_MIN_LEN 112
#define MAVLINK_MSG_ID_13000_LEN 148
#define MAVLINK_MSG_ID_13000_MIN_LEN 112

#define MAVLINK_MSG_ID_TOTAL_STATUS_CRC 113
#define MAVLINK_MSG_ID_13000_CRC 113



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TOTAL_STATUS { \
    13000, \
    "TOTAL_STATUS", \
    56, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_total_status_t, time_boot_ms) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_total_status_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_total_status_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_total_status_t, yaw) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_total_status_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_total_status_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_total_status_t, yawspeed) }, \
         { "current_consumed", NULL, MAVLINK_TYPE_INT32_T, 0, 36, offsetof(mavlink_total_status_t, current_consumed) }, \
         { "energy_consumed", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_total_status_t, energy_consumed) }, \
         { "voltage_battery", NULL, MAVLINK_TYPE_UINT16_T, 0, 72, offsetof(mavlink_total_status_t, voltage_battery) }, \
         { "sys_voltage_battery", NULL, MAVLINK_TYPE_UINT16_T, 0, 74, offsetof(mavlink_total_status_t, sys_voltage_battery) }, \
         { "current_battery", NULL, MAVLINK_TYPE_INT16_T, 0, 76, offsetof(mavlink_total_status_t, current_battery) }, \
         { "sys_current_battery", NULL, MAVLINK_TYPE_INT16_T, 0, 78, offsetof(mavlink_total_status_t, sys_current_battery) }, \
         { "battery_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 96, offsetof(mavlink_total_status_t, battery_id) }, \
         { "battery_remaining", NULL, MAVLINK_TYPE_INT8_T, 0, 97, offsetof(mavlink_total_status_t, battery_remaining) }, \
         { "battery_function", NULL, MAVLINK_TYPE_UINT8_T, 0, 98, offsetof(mavlink_total_status_t, battery_function) }, \
         { "battery_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 99, offsetof(mavlink_total_status_t, battery_type) }, \
         { "onboard_control_sensors_present", "0x%04x", MAVLINK_TYPE_UINT32_T, 0, 44, offsetof(mavlink_total_status_t, onboard_control_sensors_present) }, \
         { "onboard_control_sensors_enabled", "0x%04x", MAVLINK_TYPE_UINT32_T, 0, 48, offsetof(mavlink_total_status_t, onboard_control_sensors_enabled) }, \
         { "onboard_control_sensors_health", "0x%04x", MAVLINK_TYPE_UINT32_T, 0, 52, offsetof(mavlink_total_status_t, onboard_control_sensors_health) }, \
         { "load", NULL, MAVLINK_TYPE_UINT16_T, 0, 80, offsetof(mavlink_total_status_t, load) }, \
         { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_total_status_t, time_usec) }, \
         { "fix_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 100, offsetof(mavlink_total_status_t, fix_type) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 56, offsetof(mavlink_total_status_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 60, offsetof(mavlink_total_status_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 64, offsetof(mavlink_total_status_t, alt) }, \
         { "eph", NULL, MAVLINK_TYPE_UINT16_T, 0, 82, offsetof(mavlink_total_status_t, eph) }, \
         { "epv", NULL, MAVLINK_TYPE_UINT16_T, 0, 84, offsetof(mavlink_total_status_t, epv) }, \
         { "vel", NULL, MAVLINK_TYPE_UINT16_T, 0, 86, offsetof(mavlink_total_status_t, vel) }, \
         { "cog", NULL, MAVLINK_TYPE_UINT16_T, 0, 88, offsetof(mavlink_total_status_t, cog) }, \
         { "satellites_visible", NULL, MAVLINK_TYPE_UINT8_T, 0, 101, offsetof(mavlink_total_status_t, satellites_visible) }, \
         { "vehicle_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 102, offsetof(mavlink_total_status_t, vehicle_type) }, \
         { "autopilot", NULL, MAVLINK_TYPE_UINT8_T, 0, 103, offsetof(mavlink_total_status_t, autopilot) }, \
         { "base_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 104, offsetof(mavlink_total_status_t, base_mode) }, \
         { "custom_mode", NULL, MAVLINK_TYPE_UINT32_T, 0, 68, offsetof(mavlink_total_status_t, custom_mode) }, \
         { "system_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 105, offsetof(mavlink_total_status_t, system_status) }, \
         { "mavlink_version", NULL, MAVLINK_TYPE_UINT8_T, 0, 106, offsetof(mavlink_total_status_t, mavlink_version) }, \
         { "rssi", NULL, MAVLINK_TYPE_UINT8_T, 0, 107, offsetof(mavlink_total_status_t, rssi) }, \
         { "remrssi", NULL, MAVLINK_TYPE_UINT8_T, 0, 108, offsetof(mavlink_total_status_t, remrssi) }, \
         { "txbuf", NULL, MAVLINK_TYPE_UINT8_T, 0, 109, offsetof(mavlink_total_status_t, txbuf) }, \
         { "noise", NULL, MAVLINK_TYPE_UINT8_T, 0, 110, offsetof(mavlink_total_status_t, noise) }, \
         { "remnoise", NULL, MAVLINK_TYPE_UINT8_T, 0, 111, offsetof(mavlink_total_status_t, remnoise) }, \
         { "rxerrors", NULL, MAVLINK_TYPE_UINT16_T, 0, 90, offsetof(mavlink_total_status_t, rxerrors) }, \
         { "fixed", NULL, MAVLINK_TYPE_UINT16_T, 0, 92, offsetof(mavlink_total_status_t, fixed) }, \
         { "mission_current_seq", NULL, MAVLINK_TYPE_UINT16_T, 0, 94, offsetof(mavlink_total_status_t, mission_current_seq) }, \
         { "time_remaining", NULL, MAVLINK_TYPE_INT32_T, 0, 112, offsetof(mavlink_total_status_t, time_remaining) }, \
         { "sys_time_remaining", NULL, MAVLINK_TYPE_INT32_T, 0, 116, offsetof(mavlink_total_status_t, sys_time_remaining) }, \
         { "charge_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 120, offsetof(mavlink_total_status_t, charge_state) }, \
         { "battery_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 121, offsetof(mavlink_total_status_t, battery_mode) }, \
         { "fault_bitmask", NULL, MAVLINK_TYPE_UINT32_T, 0, 122, offsetof(mavlink_total_status_t, fault_bitmask) }, \
         { "alt_ellipsoid", NULL, MAVLINK_TYPE_INT32_T, 0, 126, offsetof(mavlink_total_status_t, alt_ellipsoid) }, \
         { "h_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 130, offsetof(mavlink_total_status_t, h_acc) }, \
         { "v_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 134, offsetof(mavlink_total_status_t, v_acc) }, \
         { "vel_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 138, offsetof(mavlink_total_status_t, vel_acc) }, \
         { "hdg_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 142, offsetof(mavlink_total_status_t, hdg_acc) }, \
         { "gps_yaw", NULL, MAVLINK_TYPE_UINT16_T, 0, 146, offsetof(mavlink_total_status_t, gps_yaw) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TOTAL_STATUS { \
    "TOTAL_STATUS", \
    56, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_total_status_t, time_boot_ms) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_total_status_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_total_status_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_total_status_t, yaw) }, \
         { "rollspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_total_status_t, rollspeed) }, \
         { "pitchspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_total_status_t, pitchspeed) }, \
         { "yawspeed", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_total_status_t, yawspeed) }, \
         { "current_consumed", NULL, MAVLINK_TYPE_INT32_T, 0, 36, offsetof(mavlink_total_status_t, current_consumed) }, \
         { "energy_consumed", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_total_status_t, energy_consumed) }, \
         { "voltage_battery", NULL, MAVLINK_TYPE_UINT16_T, 0, 72, offsetof(mavlink_total_status_t, voltage_battery) }, \
         { "sys_voltage_battery", NULL, MAVLINK_TYPE_UINT16_T, 0, 74, offsetof(mavlink_total_status_t, sys_voltage_battery) }, \
         { "current_battery", NULL, MAVLINK_TYPE_INT16_T, 0, 76, offsetof(mavlink_total_status_t, current_battery) }, \
         { "sys_current_battery", NULL, MAVLINK_TYPE_INT16_T, 0, 78, offsetof(mavlink_total_status_t, sys_current_battery) }, \
         { "battery_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 96, offsetof(mavlink_total_status_t, battery_id) }, \
         { "battery_remaining", NULL, MAVLINK_TYPE_INT8_T, 0, 97, offsetof(mavlink_total_status_t, battery_remaining) }, \
         { "battery_function", NULL, MAVLINK_TYPE_UINT8_T, 0, 98, offsetof(mavlink_total_status_t, battery_function) }, \
         { "battery_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 99, offsetof(mavlink_total_status_t, battery_type) }, \
         { "onboard_control_sensors_present", "0x%04x", MAVLINK_TYPE_UINT32_T, 0, 44, offsetof(mavlink_total_status_t, onboard_control_sensors_present) }, \
         { "onboard_control_sensors_enabled", "0x%04x", MAVLINK_TYPE_UINT32_T, 0, 48, offsetof(mavlink_total_status_t, onboard_control_sensors_enabled) }, \
         { "onboard_control_sensors_health", "0x%04x", MAVLINK_TYPE_UINT32_T, 0, 52, offsetof(mavlink_total_status_t, onboard_control_sensors_health) }, \
         { "load", NULL, MAVLINK_TYPE_UINT16_T, 0, 80, offsetof(mavlink_total_status_t, load) }, \
         { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_total_status_t, time_usec) }, \
         { "fix_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 100, offsetof(mavlink_total_status_t, fix_type) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 56, offsetof(mavlink_total_status_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 60, offsetof(mavlink_total_status_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 64, offsetof(mavlink_total_status_t, alt) }, \
         { "eph", NULL, MAVLINK_TYPE_UINT16_T, 0, 82, offsetof(mavlink_total_status_t, eph) }, \
         { "epv", NULL, MAVLINK_TYPE_UINT16_T, 0, 84, offsetof(mavlink_total_status_t, epv) }, \
         { "vel", NULL, MAVLINK_TYPE_UINT16_T, 0, 86, offsetof(mavlink_total_status_t, vel) }, \
         { "cog", NULL, MAVLINK_TYPE_UINT16_T, 0, 88, offsetof(mavlink_total_status_t, cog) }, \
         { "satellites_visible", NULL, MAVLINK_TYPE_UINT8_T, 0, 101, offsetof(mavlink_total_status_t, satellites_visible) }, \
         { "vehicle_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 102, offsetof(mavlink_total_status_t, vehicle_type) }, \
         { "autopilot", NULL, MAVLINK_TYPE_UINT8_T, 0, 103, offsetof(mavlink_total_status_t, autopilot) }, \
         { "base_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 104, offsetof(mavlink_total_status_t, base_mode) }, \
         { "custom_mode", NULL, MAVLINK_TYPE_UINT32_T, 0, 68, offsetof(mavlink_total_status_t, custom_mode) }, \
         { "system_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 105, offsetof(mavlink_total_status_t, system_status) }, \
         { "mavlink_version", NULL, MAVLINK_TYPE_UINT8_T, 0, 106, offsetof(mavlink_total_status_t, mavlink_version) }, \
         { "rssi", NULL, MAVLINK_TYPE_UINT8_T, 0, 107, offsetof(mavlink_total_status_t, rssi) }, \
         { "remrssi", NULL, MAVLINK_TYPE_UINT8_T, 0, 108, offsetof(mavlink_total_status_t, remrssi) }, \
         { "txbuf", NULL, MAVLINK_TYPE_UINT8_T, 0, 109, offsetof(mavlink_total_status_t, txbuf) }, \
         { "noise", NULL, MAVLINK_TYPE_UINT8_T, 0, 110, offsetof(mavlink_total_status_t, noise) }, \
         { "remnoise", NULL, MAVLINK_TYPE_UINT8_T, 0, 111, offsetof(mavlink_total_status_t, remnoise) }, \
         { "rxerrors", NULL, MAVLINK_TYPE_UINT16_T, 0, 90, offsetof(mavlink_total_status_t, rxerrors) }, \
         { "fixed", NULL, MAVLINK_TYPE_UINT16_T, 0, 92, offsetof(mavlink_total_status_t, fixed) }, \
         { "mission_current_seq", NULL, MAVLINK_TYPE_UINT16_T, 0, 94, offsetof(mavlink_total_status_t, mission_current_seq) }, \
         { "time_remaining", NULL, MAVLINK_TYPE_INT32_T, 0, 112, offsetof(mavlink_total_status_t, time_remaining) }, \
         { "sys_time_remaining", NULL, MAVLINK_TYPE_INT32_T, 0, 116, offsetof(mavlink_total_status_t, sys_time_remaining) }, \
         { "charge_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 120, offsetof(mavlink_total_status_t, charge_state) }, \
         { "battery_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 121, offsetof(mavlink_total_status_t, battery_mode) }, \
         { "fault_bitmask", NULL, MAVLINK_TYPE_UINT32_T, 0, 122, offsetof(mavlink_total_status_t, fault_bitmask) }, \
         { "alt_ellipsoid", NULL, MAVLINK_TYPE_INT32_T, 0, 126, offsetof(mavlink_total_status_t, alt_ellipsoid) }, \
         { "h_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 130, offsetof(mavlink_total_status_t, h_acc) }, \
         { "v_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 134, offsetof(mavlink_total_status_t, v_acc) }, \
         { "vel_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 138, offsetof(mavlink_total_status_t, vel_acc) }, \
         { "hdg_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 142, offsetof(mavlink_total_status_t, hdg_acc) }, \
         { "gps_yaw", NULL, MAVLINK_TYPE_UINT16_T, 0, 146, offsetof(mavlink_total_status_t, gps_yaw) }, \
         } \
}
#endif

/**
 * @brief Pack a total_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param roll [rad] Roll angle (-pi..+pi)
 * @param pitch [rad] Pitch angle (-pi..+pi)
 * @param yaw [rad] Yaw angle (-pi..+pi)
 * @param rollspeed [rad/s] Roll angular speed
 * @param pitchspeed [rad/s] Pitch angular speed
 * @param yawspeed [rad/s] Yaw angular speed
 * @param current_consumed [mAh] Consumed charge, -1: autopilot does not provide consumption estimate
 * @param energy_consumed [hJ] Consumed energy, -1: autopilot does not provide energy consumption estimate
 * @param voltage_battery [mV] Battery voltage, UINT16_MAX: Voltage not sent by autopilot
 * @param sys_voltage_battery [mV] Battery voltage, UINT16_MAX: Voltage not sent by autopilot
 * @param current_battery [cA] Battery current, -1: Current not sent by autopilot
 * @param sys_current_battery [cA] Battery current, -1: Current not sent by autopilot
 * @param battery_id  Battery ID
 * @param battery_remaining [%] Remaining battery energy. Values: [0-100], -1: autopilot does not estimate the remaining battery.
 * @param battery_function  Function of the battery
 * @param battery_type  Type (chemistry) of the battery
 * @param onboard_control_sensors_present  Bitmap showing which onboard controllers and sensors are present. Value of 0: not present. Value of 1: present.
 * @param onboard_control_sensors_enabled  Bitmap showing which onboard controllers and sensors are enabled:  Value of 0: not enabled. Value of 1: enabled.
 * @param onboard_control_sensors_health  Bitmap showing which onboard controllers and sensors have an error (or are operational). Value of 0: error. Value of 1: healthy.
 * @param load [d%] Maximum usage in percent of the mainloop time. Values: [0-1000] - should always be below 1000
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param fix_type  GPS fix type.
 * @param lat [degE7] Latitude (WGS84, EGM96 ellipsoid)
 * @param lon [degE7] Longitude (WGS84, EGM96 ellipsoid)
 * @param alt [mm] Altitude (MSL). Positive for up. Note that virtually all GPS modules provide the MSL altitude in addition to the WGS84 altitude.
 * @param eph  GPS HDOP horizontal dilution of position (unitless * 100). If unknown, set to: UINT16_MAX
 * @param epv  GPS VDOP vertical dilution of position (unitless * 100). If unknown, set to: UINT16_MAX
 * @param vel [cm/s] GPS ground speed. If unknown, set to: UINT16_MAX
 * @param cog [cdeg] Course over ground (NOT heading, but direction of movement) in degrees * 100, 0.0..359.99 degrees. If unknown, set to: UINT16_MAX
 * @param satellites_visible  Number of satellites visible. If unknown, set to UINT8_MAX
 * @param vehicle_type  Vehicle or component type. For a flight controller component the vehicle type (quadrotor, helicopter, etc.). For other components the component type (e.g. camera, gimbal, etc.). This should be used in preference to component id for identifying the component type.
 * @param autopilot  Autopilot type / class. Use MAV_AUTOPILOT_INVALID for components that are not flight controllers.
 * @param base_mode  System mode bitmap.
 * @param custom_mode  A bitfield for use for autopilot-specific flags
 * @param system_status  System status flag.
 * @param rssi  Local (message sender) recieved signal strength indication in device-dependent units/scale. Values: [0-254], UINT8_MAX: invalid/unknown.
 * @param remrssi  Remote (message receiver) signal strength indication in device-dependent units/scale. Values: [0-254], UINT8_MAX: invalid/unknown.
 * @param txbuf [%] Remaining free transmitter buffer space.
 * @param noise  Local background noise level. These are device dependent RSSI values (scale as approx 2x dB on SiK radios). Values: [0-254], UINT8_MAX: invalid/unknown.
 * @param remnoise  Remote background noise level. These are device dependent RSSI values (scale as approx 2x dB on SiK radios). Values: [0-254], UINT8_MAX: invalid/unknown.
 * @param rxerrors  Count of radio packet receive errors (since boot).
 * @param fixed  Count of error corrected radio packets (since boot).
 * @param mission_current_seq  Sequence - Message that announces the sequence number of the current active mission item. The MAV will fly towards this mission item.
 * @param time_remaining [s] Remaining battery time, 0: autopilot does not provide remaining battery time estimate
 * @param sys_time_remaining [s] Remaining battery time, 0: autopilot does not provide remaining battery time estimate
 * @param charge_state  State for extent of discharge, provided by autopilot for warning or external reactions
 * @param battery_mode  Battery mode. Default (0) is that battery mode reporting is not supported or battery is in normal-use mode.
 * @param fault_bitmask  Fault/health indications. These should be set when charge_state is MAV_BATTERY_CHARGE_STATE_FAILED or MAV_BATTERY_CHARGE_STATE_UNHEALTHY (if not, fault reporting is not supported).
 * @param alt_ellipsoid [mm] Altitude (above WGS84, EGM96 ellipsoid). Positive for up.
 * @param h_acc [mm] Position uncertainty.
 * @param v_acc [mm] Altitude uncertainty.
 * @param vel_acc [mm] Speed uncertainty.
 * @param hdg_acc [degE5] Heading / track uncertainty
 * @param gps_yaw [cdeg] Yaw in earth frame from north. Use 0 if this GPS does not provide yaw. Use UINT16_MAX if this GPS is configured to provide yaw and is currently unable to provide it. Use 36000 for north.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_total_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, float roll, float pitch, float yaw, float rollspeed, float pitchspeed, float yawspeed, int32_t current_consumed, int32_t energy_consumed, uint16_t voltage_battery, uint16_t sys_voltage_battery, int16_t current_battery, int16_t sys_current_battery, uint8_t battery_id, int8_t battery_remaining, uint8_t battery_function, uint8_t battery_type, uint32_t onboard_control_sensors_present, uint32_t onboard_control_sensors_enabled, uint32_t onboard_control_sensors_health, uint16_t load, uint64_t time_usec, uint8_t fix_type, int32_t lat, int32_t lon, int32_t alt, uint16_t eph, uint16_t epv, uint16_t vel, uint16_t cog, uint8_t satellites_visible, uint8_t vehicle_type, uint8_t autopilot, uint8_t base_mode, uint32_t custom_mode, uint8_t system_status, uint8_t rssi, uint8_t remrssi, uint8_t txbuf, uint8_t noise, uint8_t remnoise, uint16_t rxerrors, uint16_t fixed, uint16_t mission_current_seq, int32_t time_remaining, int32_t sys_time_remaining, uint8_t charge_state, uint8_t battery_mode, uint32_t fault_bitmask, int32_t alt_ellipsoid, uint32_t h_acc, uint32_t v_acc, uint32_t vel_acc, uint32_t hdg_acc, uint16_t gps_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TOTAL_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, time_boot_ms);
    _mav_put_float(buf, 12, roll);
    _mav_put_float(buf, 16, pitch);
    _mav_put_float(buf, 20, yaw);
    _mav_put_float(buf, 24, rollspeed);
    _mav_put_float(buf, 28, pitchspeed);
    _mav_put_float(buf, 32, yawspeed);
    _mav_put_int32_t(buf, 36, current_consumed);
    _mav_put_int32_t(buf, 40, energy_consumed);
    _mav_put_uint32_t(buf, 44, onboard_control_sensors_present);
    _mav_put_uint32_t(buf, 48, onboard_control_sensors_enabled);
    _mav_put_uint32_t(buf, 52, onboard_control_sensors_health);
    _mav_put_int32_t(buf, 56, lat);
    _mav_put_int32_t(buf, 60, lon);
    _mav_put_int32_t(buf, 64, alt);
    _mav_put_uint32_t(buf, 68, custom_mode);
    _mav_put_uint16_t(buf, 72, voltage_battery);
    _mav_put_uint16_t(buf, 74, sys_voltage_battery);
    _mav_put_int16_t(buf, 76, current_battery);
    _mav_put_int16_t(buf, 78, sys_current_battery);
    _mav_put_uint16_t(buf, 80, load);
    _mav_put_uint16_t(buf, 82, eph);
    _mav_put_uint16_t(buf, 84, epv);
    _mav_put_uint16_t(buf, 86, vel);
    _mav_put_uint16_t(buf, 88, cog);
    _mav_put_uint16_t(buf, 90, rxerrors);
    _mav_put_uint16_t(buf, 92, fixed);
    _mav_put_uint16_t(buf, 94, mission_current_seq);
    _mav_put_uint8_t(buf, 96, battery_id);
    _mav_put_int8_t(buf, 97, battery_remaining);
    _mav_put_uint8_t(buf, 98, battery_function);
    _mav_put_uint8_t(buf, 99, battery_type);
    _mav_put_uint8_t(buf, 100, fix_type);
    _mav_put_uint8_t(buf, 101, satellites_visible);
    _mav_put_uint8_t(buf, 102, vehicle_type);
    _mav_put_uint8_t(buf, 103, autopilot);
    _mav_put_uint8_t(buf, 104, base_mode);
    _mav_put_uint8_t(buf, 105, system_status);
    _mav_put_uint8_t(buf, 106, 2);
    _mav_put_uint8_t(buf, 107, rssi);
    _mav_put_uint8_t(buf, 108, remrssi);
    _mav_put_uint8_t(buf, 109, txbuf);
    _mav_put_uint8_t(buf, 110, noise);
    _mav_put_uint8_t(buf, 111, remnoise);
    _mav_put_int32_t(buf, 112, time_remaining);
    _mav_put_int32_t(buf, 116, sys_time_remaining);
    _mav_put_uint8_t(buf, 120, charge_state);
    _mav_put_uint8_t(buf, 121, battery_mode);
    _mav_put_uint32_t(buf, 122, fault_bitmask);
    _mav_put_int32_t(buf, 126, alt_ellipsoid);
    _mav_put_uint32_t(buf, 130, h_acc);
    _mav_put_uint32_t(buf, 134, v_acc);
    _mav_put_uint32_t(buf, 138, vel_acc);
    _mav_put_uint32_t(buf, 142, hdg_acc);
    _mav_put_uint16_t(buf, 146, gps_yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TOTAL_STATUS_LEN);
#else
    mavlink_total_status_t packet;
    packet.time_usec = time_usec;
    packet.time_boot_ms = time_boot_ms;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.current_consumed = current_consumed;
    packet.energy_consumed = energy_consumed;
    packet.onboard_control_sensors_present = onboard_control_sensors_present;
    packet.onboard_control_sensors_enabled = onboard_control_sensors_enabled;
    packet.onboard_control_sensors_health = onboard_control_sensors_health;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.custom_mode = custom_mode;
    packet.voltage_battery = voltage_battery;
    packet.sys_voltage_battery = sys_voltage_battery;
    packet.current_battery = current_battery;
    packet.sys_current_battery = sys_current_battery;
    packet.load = load;
    packet.eph = eph;
    packet.epv = epv;
    packet.vel = vel;
    packet.cog = cog;
    packet.rxerrors = rxerrors;
    packet.fixed = fixed;
    packet.mission_current_seq = mission_current_seq;
    packet.battery_id = battery_id;
    packet.battery_remaining = battery_remaining;
    packet.battery_function = battery_function;
    packet.battery_type = battery_type;
    packet.fix_type = fix_type;
    packet.satellites_visible = satellites_visible;
    packet.vehicle_type = vehicle_type;
    packet.autopilot = autopilot;
    packet.base_mode = base_mode;
    packet.system_status = system_status;
    packet.mavlink_version = 2;
    packet.rssi = rssi;
    packet.remrssi = remrssi;
    packet.txbuf = txbuf;
    packet.noise = noise;
    packet.remnoise = remnoise;
    packet.time_remaining = time_remaining;
    packet.sys_time_remaining = sys_time_remaining;
    packet.charge_state = charge_state;
    packet.battery_mode = battery_mode;
    packet.fault_bitmask = fault_bitmask;
    packet.alt_ellipsoid = alt_ellipsoid;
    packet.h_acc = h_acc;
    packet.v_acc = v_acc;
    packet.vel_acc = vel_acc;
    packet.hdg_acc = hdg_acc;
    packet.gps_yaw = gps_yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TOTAL_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TOTAL_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TOTAL_STATUS_MIN_LEN, MAVLINK_MSG_ID_TOTAL_STATUS_LEN, MAVLINK_MSG_ID_TOTAL_STATUS_CRC);
}

/**
 * @brief Pack a total_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param roll [rad] Roll angle (-pi..+pi)
 * @param pitch [rad] Pitch angle (-pi..+pi)
 * @param yaw [rad] Yaw angle (-pi..+pi)
 * @param rollspeed [rad/s] Roll angular speed
 * @param pitchspeed [rad/s] Pitch angular speed
 * @param yawspeed [rad/s] Yaw angular speed
 * @param current_consumed [mAh] Consumed charge, -1: autopilot does not provide consumption estimate
 * @param energy_consumed [hJ] Consumed energy, -1: autopilot does not provide energy consumption estimate
 * @param voltage_battery [mV] Battery voltage, UINT16_MAX: Voltage not sent by autopilot
 * @param sys_voltage_battery [mV] Battery voltage, UINT16_MAX: Voltage not sent by autopilot
 * @param current_battery [cA] Battery current, -1: Current not sent by autopilot
 * @param sys_current_battery [cA] Battery current, -1: Current not sent by autopilot
 * @param battery_id  Battery ID
 * @param battery_remaining [%] Remaining battery energy. Values: [0-100], -1: autopilot does not estimate the remaining battery.
 * @param battery_function  Function of the battery
 * @param battery_type  Type (chemistry) of the battery
 * @param onboard_control_sensors_present  Bitmap showing which onboard controllers and sensors are present. Value of 0: not present. Value of 1: present.
 * @param onboard_control_sensors_enabled  Bitmap showing which onboard controllers and sensors are enabled:  Value of 0: not enabled. Value of 1: enabled.
 * @param onboard_control_sensors_health  Bitmap showing which onboard controllers and sensors have an error (or are operational). Value of 0: error. Value of 1: healthy.
 * @param load [d%] Maximum usage in percent of the mainloop time. Values: [0-1000] - should always be below 1000
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param fix_type  GPS fix type.
 * @param lat [degE7] Latitude (WGS84, EGM96 ellipsoid)
 * @param lon [degE7] Longitude (WGS84, EGM96 ellipsoid)
 * @param alt [mm] Altitude (MSL). Positive for up. Note that virtually all GPS modules provide the MSL altitude in addition to the WGS84 altitude.
 * @param eph  GPS HDOP horizontal dilution of position (unitless * 100). If unknown, set to: UINT16_MAX
 * @param epv  GPS VDOP vertical dilution of position (unitless * 100). If unknown, set to: UINT16_MAX
 * @param vel [cm/s] GPS ground speed. If unknown, set to: UINT16_MAX
 * @param cog [cdeg] Course over ground (NOT heading, but direction of movement) in degrees * 100, 0.0..359.99 degrees. If unknown, set to: UINT16_MAX
 * @param satellites_visible  Number of satellites visible. If unknown, set to UINT8_MAX
 * @param vehicle_type  Vehicle or component type. For a flight controller component the vehicle type (quadrotor, helicopter, etc.). For other components the component type (e.g. camera, gimbal, etc.). This should be used in preference to component id for identifying the component type.
 * @param autopilot  Autopilot type / class. Use MAV_AUTOPILOT_INVALID for components that are not flight controllers.
 * @param base_mode  System mode bitmap.
 * @param custom_mode  A bitfield for use for autopilot-specific flags
 * @param system_status  System status flag.
 * @param rssi  Local (message sender) recieved signal strength indication in device-dependent units/scale. Values: [0-254], UINT8_MAX: invalid/unknown.
 * @param remrssi  Remote (message receiver) signal strength indication in device-dependent units/scale. Values: [0-254], UINT8_MAX: invalid/unknown.
 * @param txbuf [%] Remaining free transmitter buffer space.
 * @param noise  Local background noise level. These are device dependent RSSI values (scale as approx 2x dB on SiK radios). Values: [0-254], UINT8_MAX: invalid/unknown.
 * @param remnoise  Remote background noise level. These are device dependent RSSI values (scale as approx 2x dB on SiK radios). Values: [0-254], UINT8_MAX: invalid/unknown.
 * @param rxerrors  Count of radio packet receive errors (since boot).
 * @param fixed  Count of error corrected radio packets (since boot).
 * @param mission_current_seq  Sequence - Message that announces the sequence number of the current active mission item. The MAV will fly towards this mission item.
 * @param time_remaining [s] Remaining battery time, 0: autopilot does not provide remaining battery time estimate
 * @param sys_time_remaining [s] Remaining battery time, 0: autopilot does not provide remaining battery time estimate
 * @param charge_state  State for extent of discharge, provided by autopilot for warning or external reactions
 * @param battery_mode  Battery mode. Default (0) is that battery mode reporting is not supported or battery is in normal-use mode.
 * @param fault_bitmask  Fault/health indications. These should be set when charge_state is MAV_BATTERY_CHARGE_STATE_FAILED or MAV_BATTERY_CHARGE_STATE_UNHEALTHY (if not, fault reporting is not supported).
 * @param alt_ellipsoid [mm] Altitude (above WGS84, EGM96 ellipsoid). Positive for up.
 * @param h_acc [mm] Position uncertainty.
 * @param v_acc [mm] Altitude uncertainty.
 * @param vel_acc [mm] Speed uncertainty.
 * @param hdg_acc [degE5] Heading / track uncertainty
 * @param gps_yaw [cdeg] Yaw in earth frame from north. Use 0 if this GPS does not provide yaw. Use UINT16_MAX if this GPS is configured to provide yaw and is currently unable to provide it. Use 36000 for north.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_total_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,float roll,float pitch,float yaw,float rollspeed,float pitchspeed,float yawspeed,int32_t current_consumed,int32_t energy_consumed,uint16_t voltage_battery,uint16_t sys_voltage_battery,int16_t current_battery,int16_t sys_current_battery,uint8_t battery_id,int8_t battery_remaining,uint8_t battery_function,uint8_t battery_type,uint32_t onboard_control_sensors_present,uint32_t onboard_control_sensors_enabled,uint32_t onboard_control_sensors_health,uint16_t load,uint64_t time_usec,uint8_t fix_type,int32_t lat,int32_t lon,int32_t alt,uint16_t eph,uint16_t epv,uint16_t vel,uint16_t cog,uint8_t satellites_visible,uint8_t vehicle_type,uint8_t autopilot,uint8_t base_mode,uint32_t custom_mode,uint8_t system_status,uint8_t rssi,uint8_t remrssi,uint8_t txbuf,uint8_t noise,uint8_t remnoise,uint16_t rxerrors,uint16_t fixed,uint16_t mission_current_seq,int32_t time_remaining,int32_t sys_time_remaining,uint8_t charge_state,uint8_t battery_mode,uint32_t fault_bitmask,int32_t alt_ellipsoid,uint32_t h_acc,uint32_t v_acc,uint32_t vel_acc,uint32_t hdg_acc,uint16_t gps_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TOTAL_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, time_boot_ms);
    _mav_put_float(buf, 12, roll);
    _mav_put_float(buf, 16, pitch);
    _mav_put_float(buf, 20, yaw);
    _mav_put_float(buf, 24, rollspeed);
    _mav_put_float(buf, 28, pitchspeed);
    _mav_put_float(buf, 32, yawspeed);
    _mav_put_int32_t(buf, 36, current_consumed);
    _mav_put_int32_t(buf, 40, energy_consumed);
    _mav_put_uint32_t(buf, 44, onboard_control_sensors_present);
    _mav_put_uint32_t(buf, 48, onboard_control_sensors_enabled);
    _mav_put_uint32_t(buf, 52, onboard_control_sensors_health);
    _mav_put_int32_t(buf, 56, lat);
    _mav_put_int32_t(buf, 60, lon);
    _mav_put_int32_t(buf, 64, alt);
    _mav_put_uint32_t(buf, 68, custom_mode);
    _mav_put_uint16_t(buf, 72, voltage_battery);
    _mav_put_uint16_t(buf, 74, sys_voltage_battery);
    _mav_put_int16_t(buf, 76, current_battery);
    _mav_put_int16_t(buf, 78, sys_current_battery);
    _mav_put_uint16_t(buf, 80, load);
    _mav_put_uint16_t(buf, 82, eph);
    _mav_put_uint16_t(buf, 84, epv);
    _mav_put_uint16_t(buf, 86, vel);
    _mav_put_uint16_t(buf, 88, cog);
    _mav_put_uint16_t(buf, 90, rxerrors);
    _mav_put_uint16_t(buf, 92, fixed);
    _mav_put_uint16_t(buf, 94, mission_current_seq);
    _mav_put_uint8_t(buf, 96, battery_id);
    _mav_put_int8_t(buf, 97, battery_remaining);
    _mav_put_uint8_t(buf, 98, battery_function);
    _mav_put_uint8_t(buf, 99, battery_type);
    _mav_put_uint8_t(buf, 100, fix_type);
    _mav_put_uint8_t(buf, 101, satellites_visible);
    _mav_put_uint8_t(buf, 102, vehicle_type);
    _mav_put_uint8_t(buf, 103, autopilot);
    _mav_put_uint8_t(buf, 104, base_mode);
    _mav_put_uint8_t(buf, 105, system_status);
    _mav_put_uint8_t(buf, 106, 2);
    _mav_put_uint8_t(buf, 107, rssi);
    _mav_put_uint8_t(buf, 108, remrssi);
    _mav_put_uint8_t(buf, 109, txbuf);
    _mav_put_uint8_t(buf, 110, noise);
    _mav_put_uint8_t(buf, 111, remnoise);
    _mav_put_int32_t(buf, 112, time_remaining);
    _mav_put_int32_t(buf, 116, sys_time_remaining);
    _mav_put_uint8_t(buf, 120, charge_state);
    _mav_put_uint8_t(buf, 121, battery_mode);
    _mav_put_uint32_t(buf, 122, fault_bitmask);
    _mav_put_int32_t(buf, 126, alt_ellipsoid);
    _mav_put_uint32_t(buf, 130, h_acc);
    _mav_put_uint32_t(buf, 134, v_acc);
    _mav_put_uint32_t(buf, 138, vel_acc);
    _mav_put_uint32_t(buf, 142, hdg_acc);
    _mav_put_uint16_t(buf, 146, gps_yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TOTAL_STATUS_LEN);
#else
    mavlink_total_status_t packet;
    packet.time_usec = time_usec;
    packet.time_boot_ms = time_boot_ms;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.current_consumed = current_consumed;
    packet.energy_consumed = energy_consumed;
    packet.onboard_control_sensors_present = onboard_control_sensors_present;
    packet.onboard_control_sensors_enabled = onboard_control_sensors_enabled;
    packet.onboard_control_sensors_health = onboard_control_sensors_health;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.custom_mode = custom_mode;
    packet.voltage_battery = voltage_battery;
    packet.sys_voltage_battery = sys_voltage_battery;
    packet.current_battery = current_battery;
    packet.sys_current_battery = sys_current_battery;
    packet.load = load;
    packet.eph = eph;
    packet.epv = epv;
    packet.vel = vel;
    packet.cog = cog;
    packet.rxerrors = rxerrors;
    packet.fixed = fixed;
    packet.mission_current_seq = mission_current_seq;
    packet.battery_id = battery_id;
    packet.battery_remaining = battery_remaining;
    packet.battery_function = battery_function;
    packet.battery_type = battery_type;
    packet.fix_type = fix_type;
    packet.satellites_visible = satellites_visible;
    packet.vehicle_type = vehicle_type;
    packet.autopilot = autopilot;
    packet.base_mode = base_mode;
    packet.system_status = system_status;
    packet.mavlink_version = 2;
    packet.rssi = rssi;
    packet.remrssi = remrssi;
    packet.txbuf = txbuf;
    packet.noise = noise;
    packet.remnoise = remnoise;
    packet.time_remaining = time_remaining;
    packet.sys_time_remaining = sys_time_remaining;
    packet.charge_state = charge_state;
    packet.battery_mode = battery_mode;
    packet.fault_bitmask = fault_bitmask;
    packet.alt_ellipsoid = alt_ellipsoid;
    packet.h_acc = h_acc;
    packet.v_acc = v_acc;
    packet.vel_acc = vel_acc;
    packet.hdg_acc = hdg_acc;
    packet.gps_yaw = gps_yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TOTAL_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TOTAL_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TOTAL_STATUS_MIN_LEN, MAVLINK_MSG_ID_TOTAL_STATUS_LEN, MAVLINK_MSG_ID_TOTAL_STATUS_CRC);
}

/**
 * @brief Encode a total_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param total_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_total_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_total_status_t* total_status)
{
    return mavlink_msg_total_status_pack(system_id, component_id, msg, total_status->time_boot_ms, total_status->roll, total_status->pitch, total_status->yaw, total_status->rollspeed, total_status->pitchspeed, total_status->yawspeed, total_status->current_consumed, total_status->energy_consumed, total_status->voltage_battery, total_status->sys_voltage_battery, total_status->current_battery, total_status->sys_current_battery, total_status->battery_id, total_status->battery_remaining, total_status->battery_function, total_status->battery_type, total_status->onboard_control_sensors_present, total_status->onboard_control_sensors_enabled, total_status->onboard_control_sensors_health, total_status->load, total_status->time_usec, total_status->fix_type, total_status->lat, total_status->lon, total_status->alt, total_status->eph, total_status->epv, total_status->vel, total_status->cog, total_status->satellites_visible, total_status->vehicle_type, total_status->autopilot, total_status->base_mode, total_status->custom_mode, total_status->system_status, total_status->rssi, total_status->remrssi, total_status->txbuf, total_status->noise, total_status->remnoise, total_status->rxerrors, total_status->fixed, total_status->mission_current_seq, total_status->time_remaining, total_status->sys_time_remaining, total_status->charge_state, total_status->battery_mode, total_status->fault_bitmask, total_status->alt_ellipsoid, total_status->h_acc, total_status->v_acc, total_status->vel_acc, total_status->hdg_acc, total_status->gps_yaw);
}

/**
 * @brief Encode a total_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param total_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_total_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_total_status_t* total_status)
{
    return mavlink_msg_total_status_pack_chan(system_id, component_id, chan, msg, total_status->time_boot_ms, total_status->roll, total_status->pitch, total_status->yaw, total_status->rollspeed, total_status->pitchspeed, total_status->yawspeed, total_status->current_consumed, total_status->energy_consumed, total_status->voltage_battery, total_status->sys_voltage_battery, total_status->current_battery, total_status->sys_current_battery, total_status->battery_id, total_status->battery_remaining, total_status->battery_function, total_status->battery_type, total_status->onboard_control_sensors_present, total_status->onboard_control_sensors_enabled, total_status->onboard_control_sensors_health, total_status->load, total_status->time_usec, total_status->fix_type, total_status->lat, total_status->lon, total_status->alt, total_status->eph, total_status->epv, total_status->vel, total_status->cog, total_status->satellites_visible, total_status->vehicle_type, total_status->autopilot, total_status->base_mode, total_status->custom_mode, total_status->system_status, total_status->rssi, total_status->remrssi, total_status->txbuf, total_status->noise, total_status->remnoise, total_status->rxerrors, total_status->fixed, total_status->mission_current_seq, total_status->time_remaining, total_status->sys_time_remaining, total_status->charge_state, total_status->battery_mode, total_status->fault_bitmask, total_status->alt_ellipsoid, total_status->h_acc, total_status->v_acc, total_status->vel_acc, total_status->hdg_acc, total_status->gps_yaw);
}

/**
 * @brief Send a total_status message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param roll [rad] Roll angle (-pi..+pi)
 * @param pitch [rad] Pitch angle (-pi..+pi)
 * @param yaw [rad] Yaw angle (-pi..+pi)
 * @param rollspeed [rad/s] Roll angular speed
 * @param pitchspeed [rad/s] Pitch angular speed
 * @param yawspeed [rad/s] Yaw angular speed
 * @param current_consumed [mAh] Consumed charge, -1: autopilot does not provide consumption estimate
 * @param energy_consumed [hJ] Consumed energy, -1: autopilot does not provide energy consumption estimate
 * @param voltage_battery [mV] Battery voltage, UINT16_MAX: Voltage not sent by autopilot
 * @param sys_voltage_battery [mV] Battery voltage, UINT16_MAX: Voltage not sent by autopilot
 * @param current_battery [cA] Battery current, -1: Current not sent by autopilot
 * @param sys_current_battery [cA] Battery current, -1: Current not sent by autopilot
 * @param battery_id  Battery ID
 * @param battery_remaining [%] Remaining battery energy. Values: [0-100], -1: autopilot does not estimate the remaining battery.
 * @param battery_function  Function of the battery
 * @param battery_type  Type (chemistry) of the battery
 * @param onboard_control_sensors_present  Bitmap showing which onboard controllers and sensors are present. Value of 0: not present. Value of 1: present.
 * @param onboard_control_sensors_enabled  Bitmap showing which onboard controllers and sensors are enabled:  Value of 0: not enabled. Value of 1: enabled.
 * @param onboard_control_sensors_health  Bitmap showing which onboard controllers and sensors have an error (or are operational). Value of 0: error. Value of 1: healthy.
 * @param load [d%] Maximum usage in percent of the mainloop time. Values: [0-1000] - should always be below 1000
 * @param time_usec [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param fix_type  GPS fix type.
 * @param lat [degE7] Latitude (WGS84, EGM96 ellipsoid)
 * @param lon [degE7] Longitude (WGS84, EGM96 ellipsoid)
 * @param alt [mm] Altitude (MSL). Positive for up. Note that virtually all GPS modules provide the MSL altitude in addition to the WGS84 altitude.
 * @param eph  GPS HDOP horizontal dilution of position (unitless * 100). If unknown, set to: UINT16_MAX
 * @param epv  GPS VDOP vertical dilution of position (unitless * 100). If unknown, set to: UINT16_MAX
 * @param vel [cm/s] GPS ground speed. If unknown, set to: UINT16_MAX
 * @param cog [cdeg] Course over ground (NOT heading, but direction of movement) in degrees * 100, 0.0..359.99 degrees. If unknown, set to: UINT16_MAX
 * @param satellites_visible  Number of satellites visible. If unknown, set to UINT8_MAX
 * @param vehicle_type  Vehicle or component type. For a flight controller component the vehicle type (quadrotor, helicopter, etc.). For other components the component type (e.g. camera, gimbal, etc.). This should be used in preference to component id for identifying the component type.
 * @param autopilot  Autopilot type / class. Use MAV_AUTOPILOT_INVALID for components that are not flight controllers.
 * @param base_mode  System mode bitmap.
 * @param custom_mode  A bitfield for use for autopilot-specific flags
 * @param system_status  System status flag.
 * @param rssi  Local (message sender) recieved signal strength indication in device-dependent units/scale. Values: [0-254], UINT8_MAX: invalid/unknown.
 * @param remrssi  Remote (message receiver) signal strength indication in device-dependent units/scale. Values: [0-254], UINT8_MAX: invalid/unknown.
 * @param txbuf [%] Remaining free transmitter buffer space.
 * @param noise  Local background noise level. These are device dependent RSSI values (scale as approx 2x dB on SiK radios). Values: [0-254], UINT8_MAX: invalid/unknown.
 * @param remnoise  Remote background noise level. These are device dependent RSSI values (scale as approx 2x dB on SiK radios). Values: [0-254], UINT8_MAX: invalid/unknown.
 * @param rxerrors  Count of radio packet receive errors (since boot).
 * @param fixed  Count of error corrected radio packets (since boot).
 * @param mission_current_seq  Sequence - Message that announces the sequence number of the current active mission item. The MAV will fly towards this mission item.
 * @param time_remaining [s] Remaining battery time, 0: autopilot does not provide remaining battery time estimate
 * @param sys_time_remaining [s] Remaining battery time, 0: autopilot does not provide remaining battery time estimate
 * @param charge_state  State for extent of discharge, provided by autopilot for warning or external reactions
 * @param battery_mode  Battery mode. Default (0) is that battery mode reporting is not supported or battery is in normal-use mode.
 * @param fault_bitmask  Fault/health indications. These should be set when charge_state is MAV_BATTERY_CHARGE_STATE_FAILED or MAV_BATTERY_CHARGE_STATE_UNHEALTHY (if not, fault reporting is not supported).
 * @param alt_ellipsoid [mm] Altitude (above WGS84, EGM96 ellipsoid). Positive for up.
 * @param h_acc [mm] Position uncertainty.
 * @param v_acc [mm] Altitude uncertainty.
 * @param vel_acc [mm] Speed uncertainty.
 * @param hdg_acc [degE5] Heading / track uncertainty
 * @param gps_yaw [cdeg] Yaw in earth frame from north. Use 0 if this GPS does not provide yaw. Use UINT16_MAX if this GPS is configured to provide yaw and is currently unable to provide it. Use 36000 for north.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_total_status_send(mavlink_channel_t chan, uint32_t time_boot_ms, float roll, float pitch, float yaw, float rollspeed, float pitchspeed, float yawspeed, int32_t current_consumed, int32_t energy_consumed, uint16_t voltage_battery, uint16_t sys_voltage_battery, int16_t current_battery, int16_t sys_current_battery, uint8_t battery_id, int8_t battery_remaining, uint8_t battery_function, uint8_t battery_type, uint32_t onboard_control_sensors_present, uint32_t onboard_control_sensors_enabled, uint32_t onboard_control_sensors_health, uint16_t load, uint64_t time_usec, uint8_t fix_type, int32_t lat, int32_t lon, int32_t alt, uint16_t eph, uint16_t epv, uint16_t vel, uint16_t cog, uint8_t satellites_visible, uint8_t vehicle_type, uint8_t autopilot, uint8_t base_mode, uint32_t custom_mode, uint8_t system_status, uint8_t rssi, uint8_t remrssi, uint8_t txbuf, uint8_t noise, uint8_t remnoise, uint16_t rxerrors, uint16_t fixed, uint16_t mission_current_seq, int32_t time_remaining, int32_t sys_time_remaining, uint8_t charge_state, uint8_t battery_mode, uint32_t fault_bitmask, int32_t alt_ellipsoid, uint32_t h_acc, uint32_t v_acc, uint32_t vel_acc, uint32_t hdg_acc, uint16_t gps_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TOTAL_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, time_boot_ms);
    _mav_put_float(buf, 12, roll);
    _mav_put_float(buf, 16, pitch);
    _mav_put_float(buf, 20, yaw);
    _mav_put_float(buf, 24, rollspeed);
    _mav_put_float(buf, 28, pitchspeed);
    _mav_put_float(buf, 32, yawspeed);
    _mav_put_int32_t(buf, 36, current_consumed);
    _mav_put_int32_t(buf, 40, energy_consumed);
    _mav_put_uint32_t(buf, 44, onboard_control_sensors_present);
    _mav_put_uint32_t(buf, 48, onboard_control_sensors_enabled);
    _mav_put_uint32_t(buf, 52, onboard_control_sensors_health);
    _mav_put_int32_t(buf, 56, lat);
    _mav_put_int32_t(buf, 60, lon);
    _mav_put_int32_t(buf, 64, alt);
    _mav_put_uint32_t(buf, 68, custom_mode);
    _mav_put_uint16_t(buf, 72, voltage_battery);
    _mav_put_uint16_t(buf, 74, sys_voltage_battery);
    _mav_put_int16_t(buf, 76, current_battery);
    _mav_put_int16_t(buf, 78, sys_current_battery);
    _mav_put_uint16_t(buf, 80, load);
    _mav_put_uint16_t(buf, 82, eph);
    _mav_put_uint16_t(buf, 84, epv);
    _mav_put_uint16_t(buf, 86, vel);
    _mav_put_uint16_t(buf, 88, cog);
    _mav_put_uint16_t(buf, 90, rxerrors);
    _mav_put_uint16_t(buf, 92, fixed);
    _mav_put_uint16_t(buf, 94, mission_current_seq);
    _mav_put_uint8_t(buf, 96, battery_id);
    _mav_put_int8_t(buf, 97, battery_remaining);
    _mav_put_uint8_t(buf, 98, battery_function);
    _mav_put_uint8_t(buf, 99, battery_type);
    _mav_put_uint8_t(buf, 100, fix_type);
    _mav_put_uint8_t(buf, 101, satellites_visible);
    _mav_put_uint8_t(buf, 102, vehicle_type);
    _mav_put_uint8_t(buf, 103, autopilot);
    _mav_put_uint8_t(buf, 104, base_mode);
    _mav_put_uint8_t(buf, 105, system_status);
    _mav_put_uint8_t(buf, 106, 2);
    _mav_put_uint8_t(buf, 107, rssi);
    _mav_put_uint8_t(buf, 108, remrssi);
    _mav_put_uint8_t(buf, 109, txbuf);
    _mav_put_uint8_t(buf, 110, noise);
    _mav_put_uint8_t(buf, 111, remnoise);
    _mav_put_int32_t(buf, 112, time_remaining);
    _mav_put_int32_t(buf, 116, sys_time_remaining);
    _mav_put_uint8_t(buf, 120, charge_state);
    _mav_put_uint8_t(buf, 121, battery_mode);
    _mav_put_uint32_t(buf, 122, fault_bitmask);
    _mav_put_int32_t(buf, 126, alt_ellipsoid);
    _mav_put_uint32_t(buf, 130, h_acc);
    _mav_put_uint32_t(buf, 134, v_acc);
    _mav_put_uint32_t(buf, 138, vel_acc);
    _mav_put_uint32_t(buf, 142, hdg_acc);
    _mav_put_uint16_t(buf, 146, gps_yaw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOTAL_STATUS, buf, MAVLINK_MSG_ID_TOTAL_STATUS_MIN_LEN, MAVLINK_MSG_ID_TOTAL_STATUS_LEN, MAVLINK_MSG_ID_TOTAL_STATUS_CRC);
#else
    mavlink_total_status_t packet;
    packet.time_usec = time_usec;
    packet.time_boot_ms = time_boot_ms;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.rollspeed = rollspeed;
    packet.pitchspeed = pitchspeed;
    packet.yawspeed = yawspeed;
    packet.current_consumed = current_consumed;
    packet.energy_consumed = energy_consumed;
    packet.onboard_control_sensors_present = onboard_control_sensors_present;
    packet.onboard_control_sensors_enabled = onboard_control_sensors_enabled;
    packet.onboard_control_sensors_health = onboard_control_sensors_health;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.custom_mode = custom_mode;
    packet.voltage_battery = voltage_battery;
    packet.sys_voltage_battery = sys_voltage_battery;
    packet.current_battery = current_battery;
    packet.sys_current_battery = sys_current_battery;
    packet.load = load;
    packet.eph = eph;
    packet.epv = epv;
    packet.vel = vel;
    packet.cog = cog;
    packet.rxerrors = rxerrors;
    packet.fixed = fixed;
    packet.mission_current_seq = mission_current_seq;
    packet.battery_id = battery_id;
    packet.battery_remaining = battery_remaining;
    packet.battery_function = battery_function;
    packet.battery_type = battery_type;
    packet.fix_type = fix_type;
    packet.satellites_visible = satellites_visible;
    packet.vehicle_type = vehicle_type;
    packet.autopilot = autopilot;
    packet.base_mode = base_mode;
    packet.system_status = system_status;
    packet.mavlink_version = 2;
    packet.rssi = rssi;
    packet.remrssi = remrssi;
    packet.txbuf = txbuf;
    packet.noise = noise;
    packet.remnoise = remnoise;
    packet.time_remaining = time_remaining;
    packet.sys_time_remaining = sys_time_remaining;
    packet.charge_state = charge_state;
    packet.battery_mode = battery_mode;
    packet.fault_bitmask = fault_bitmask;
    packet.alt_ellipsoid = alt_ellipsoid;
    packet.h_acc = h_acc;
    packet.v_acc = v_acc;
    packet.vel_acc = vel_acc;
    packet.hdg_acc = hdg_acc;
    packet.gps_yaw = gps_yaw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOTAL_STATUS, (const char *)&packet, MAVLINK_MSG_ID_TOTAL_STATUS_MIN_LEN, MAVLINK_MSG_ID_TOTAL_STATUS_LEN, MAVLINK_MSG_ID_TOTAL_STATUS_CRC);
#endif
}

/**
 * @brief Send a total_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_total_status_send_struct(mavlink_channel_t chan, const mavlink_total_status_t* total_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_total_status_send(chan, total_status->time_boot_ms, total_status->roll, total_status->pitch, total_status->yaw, total_status->rollspeed, total_status->pitchspeed, total_status->yawspeed, total_status->current_consumed, total_status->energy_consumed, total_status->voltage_battery, total_status->sys_voltage_battery, total_status->current_battery, total_status->sys_current_battery, total_status->battery_id, total_status->battery_remaining, total_status->battery_function, total_status->battery_type, total_status->onboard_control_sensors_present, total_status->onboard_control_sensors_enabled, total_status->onboard_control_sensors_health, total_status->load, total_status->time_usec, total_status->fix_type, total_status->lat, total_status->lon, total_status->alt, total_status->eph, total_status->epv, total_status->vel, total_status->cog, total_status->satellites_visible, total_status->vehicle_type, total_status->autopilot, total_status->base_mode, total_status->custom_mode, total_status->system_status, total_status->rssi, total_status->remrssi, total_status->txbuf, total_status->noise, total_status->remnoise, total_status->rxerrors, total_status->fixed, total_status->mission_current_seq, total_status->time_remaining, total_status->sys_time_remaining, total_status->charge_state, total_status->battery_mode, total_status->fault_bitmask, total_status->alt_ellipsoid, total_status->h_acc, total_status->v_acc, total_status->vel_acc, total_status->hdg_acc, total_status->gps_yaw);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOTAL_STATUS, (const char *)total_status, MAVLINK_MSG_ID_TOTAL_STATUS_MIN_LEN, MAVLINK_MSG_ID_TOTAL_STATUS_LEN, MAVLINK_MSG_ID_TOTAL_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_TOTAL_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_total_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, float roll, float pitch, float yaw, float rollspeed, float pitchspeed, float yawspeed, int32_t current_consumed, int32_t energy_consumed, uint16_t voltage_battery, uint16_t sys_voltage_battery, int16_t current_battery, int16_t sys_current_battery, uint8_t battery_id, int8_t battery_remaining, uint8_t battery_function, uint8_t battery_type, uint32_t onboard_control_sensors_present, uint32_t onboard_control_sensors_enabled, uint32_t onboard_control_sensors_health, uint16_t load, uint64_t time_usec, uint8_t fix_type, int32_t lat, int32_t lon, int32_t alt, uint16_t eph, uint16_t epv, uint16_t vel, uint16_t cog, uint8_t satellites_visible, uint8_t vehicle_type, uint8_t autopilot, uint8_t base_mode, uint32_t custom_mode, uint8_t system_status, uint8_t rssi, uint8_t remrssi, uint8_t txbuf, uint8_t noise, uint8_t remnoise, uint16_t rxerrors, uint16_t fixed, uint16_t mission_current_seq, int32_t time_remaining, int32_t sys_time_remaining, uint8_t charge_state, uint8_t battery_mode, uint32_t fault_bitmask, int32_t alt_ellipsoid, uint32_t h_acc, uint32_t v_acc, uint32_t vel_acc, uint32_t hdg_acc, uint16_t gps_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, time_boot_ms);
    _mav_put_float(buf, 12, roll);
    _mav_put_float(buf, 16, pitch);
    _mav_put_float(buf, 20, yaw);
    _mav_put_float(buf, 24, rollspeed);
    _mav_put_float(buf, 28, pitchspeed);
    _mav_put_float(buf, 32, yawspeed);
    _mav_put_int32_t(buf, 36, current_consumed);
    _mav_put_int32_t(buf, 40, energy_consumed);
    _mav_put_uint32_t(buf, 44, onboard_control_sensors_present);
    _mav_put_uint32_t(buf, 48, onboard_control_sensors_enabled);
    _mav_put_uint32_t(buf, 52, onboard_control_sensors_health);
    _mav_put_int32_t(buf, 56, lat);
    _mav_put_int32_t(buf, 60, lon);
    _mav_put_int32_t(buf, 64, alt);
    _mav_put_uint32_t(buf, 68, custom_mode);
    _mav_put_uint16_t(buf, 72, voltage_battery);
    _mav_put_uint16_t(buf, 74, sys_voltage_battery);
    _mav_put_int16_t(buf, 76, current_battery);
    _mav_put_int16_t(buf, 78, sys_current_battery);
    _mav_put_uint16_t(buf, 80, load);
    _mav_put_uint16_t(buf, 82, eph);
    _mav_put_uint16_t(buf, 84, epv);
    _mav_put_uint16_t(buf, 86, vel);
    _mav_put_uint16_t(buf, 88, cog);
    _mav_put_uint16_t(buf, 90, rxerrors);
    _mav_put_uint16_t(buf, 92, fixed);
    _mav_put_uint16_t(buf, 94, mission_current_seq);
    _mav_put_uint8_t(buf, 96, battery_id);
    _mav_put_int8_t(buf, 97, battery_remaining);
    _mav_put_uint8_t(buf, 98, battery_function);
    _mav_put_uint8_t(buf, 99, battery_type);
    _mav_put_uint8_t(buf, 100, fix_type);
    _mav_put_uint8_t(buf, 101, satellites_visible);
    _mav_put_uint8_t(buf, 102, vehicle_type);
    _mav_put_uint8_t(buf, 103, autopilot);
    _mav_put_uint8_t(buf, 104, base_mode);
    _mav_put_uint8_t(buf, 105, system_status);
    _mav_put_uint8_t(buf, 106, 2);
    _mav_put_uint8_t(buf, 107, rssi);
    _mav_put_uint8_t(buf, 108, remrssi);
    _mav_put_uint8_t(buf, 109, txbuf);
    _mav_put_uint8_t(buf, 110, noise);
    _mav_put_uint8_t(buf, 111, remnoise);
    _mav_put_int32_t(buf, 112, time_remaining);
    _mav_put_int32_t(buf, 116, sys_time_remaining);
    _mav_put_uint8_t(buf, 120, charge_state);
    _mav_put_uint8_t(buf, 121, battery_mode);
    _mav_put_uint32_t(buf, 122, fault_bitmask);
    _mav_put_int32_t(buf, 126, alt_ellipsoid);
    _mav_put_uint32_t(buf, 130, h_acc);
    _mav_put_uint32_t(buf, 134, v_acc);
    _mav_put_uint32_t(buf, 138, vel_acc);
    _mav_put_uint32_t(buf, 142, hdg_acc);
    _mav_put_uint16_t(buf, 146, gps_yaw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOTAL_STATUS, buf, MAVLINK_MSG_ID_TOTAL_STATUS_MIN_LEN, MAVLINK_MSG_ID_TOTAL_STATUS_LEN, MAVLINK_MSG_ID_TOTAL_STATUS_CRC);
#else
    mavlink_total_status_t *packet = (mavlink_total_status_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->time_boot_ms = time_boot_ms;
    packet->roll = roll;
    packet->pitch = pitch;
    packet->yaw = yaw;
    packet->rollspeed = rollspeed;
    packet->pitchspeed = pitchspeed;
    packet->yawspeed = yawspeed;
    packet->current_consumed = current_consumed;
    packet->energy_consumed = energy_consumed;
    packet->onboard_control_sensors_present = onboard_control_sensors_present;
    packet->onboard_control_sensors_enabled = onboard_control_sensors_enabled;
    packet->onboard_control_sensors_health = onboard_control_sensors_health;
    packet->lat = lat;
    packet->lon = lon;
    packet->alt = alt;
    packet->custom_mode = custom_mode;
    packet->voltage_battery = voltage_battery;
    packet->sys_voltage_battery = sys_voltage_battery;
    packet->current_battery = current_battery;
    packet->sys_current_battery = sys_current_battery;
    packet->load = load;
    packet->eph = eph;
    packet->epv = epv;
    packet->vel = vel;
    packet->cog = cog;
    packet->rxerrors = rxerrors;
    packet->fixed = fixed;
    packet->mission_current_seq = mission_current_seq;
    packet->battery_id = battery_id;
    packet->battery_remaining = battery_remaining;
    packet->battery_function = battery_function;
    packet->battery_type = battery_type;
    packet->fix_type = fix_type;
    packet->satellites_visible = satellites_visible;
    packet->vehicle_type = vehicle_type;
    packet->autopilot = autopilot;
    packet->base_mode = base_mode;
    packet->system_status = system_status;
    packet->mavlink_version = 2;
    packet->rssi = rssi;
    packet->remrssi = remrssi;
    packet->txbuf = txbuf;
    packet->noise = noise;
    packet->remnoise = remnoise;
    packet->time_remaining = time_remaining;
    packet->sys_time_remaining = sys_time_remaining;
    packet->charge_state = charge_state;
    packet->battery_mode = battery_mode;
    packet->fault_bitmask = fault_bitmask;
    packet->alt_ellipsoid = alt_ellipsoid;
    packet->h_acc = h_acc;
    packet->v_acc = v_acc;
    packet->vel_acc = vel_acc;
    packet->hdg_acc = hdg_acc;
    packet->gps_yaw = gps_yaw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TOTAL_STATUS, (const char *)packet, MAVLINK_MSG_ID_TOTAL_STATUS_MIN_LEN, MAVLINK_MSG_ID_TOTAL_STATUS_LEN, MAVLINK_MSG_ID_TOTAL_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE TOTAL_STATUS UNPACKING


/**
 * @brief Get field time_boot_ms from total_status message
 *
 * @return [ms] Timestamp (time since system boot).
 */
static inline uint32_t mavlink_msg_total_status_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field roll from total_status message
 *
 * @return [rad] Roll angle (-pi..+pi)
 */
static inline float mavlink_msg_total_status_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field pitch from total_status message
 *
 * @return [rad] Pitch angle (-pi..+pi)
 */
static inline float mavlink_msg_total_status_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field yaw from total_status message
 *
 * @return [rad] Yaw angle (-pi..+pi)
 */
static inline float mavlink_msg_total_status_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field rollspeed from total_status message
 *
 * @return [rad/s] Roll angular speed
 */
static inline float mavlink_msg_total_status_get_rollspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field pitchspeed from total_status message
 *
 * @return [rad/s] Pitch angular speed
 */
static inline float mavlink_msg_total_status_get_pitchspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field yawspeed from total_status message
 *
 * @return [rad/s] Yaw angular speed
 */
static inline float mavlink_msg_total_status_get_yawspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field current_consumed from total_status message
 *
 * @return [mAh] Consumed charge, -1: autopilot does not provide consumption estimate
 */
static inline int32_t mavlink_msg_total_status_get_current_consumed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  36);
}

/**
 * @brief Get field energy_consumed from total_status message
 *
 * @return [hJ] Consumed energy, -1: autopilot does not provide energy consumption estimate
 */
static inline int32_t mavlink_msg_total_status_get_energy_consumed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  40);
}

/**
 * @brief Get field voltage_battery from total_status message
 *
 * @return [mV] Battery voltage, UINT16_MAX: Voltage not sent by autopilot
 */
static inline uint16_t mavlink_msg_total_status_get_voltage_battery(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  72);
}

/**
 * @brief Get field sys_voltage_battery from total_status message
 *
 * @return [mV] Battery voltage, UINT16_MAX: Voltage not sent by autopilot
 */
static inline uint16_t mavlink_msg_total_status_get_sys_voltage_battery(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  74);
}

/**
 * @brief Get field current_battery from total_status message
 *
 * @return [cA] Battery current, -1: Current not sent by autopilot
 */
static inline int16_t mavlink_msg_total_status_get_current_battery(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  76);
}

/**
 * @brief Get field sys_current_battery from total_status message
 *
 * @return [cA] Battery current, -1: Current not sent by autopilot
 */
static inline int16_t mavlink_msg_total_status_get_sys_current_battery(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  78);
}

/**
 * @brief Get field battery_id from total_status message
 *
 * @return  Battery ID
 */
static inline uint8_t mavlink_msg_total_status_get_battery_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  96);
}

/**
 * @brief Get field battery_remaining from total_status message
 *
 * @return [%] Remaining battery energy. Values: [0-100], -1: autopilot does not estimate the remaining battery.
 */
static inline int8_t mavlink_msg_total_status_get_battery_remaining(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  97);
}

/**
 * @brief Get field battery_function from total_status message
 *
 * @return  Function of the battery
 */
static inline uint8_t mavlink_msg_total_status_get_battery_function(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  98);
}

/**
 * @brief Get field battery_type from total_status message
 *
 * @return  Type (chemistry) of the battery
 */
static inline uint8_t mavlink_msg_total_status_get_battery_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  99);
}

/**
 * @brief Get field onboard_control_sensors_present from total_status message
 *
 * @return  Bitmap showing which onboard controllers and sensors are present. Value of 0: not present. Value of 1: present.
 */
static inline uint32_t mavlink_msg_total_status_get_onboard_control_sensors_present(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  44);
}

/**
 * @brief Get field onboard_control_sensors_enabled from total_status message
 *
 * @return  Bitmap showing which onboard controllers and sensors are enabled:  Value of 0: not enabled. Value of 1: enabled.
 */
static inline uint32_t mavlink_msg_total_status_get_onboard_control_sensors_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  48);
}

/**
 * @brief Get field onboard_control_sensors_health from total_status message
 *
 * @return  Bitmap showing which onboard controllers and sensors have an error (or are operational). Value of 0: error. Value of 1: healthy.
 */
static inline uint32_t mavlink_msg_total_status_get_onboard_control_sensors_health(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  52);
}

/**
 * @brief Get field load from total_status message
 *
 * @return [d%] Maximum usage in percent of the mainloop time. Values: [0-1000] - should always be below 1000
 */
static inline uint16_t mavlink_msg_total_status_get_load(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  80);
}

/**
 * @brief Get field time_usec from total_status message
 *
 * @return [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 */
static inline uint64_t mavlink_msg_total_status_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field fix_type from total_status message
 *
 * @return  GPS fix type.
 */
static inline uint8_t mavlink_msg_total_status_get_fix_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  100);
}

/**
 * @brief Get field lat from total_status message
 *
 * @return [degE7] Latitude (WGS84, EGM96 ellipsoid)
 */
static inline int32_t mavlink_msg_total_status_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  56);
}

/**
 * @brief Get field lon from total_status message
 *
 * @return [degE7] Longitude (WGS84, EGM96 ellipsoid)
 */
static inline int32_t mavlink_msg_total_status_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  60);
}

/**
 * @brief Get field alt from total_status message
 *
 * @return [mm] Altitude (MSL). Positive for up. Note that virtually all GPS modules provide the MSL altitude in addition to the WGS84 altitude.
 */
static inline int32_t mavlink_msg_total_status_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  64);
}

/**
 * @brief Get field eph from total_status message
 *
 * @return  GPS HDOP horizontal dilution of position (unitless * 100). If unknown, set to: UINT16_MAX
 */
static inline uint16_t mavlink_msg_total_status_get_eph(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  82);
}

/**
 * @brief Get field epv from total_status message
 *
 * @return  GPS VDOP vertical dilution of position (unitless * 100). If unknown, set to: UINT16_MAX
 */
static inline uint16_t mavlink_msg_total_status_get_epv(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  84);
}

/**
 * @brief Get field vel from total_status message
 *
 * @return [cm/s] GPS ground speed. If unknown, set to: UINT16_MAX
 */
static inline uint16_t mavlink_msg_total_status_get_vel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  86);
}

/**
 * @brief Get field cog from total_status message
 *
 * @return [cdeg] Course over ground (NOT heading, but direction of movement) in degrees * 100, 0.0..359.99 degrees. If unknown, set to: UINT16_MAX
 */
static inline uint16_t mavlink_msg_total_status_get_cog(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  88);
}

/**
 * @brief Get field satellites_visible from total_status message
 *
 * @return  Number of satellites visible. If unknown, set to UINT8_MAX
 */
static inline uint8_t mavlink_msg_total_status_get_satellites_visible(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  101);
}

/**
 * @brief Get field vehicle_type from total_status message
 *
 * @return  Vehicle or component type. For a flight controller component the vehicle type (quadrotor, helicopter, etc.). For other components the component type (e.g. camera, gimbal, etc.). This should be used in preference to component id for identifying the component type.
 */
static inline uint8_t mavlink_msg_total_status_get_vehicle_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  102);
}

/**
 * @brief Get field autopilot from total_status message
 *
 * @return  Autopilot type / class. Use MAV_AUTOPILOT_INVALID for components that are not flight controllers.
 */
static inline uint8_t mavlink_msg_total_status_get_autopilot(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  103);
}

/**
 * @brief Get field base_mode from total_status message
 *
 * @return  System mode bitmap.
 */
static inline uint8_t mavlink_msg_total_status_get_base_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  104);
}

/**
 * @brief Get field custom_mode from total_status message
 *
 * @return  A bitfield for use for autopilot-specific flags
 */
static inline uint32_t mavlink_msg_total_status_get_custom_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  68);
}

/**
 * @brief Get field system_status from total_status message
 *
 * @return  System status flag.
 */
static inline uint8_t mavlink_msg_total_status_get_system_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  105);
}

/**
 * @brief Get field mavlink_version from total_status message
 *
 * @return  MAVLink version, not writable by user, gets added by protocol because of magic data type: uint8_t_mavlink_version
 */
static inline uint8_t mavlink_msg_total_status_get_mavlink_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  106);
}

/**
 * @brief Get field rssi from total_status message
 *
 * @return  Local (message sender) recieved signal strength indication in device-dependent units/scale. Values: [0-254], UINT8_MAX: invalid/unknown.
 */
static inline uint8_t mavlink_msg_total_status_get_rssi(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  107);
}

/**
 * @brief Get field remrssi from total_status message
 *
 * @return  Remote (message receiver) signal strength indication in device-dependent units/scale. Values: [0-254], UINT8_MAX: invalid/unknown.
 */
static inline uint8_t mavlink_msg_total_status_get_remrssi(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  108);
}

/**
 * @brief Get field txbuf from total_status message
 *
 * @return [%] Remaining free transmitter buffer space.
 */
static inline uint8_t mavlink_msg_total_status_get_txbuf(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  109);
}

/**
 * @brief Get field noise from total_status message
 *
 * @return  Local background noise level. These are device dependent RSSI values (scale as approx 2x dB on SiK radios). Values: [0-254], UINT8_MAX: invalid/unknown.
 */
static inline uint8_t mavlink_msg_total_status_get_noise(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  110);
}

/**
 * @brief Get field remnoise from total_status message
 *
 * @return  Remote background noise level. These are device dependent RSSI values (scale as approx 2x dB on SiK radios). Values: [0-254], UINT8_MAX: invalid/unknown.
 */
static inline uint8_t mavlink_msg_total_status_get_remnoise(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  111);
}

/**
 * @brief Get field rxerrors from total_status message
 *
 * @return  Count of radio packet receive errors (since boot).
 */
static inline uint16_t mavlink_msg_total_status_get_rxerrors(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  90);
}

/**
 * @brief Get field fixed from total_status message
 *
 * @return  Count of error corrected radio packets (since boot).
 */
static inline uint16_t mavlink_msg_total_status_get_fixed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  92);
}

/**
 * @brief Get field mission_current_seq from total_status message
 *
 * @return  Sequence - Message that announces the sequence number of the current active mission item. The MAV will fly towards this mission item.
 */
static inline uint16_t mavlink_msg_total_status_get_mission_current_seq(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  94);
}

/**
 * @brief Get field time_remaining from total_status message
 *
 * @return [s] Remaining battery time, 0: autopilot does not provide remaining battery time estimate
 */
static inline int32_t mavlink_msg_total_status_get_time_remaining(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  112);
}

/**
 * @brief Get field sys_time_remaining from total_status message
 *
 * @return [s] Remaining battery time, 0: autopilot does not provide remaining battery time estimate
 */
static inline int32_t mavlink_msg_total_status_get_sys_time_remaining(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  116);
}

/**
 * @brief Get field charge_state from total_status message
 *
 * @return  State for extent of discharge, provided by autopilot for warning or external reactions
 */
static inline uint8_t mavlink_msg_total_status_get_charge_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  120);
}

/**
 * @brief Get field battery_mode from total_status message
 *
 * @return  Battery mode. Default (0) is that battery mode reporting is not supported or battery is in normal-use mode.
 */
static inline uint8_t mavlink_msg_total_status_get_battery_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  121);
}

/**
 * @brief Get field fault_bitmask from total_status message
 *
 * @return  Fault/health indications. These should be set when charge_state is MAV_BATTERY_CHARGE_STATE_FAILED or MAV_BATTERY_CHARGE_STATE_UNHEALTHY (if not, fault reporting is not supported).
 */
static inline uint32_t mavlink_msg_total_status_get_fault_bitmask(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  122);
}

/**
 * @brief Get field alt_ellipsoid from total_status message
 *
 * @return [mm] Altitude (above WGS84, EGM96 ellipsoid). Positive for up.
 */
static inline int32_t mavlink_msg_total_status_get_alt_ellipsoid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  126);
}

/**
 * @brief Get field h_acc from total_status message
 *
 * @return [mm] Position uncertainty.
 */
static inline uint32_t mavlink_msg_total_status_get_h_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  130);
}

/**
 * @brief Get field v_acc from total_status message
 *
 * @return [mm] Altitude uncertainty.
 */
static inline uint32_t mavlink_msg_total_status_get_v_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  134);
}

/**
 * @brief Get field vel_acc from total_status message
 *
 * @return [mm] Speed uncertainty.
 */
static inline uint32_t mavlink_msg_total_status_get_vel_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  138);
}

/**
 * @brief Get field hdg_acc from total_status message
 *
 * @return [degE5] Heading / track uncertainty
 */
static inline uint32_t mavlink_msg_total_status_get_hdg_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  142);
}

/**
 * @brief Get field gps_yaw from total_status message
 *
 * @return [cdeg] Yaw in earth frame from north. Use 0 if this GPS does not provide yaw. Use UINT16_MAX if this GPS is configured to provide yaw and is currently unable to provide it. Use 36000 for north.
 */
static inline uint16_t mavlink_msg_total_status_get_gps_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  146);
}

/**
 * @brief Decode a total_status message into a struct
 *
 * @param msg The message to decode
 * @param total_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_total_status_decode(const mavlink_message_t* msg, mavlink_total_status_t* total_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    total_status->time_usec = mavlink_msg_total_status_get_time_usec(msg);
    total_status->time_boot_ms = mavlink_msg_total_status_get_time_boot_ms(msg);
    total_status->roll = mavlink_msg_total_status_get_roll(msg);
    total_status->pitch = mavlink_msg_total_status_get_pitch(msg);
    total_status->yaw = mavlink_msg_total_status_get_yaw(msg);
    total_status->rollspeed = mavlink_msg_total_status_get_rollspeed(msg);
    total_status->pitchspeed = mavlink_msg_total_status_get_pitchspeed(msg);
    total_status->yawspeed = mavlink_msg_total_status_get_yawspeed(msg);
    total_status->current_consumed = mavlink_msg_total_status_get_current_consumed(msg);
    total_status->energy_consumed = mavlink_msg_total_status_get_energy_consumed(msg);
    total_status->onboard_control_sensors_present = mavlink_msg_total_status_get_onboard_control_sensors_present(msg);
    total_status->onboard_control_sensors_enabled = mavlink_msg_total_status_get_onboard_control_sensors_enabled(msg);
    total_status->onboard_control_sensors_health = mavlink_msg_total_status_get_onboard_control_sensors_health(msg);
    total_status->lat = mavlink_msg_total_status_get_lat(msg);
    total_status->lon = mavlink_msg_total_status_get_lon(msg);
    total_status->alt = mavlink_msg_total_status_get_alt(msg);
    total_status->custom_mode = mavlink_msg_total_status_get_custom_mode(msg);
    total_status->voltage_battery = mavlink_msg_total_status_get_voltage_battery(msg);
    total_status->sys_voltage_battery = mavlink_msg_total_status_get_sys_voltage_battery(msg);
    total_status->current_battery = mavlink_msg_total_status_get_current_battery(msg);
    total_status->sys_current_battery = mavlink_msg_total_status_get_sys_current_battery(msg);
    total_status->load = mavlink_msg_total_status_get_load(msg);
    total_status->eph = mavlink_msg_total_status_get_eph(msg);
    total_status->epv = mavlink_msg_total_status_get_epv(msg);
    total_status->vel = mavlink_msg_total_status_get_vel(msg);
    total_status->cog = mavlink_msg_total_status_get_cog(msg);
    total_status->rxerrors = mavlink_msg_total_status_get_rxerrors(msg);
    total_status->fixed = mavlink_msg_total_status_get_fixed(msg);
    total_status->mission_current_seq = mavlink_msg_total_status_get_mission_current_seq(msg);
    total_status->battery_id = mavlink_msg_total_status_get_battery_id(msg);
    total_status->battery_remaining = mavlink_msg_total_status_get_battery_remaining(msg);
    total_status->battery_function = mavlink_msg_total_status_get_battery_function(msg);
    total_status->battery_type = mavlink_msg_total_status_get_battery_type(msg);
    total_status->fix_type = mavlink_msg_total_status_get_fix_type(msg);
    total_status->satellites_visible = mavlink_msg_total_status_get_satellites_visible(msg);
    total_status->vehicle_type = mavlink_msg_total_status_get_vehicle_type(msg);
    total_status->autopilot = mavlink_msg_total_status_get_autopilot(msg);
    total_status->base_mode = mavlink_msg_total_status_get_base_mode(msg);
    total_status->system_status = mavlink_msg_total_status_get_system_status(msg);
    total_status->mavlink_version = mavlink_msg_total_status_get_mavlink_version(msg);
    total_status->rssi = mavlink_msg_total_status_get_rssi(msg);
    total_status->remrssi = mavlink_msg_total_status_get_remrssi(msg);
    total_status->txbuf = mavlink_msg_total_status_get_txbuf(msg);
    total_status->noise = mavlink_msg_total_status_get_noise(msg);
    total_status->remnoise = mavlink_msg_total_status_get_remnoise(msg);
    total_status->time_remaining = mavlink_msg_total_status_get_time_remaining(msg);
    total_status->sys_time_remaining = mavlink_msg_total_status_get_sys_time_remaining(msg);
    total_status->charge_state = mavlink_msg_total_status_get_charge_state(msg);
    total_status->battery_mode = mavlink_msg_total_status_get_battery_mode(msg);
    total_status->fault_bitmask = mavlink_msg_total_status_get_fault_bitmask(msg);
    total_status->alt_ellipsoid = mavlink_msg_total_status_get_alt_ellipsoid(msg);
    total_status->h_acc = mavlink_msg_total_status_get_h_acc(msg);
    total_status->v_acc = mavlink_msg_total_status_get_v_acc(msg);
    total_status->vel_acc = mavlink_msg_total_status_get_vel_acc(msg);
    total_status->hdg_acc = mavlink_msg_total_status_get_hdg_acc(msg);
    total_status->gps_yaw = mavlink_msg_total_status_get_gps_yaw(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TOTAL_STATUS_LEN? msg->len : MAVLINK_MSG_ID_TOTAL_STATUS_LEN;
        memset(total_status, 0, MAVLINK_MSG_ID_TOTAL_STATUS_LEN);
    memcpy(total_status, _MAV_PAYLOAD(msg), len);
#endif
}
