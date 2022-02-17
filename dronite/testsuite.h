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
        93372036854775807ULL,963497880,101.0,129.0,157.0,185.0,213.0,241.0,963499336,963499544,963499752,963499960,963500168,963500376,963500584,963500792,963501000,20979,21083,21187,21291,21395,21499,21603,21707,21811,21915,25,92,159,226,37,104,171,238,49,116,2,250,61,128,195,6,963503080,85,152,963503392,963503600,963503808,963504016,963504224,963504432,24411
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
        packet1.onboard_control_sensors_present = packet_in.onboard_control_sensors_present;
        packet1.onboard_control_sensors_enabled = packet_in.onboard_control_sensors_enabled;
        packet1.onboard_control_sensors_health = packet_in.onboard_control_sensors_health;
        packet1.lat = packet_in.lat;
        packet1.lon = packet_in.lon;
        packet1.alt = packet_in.alt;
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
        packet1.mission_current_seq = packet_in.mission_current_seq;
        packet1.battery_id = packet_in.battery_id;
        packet1.battery_remaining = packet_in.battery_remaining;
        packet1.battery_function = packet_in.battery_function;
        packet1.battery_type = packet_in.battery_type;
        packet1.fix_type = packet_in.fix_type;
        packet1.satellites_visible = packet_in.satellites_visible;
        packet1.vehicle_type = packet_in.vehicle_type;
        packet1.autopilot = packet_in.autopilot;
        packet1.base_mode = packet_in.base_mode;
        packet1.system_status = packet_in.system_status;
        packet1.mavlink_version = packet_in.mavlink_version;
        packet1.rssi = packet_in.rssi;
        packet1.remrssi = packet_in.remrssi;
        packet1.txbuf = packet_in.txbuf;
        packet1.noise = packet_in.noise;
        packet1.remnoise = packet_in.remnoise;
        packet1.time_remaining = packet_in.time_remaining;
        packet1.charge_state = packet_in.charge_state;
        packet1.battery_mode = packet_in.battery_mode;
        packet1.fault_bitmask = packet_in.fault_bitmask;
        packet1.alt_ellipsoid = packet_in.alt_ellipsoid;
        packet1.h_acc = packet_in.h_acc;
        packet1.v_acc = packet_in.v_acc;
        packet1.vel_acc = packet_in.vel_acc;
        packet1.hdg_acc = packet_in.hdg_acc;
        packet1.gps_yaw = packet_in.gps_yaw;
        
        
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
    mavlink_msg_total_status_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.roll , packet1.pitch , packet1.yaw , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed , packet1.current_consumed , packet1.energy_consumed , packet1.voltage_battery , packet1.current_battery , packet1.battery_id , packet1.battery_remaining , packet1.battery_function , packet1.battery_type , packet1.onboard_control_sensors_present , packet1.onboard_control_sensors_enabled , packet1.onboard_control_sensors_health , packet1.load , packet1.time_usec , packet1.fix_type , packet1.lat , packet1.lon , packet1.alt , packet1.eph , packet1.epv , packet1.vel , packet1.cog , packet1.satellites_visible , packet1.vehicle_type , packet1.autopilot , packet1.base_mode , packet1.custom_mode , packet1.system_status , packet1.rssi , packet1.remrssi , packet1.txbuf , packet1.noise , packet1.remnoise , packet1.rxerrors , packet1.fixed , packet1.mission_current_seq , packet1.time_remaining , packet1.charge_state , packet1.battery_mode , packet1.fault_bitmask , packet1.alt_ellipsoid , packet1.h_acc , packet1.v_acc , packet1.vel_acc , packet1.hdg_acc , packet1.gps_yaw );
    mavlink_msg_total_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_total_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.roll , packet1.pitch , packet1.yaw , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed , packet1.current_consumed , packet1.energy_consumed , packet1.voltage_battery , packet1.current_battery , packet1.battery_id , packet1.battery_remaining , packet1.battery_function , packet1.battery_type , packet1.onboard_control_sensors_present , packet1.onboard_control_sensors_enabled , packet1.onboard_control_sensors_health , packet1.load , packet1.time_usec , packet1.fix_type , packet1.lat , packet1.lon , packet1.alt , packet1.eph , packet1.epv , packet1.vel , packet1.cog , packet1.satellites_visible , packet1.vehicle_type , packet1.autopilot , packet1.base_mode , packet1.custom_mode , packet1.system_status , packet1.rssi , packet1.remrssi , packet1.txbuf , packet1.noise , packet1.remnoise , packet1.rxerrors , packet1.fixed , packet1.mission_current_seq , packet1.time_remaining , packet1.charge_state , packet1.battery_mode , packet1.fault_bitmask , packet1.alt_ellipsoid , packet1.h_acc , packet1.v_acc , packet1.vel_acc , packet1.hdg_acc , packet1.gps_yaw );
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
    mavlink_msg_total_status_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.roll , packet1.pitch , packet1.yaw , packet1.rollspeed , packet1.pitchspeed , packet1.yawspeed , packet1.current_consumed , packet1.energy_consumed , packet1.voltage_battery , packet1.current_battery , packet1.battery_id , packet1.battery_remaining , packet1.battery_function , packet1.battery_type , packet1.onboard_control_sensors_present , packet1.onboard_control_sensors_enabled , packet1.onboard_control_sensors_health , packet1.load , packet1.time_usec , packet1.fix_type , packet1.lat , packet1.lon , packet1.alt , packet1.eph , packet1.epv , packet1.vel , packet1.cog , packet1.satellites_visible , packet1.vehicle_type , packet1.autopilot , packet1.base_mode , packet1.custom_mode , packet1.system_status , packet1.rssi , packet1.remrssi , packet1.txbuf , packet1.noise , packet1.remnoise , packet1.rxerrors , packet1.fixed , packet1.mission_current_seq , packet1.time_remaining , packet1.charge_state , packet1.battery_mode , packet1.fault_bitmask , packet1.alt_ellipsoid , packet1.h_acc , packet1.v_acc , packet1.vel_acc , packet1.hdg_acc , packet1.gps_yaw );
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
        17235,17339
    };
    mavlink_request_cashed_message_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.frequency_hop = packet_in.frequency_hop;
        packet1.hop_delay = packet_in.hop_delay;
        
        
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
    mavlink_msg_request_cashed_message_pack(system_id, component_id, &msg , packet1.frequency_hop , packet1.hop_delay );
    mavlink_msg_request_cashed_message_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_request_cashed_message_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.frequency_hop , packet1.hop_delay );
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
    mavlink_msg_request_cashed_message_send(MAVLINK_COMM_1 , packet1.frequency_hop , packet1.hop_delay );
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

