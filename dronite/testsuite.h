/** @file
 *    @brief MAVLink comm protocol testsuite generated from dronite.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef DRONITE_TESTSUITE_H
#define DRONITE_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_ardupilotmega(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_dronite(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_ardupilotmega(system_id, component_id, last_msg);
    mavlink_test_dronite(system_id, component_id, last_msg);
}
#endif

#include "../ardupilotmega/testsuite.h"


static void mavlink_test_total_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_TOTAL_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_total_status_t packet_in = {
        93372036854775807ULL,963497880,101.0,129.0,157.0,185.0,213.0,241.0,963499336,963499544,963499752,963499960,963500168,963500376,963500584,963500792,963501000,963501208,963501416,963501624,963501832,963502040,22019,22123,22227,22331,22435,22539,22643,22747,22851,207,18,85,152,219,30,97,164,2,42,109,176,243,54
    };
    mavlink_total_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.time_boot_ms = packet_in.time_boot_ms;
        packet1.roll = packet_in.roll;
        packet1.pitch = packet_in.pitch;
        packet1.yaw = packet_in.yaw;
        packet1.rollspeed = packet_in.rollspeed;
        packet1.pitchspeed = packet_in.pitchspeed;
        packet1.yawspeed = packet_in.yawspeed;
        packet1.current_consumed = packet_in.current_consumed;
        packet1.energy_consumed = packet_in.energy_consumed;
        packet1.time_remaining = packet_in.time_remaining;
        packet1.onboard_control_sensors_present_extended = packet_in.onboard_control_sensors_present_extended;
        packet1.onboard_control_sensors_enabled_extended = packet_in.onboard_control_sensors_enabled_extended;
        packet1.onboard_control_sensors_health_extended = packet_in.onboard_control_sensors_health_extended;
        packet1.lat = packet_in.lat;
        packet1.lon = packet_in.lon;
        packet1.alt = packet_in.alt;
        packet1.h_acc = packet_in.h_acc;
        packet1.v_acc = packet_in.v_acc;
        packet1.vel_acc = packet_in.vel_acc;
        packet1.hdg_acc = packet_in.hdg_acc;
        packet1.custom_mode = packet_in.custom_mode;
        packet1.voltage_battery = packet_in.voltage_battery;
        packet1.current_battery = packet_in.current_battery;
        packet1.load = packet_in.load;
        packet1.eph = packet_in.eph;
        packet1.epv = packet_in.epv;
        packet1.vel = packet_in.vel;
        packet1.cog = packet_in.cog;
        packet1.rxerrors = packet_in.rxerrors;
        packet1.fixed = packet_in.fixed;
        packet1.battery_id = packet_in.battery_id;
        packet1.battery_remaining = packet_in.battery_remaining;
        packet1.fix_type = packet_in.fix_type;
        packet1.satellites_visible = packet_in.satellites_visible;
        packet1.type = packet_in.type;
        packet1.autopilot = packet_in.autopilot;
        packet1.base_mode = packet_in.base_mode;
        packet1.system_status = packet_in.system_status;
        packet1.mavlink_version = packet_in.mavlink_version;
        packet1.rssi = packet_in.rssi;
        packet1.remrssi = packet_in.remrssi;
        packet1.txbuf = packet_in.txbuf;
        packet1.noise = packet_in.noise;
        packet1.remnoise = packet_in.remnoise;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_TOTAL_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_TOTAL_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_total_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_total_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_total_status_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.roll , packet1.pitch , packet1.yaw , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed , packet1.current_consumed , packet1.energy_consumed , packet1.voltage_battery , packet1.current_battery , packet1.battery_id , packet1.battery_remaining , packet1.time_remaining , packet1.onboard_control_sensors_present_extended , packet1.onboard_control_sensors_enabled_extended , packet1.onboard_control_sensors_health_extended , packet1.load , packet1.time_usec , packet1.fix_type , packet1.lat , packet1.lon , packet1.alt , packet1.eph , packet1.epv , packet1.vel , packet1.cog , packet1.satellites_visible , packet1.h_acc , packet1.v_acc , packet1.vel_acc , packet1.hdg_acc , packet1.type , packet1.autopilot , packet1.base_mode , packet1.custom_mode , packet1.system_status , packet1.rssi , packet1.remrssi , packet1.txbuf , packet1.noise , packet1.remnoise , packet1.rxerrors , packet1.fixed );
    mavlink_msg_total_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_total_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.roll , packet1.pitch , packet1.yaw , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed , packet1.current_consumed , packet1.energy_consumed , packet1.voltage_battery , packet1.current_battery , packet1.battery_id , packet1.battery_remaining , packet1.time_remaining , packet1.onboard_control_sensors_present_extended , packet1.onboard_control_sensors_enabled_extended , packet1.onboard_control_sensors_health_extended , packet1.load , packet1.time_usec , packet1.fix_type , packet1.lat , packet1.lon , packet1.alt , packet1.eph , packet1.epv , packet1.vel , packet1.cog , packet1.satellites_visible , packet1.h_acc , packet1.v_acc , packet1.vel_acc , packet1.hdg_acc , packet1.type , packet1.autopilot , packet1.base_mode , packet1.custom_mode , packet1.system_status , packet1.rssi , packet1.remrssi , packet1.txbuf , packet1.noise , packet1.remnoise , packet1.rxerrors , packet1.fixed );
    mavlink_msg_total_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_total_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_total_status_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.roll , packet1.pitch , packet1.yaw , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed , packet1.current_consumed , packet1.energy_consumed , packet1.voltage_battery , packet1.current_battery , packet1.battery_id , packet1.battery_remaining , packet1.time_remaining , packet1.onboard_control_sensors_present_extended , packet1.onboard_control_sensors_enabled_extended , packet1.onboard_control_sensors_health_extended , packet1.load , packet1.time_usec , packet1.fix_type , packet1.lat , packet1.lon , packet1.alt , packet1.eph , packet1.epv , packet1.vel , packet1.cog , packet1.satellites_visible , packet1.h_acc , packet1.v_acc , packet1.vel_acc , packet1.hdg_acc , packet1.type , packet1.autopilot , packet1.base_mode , packet1.custom_mode , packet1.system_status , packet1.rssi , packet1.remrssi , packet1.txbuf , packet1.noise , packet1.remnoise , packet1.rxerrors , packet1.fixed );
    mavlink_msg_total_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_set_led_rgb(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_LED_RGB >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_led_rgb_t packet_in = {
        5,72,139
    };
    mavlink_set_led_rgb_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.r = packet_in.r;
        packet1.g = packet_in.g;
        packet1.b = packet_in.b;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_LED_RGB_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_LED_RGB_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_led_rgb_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_led_rgb_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_led_rgb_pack(system_id, component_id, &msg , packet1.r , packet1.g , packet1.b );
    mavlink_msg_set_led_rgb_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_led_rgb_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.r , packet1.g , packet1.b );
    mavlink_msg_set_led_rgb_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_led_rgb_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_led_rgb_send(MAVLINK_COMM_1 , packet1.r , packet1.g , packet1.b );
    mavlink_msg_set_led_rgb_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_request_cashed_message(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_request_cashed_message_t packet_in = {
        
    };
    mavlink_request_cashed_message_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_cashed_message_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_request_cashed_message_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_cashed_message_pack(system_id, component_id, &msg );
    mavlink_msg_request_cashed_message_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_cashed_message_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg );
    mavlink_msg_request_cashed_message_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_request_cashed_message_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_cashed_message_send(MAVLINK_COMM_1 );
    mavlink_msg_request_cashed_message_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_did_send_all_cashed_message(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_DID_SEND_ALL_CASHED_MESSAGE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_did_send_all_cashed_message_t packet_in = {
        
    };
    mavlink_did_send_all_cashed_message_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_DID_SEND_ALL_CASHED_MESSAGE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_DID_SEND_ALL_CASHED_MESSAGE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_did_send_all_cashed_message_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_did_send_all_cashed_message_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_did_send_all_cashed_message_pack(system_id, component_id, &msg );
    mavlink_msg_did_send_all_cashed_message_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_did_send_all_cashed_message_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg );
    mavlink_msg_did_send_all_cashed_message_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_did_send_all_cashed_message_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_did_send_all_cashed_message_send(MAVLINK_COMM_1 );
    mavlink_msg_did_send_all_cashed_message_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_dronite(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_total_status(system_id, component_id, last_msg);
    mavlink_test_set_led_rgb(system_id, component_id, last_msg);
    mavlink_test_request_cashed_message(system_id, component_id, last_msg);
    mavlink_test_did_send_all_cashed_message(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // DRONITE_TESTSUITE_H