static void mavlink_test_param_value_group(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_PARAM_VALUE_GROUP >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_param_value_group_t packet_in = {
        { 17.0, 18.0, 19.0, 20.0, 21.0, 22.0, 23.0, 24.0, 25.0 },{ 19107, 19108, 19109, 19110, 19111, 19112, 19113, 19114, 19115 },{ 20043, 20044, 20045, 20046, 20047, 20048, 20049, 20050, 20051 },"UVWXYZABCDEFGHI","KLMNOPQRSTUVWXY","ABCDEFGHIJKLMNO","QRSTUVWXYZABCDE","GHIJKLMNOPQRSTU","WXYZABCDEFGHIJK","MNOPQRSTUVWXYZA","CDEFGHIJKLMNOPQ","STUVWXYZABCDEFG",{ 141, 142, 143, 144, 145, 146, 147, 148, 149 },232
    };
    mavlink_param_value_group_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.param_num = packet_in.param_num;
        
        mav_array_memcpy(packet1.param_value, packet_in.param_value, sizeof(float)*9);
        mav_array_memcpy(packet1.param_count, packet_in.param_count, sizeof(uint16_t)*9);
        mav_array_memcpy(packet1.param_index, packet_in.param_index, sizeof(uint16_t)*9);
        mav_array_memcpy(packet1.param_id_1, packet_in.param_id_1, sizeof(char)*16);
        mav_array_memcpy(packet1.param_id_2, packet_in.param_id_2, sizeof(char)*16);
        mav_array_memcpy(packet1.param_id_3, packet_in.param_id_3, sizeof(char)*16);
        mav_array_memcpy(packet1.param_id_4, packet_in.param_id_4, sizeof(char)*16);
        mav_array_memcpy(packet1.param_id_5, packet_in.param_id_5, sizeof(char)*16);
        mav_array_memcpy(packet1.param_id_6, packet_in.param_id_6, sizeof(char)*16);
        mav_array_memcpy(packet1.param_id_7, packet_in.param_id_7, sizeof(char)*16);
        mav_array_memcpy(packet1.param_id_8, packet_in.param_id_8, sizeof(char)*16);
        mav_array_memcpy(packet1.param_id_9, packet_in.param_id_9, sizeof(char)*16);
        mav_array_memcpy(packet1.param_type, packet_in.param_type, sizeof(uint8_t)*9);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_PARAM_VALUE_GROUP_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_PARAM_VALUE_GROUP_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_value_group_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_param_value_group_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_value_group_pack(system_id, component_id, &msg , packet1.param_id_1 , packet1.param_id_2 , packet1.param_id_3 , packet1.param_id_4 , packet1.param_id_5 , packet1.param_id_6 , packet1.param_id_7 , packet1.param_id_8 , packet1.param_id_9 , packet1.param_value , packet1.param_type , packet1.param_count , packet1.param_index , packet1.param_num );
    mavlink_msg_param_value_group_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_value_group_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.param_id_1 , packet1.param_id_2 , packet1.param_id_3 , packet1.param_id_4 , packet1.param_id_5 , packet1.param_id_6 , packet1.param_id_7 , packet1.param_id_8 , packet1.param_id_9 , packet1.param_value , packet1.param_type , packet1.param_count , packet1.param_index , packet1.param_num );
    mavlink_msg_param_value_group_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_param_value_group_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_value_group_send(MAVLINK_COMM_1 , packet1.param_id_1 , packet1.param_id_2 , packet1.param_id_3 , packet1.param_id_4 , packet1.param_id_5 , packet1.param_id_6 , packet1.param_id_7 , packet1.param_id_8 , packet1.param_id_9 , packet1.param_value , packet1.param_type , packet1.param_count , packet1.param_index , packet1.param_num );
    mavlink_msg_param_value_group_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_dronite(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_total_status(system_id, component_id, last_msg);
    mavlink_test_set_led_rgb(system_id, component_id, last_msg);
    mavlink_test_request_cashed_message(system_id, component_id, last_msg);
    mavlink_test_did_send_all_cashed_message(system_id, component_id, last_msg);
    mavlink_test_param_value_group(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // DRONITE_TESTSUITE_H
