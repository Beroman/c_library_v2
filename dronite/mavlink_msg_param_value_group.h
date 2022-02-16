#pragma once
// MESSAGE PARAM_VALUE_GROUP PACKING

#define MAVLINK_MSG_ID_PARAM_VALUE_GROUP 13004


typedef struct __mavlink_param_value_group_t {
 float param_value[10]; /*<  Onboard parameter value*/
 uint16_t param_count[10]; /*<  Total number of onboard parameters*/
 uint16_t param_index[10]; /*<  Index of this onboard parameter*/
 char param_id_1[16]; /*<  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string*/
 char param_id_2[16]; /*<  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string*/
 char param_id_3[16]; /*<  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string*/
 char param_id_4[16]; /*<  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string*/
 char param_id_5[16]; /*<  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string*/
 char param_id_6[16]; /*<  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string*/
 char param_id_7[16]; /*<  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string*/
 char param_id_8[16]; /*<  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string*/
 char param_id_9[16]; /*<  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string*/
 char param_id_10[16]; /*<  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string*/
 uint8_t param_type[10]; /*<  Onboard parameter type.*/
 uint8_t param_num; /*<  Number of available parameters*/
} mavlink_param_value_group_t;

#define MAVLINK_MSG_ID_PARAM_VALUE_GROUP_LEN 251
#define MAVLINK_MSG_ID_PARAM_VALUE_GROUP_MIN_LEN 251
#define MAVLINK_MSG_ID_13004_LEN 251
#define MAVLINK_MSG_ID_13004_MIN_LEN 251

#define MAVLINK_MSG_ID_PARAM_VALUE_GROUP_CRC 164
#define MAVLINK_MSG_ID_13004_CRC 164

#define MAVLINK_MSG_PARAM_VALUE_GROUP_FIELD_PARAM_VALUE_LEN 10
#define MAVLINK_MSG_PARAM_VALUE_GROUP_FIELD_PARAM_COUNT_LEN 10
#define MAVLINK_MSG_PARAM_VALUE_GROUP_FIELD_PARAM_INDEX_LEN 10
#define MAVLINK_MSG_PARAM_VALUE_GROUP_FIELD_PARAM_ID_1_LEN 16
#define MAVLINK_MSG_PARAM_VALUE_GROUP_FIELD_PARAM_ID_2_LEN 16
#define MAVLINK_MSG_PARAM_VALUE_GROUP_FIELD_PARAM_ID_3_LEN 16
#define MAVLINK_MSG_PARAM_VALUE_GROUP_FIELD_PARAM_ID_4_LEN 16
#define MAVLINK_MSG_PARAM_VALUE_GROUP_FIELD_PARAM_ID_5_LEN 16
#define MAVLINK_MSG_PARAM_VALUE_GROUP_FIELD_PARAM_ID_6_LEN 16
#define MAVLINK_MSG_PARAM_VALUE_GROUP_FIELD_PARAM_ID_7_LEN 16
#define MAVLINK_MSG_PARAM_VALUE_GROUP_FIELD_PARAM_ID_8_LEN 16
#define MAVLINK_MSG_PARAM_VALUE_GROUP_FIELD_PARAM_ID_9_LEN 16
#define MAVLINK_MSG_PARAM_VALUE_GROUP_FIELD_PARAM_ID_10_LEN 16
#define MAVLINK_MSG_PARAM_VALUE_GROUP_FIELD_PARAM_TYPE_LEN 10

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PARAM_VALUE_GROUP { \
    13004, \
    "PARAM_VALUE_GROUP", \
    15, \
    {  { "param_id_1", NULL, MAVLINK_TYPE_CHAR, 16, 80, offsetof(mavlink_param_value_group_t, param_id_1) }, \
         { "param_id_2", NULL, MAVLINK_TYPE_CHAR, 16, 96, offsetof(mavlink_param_value_group_t, param_id_2) }, \
         { "param_id_3", NULL, MAVLINK_TYPE_CHAR, 16, 112, offsetof(mavlink_param_value_group_t, param_id_3) }, \
         { "param_id_4", NULL, MAVLINK_TYPE_CHAR, 16, 128, offsetof(mavlink_param_value_group_t, param_id_4) }, \
         { "param_id_5", NULL, MAVLINK_TYPE_CHAR, 16, 144, offsetof(mavlink_param_value_group_t, param_id_5) }, \
         { "param_id_6", NULL, MAVLINK_TYPE_CHAR, 16, 160, offsetof(mavlink_param_value_group_t, param_id_6) }, \
         { "param_id_7", NULL, MAVLINK_TYPE_CHAR, 16, 176, offsetof(mavlink_param_value_group_t, param_id_7) }, \
         { "param_id_8", NULL, MAVLINK_TYPE_CHAR, 16, 192, offsetof(mavlink_param_value_group_t, param_id_8) }, \
         { "param_id_9", NULL, MAVLINK_TYPE_CHAR, 16, 208, offsetof(mavlink_param_value_group_t, param_id_9) }, \
         { "param_id_10", NULL, MAVLINK_TYPE_CHAR, 16, 224, offsetof(mavlink_param_value_group_t, param_id_10) }, \
         { "param_value", NULL, MAVLINK_TYPE_FLOAT, 10, 0, offsetof(mavlink_param_value_group_t, param_value) }, \
         { "param_type", NULL, MAVLINK_TYPE_UINT8_T, 10, 240, offsetof(mavlink_param_value_group_t, param_type) }, \
         { "param_count", NULL, MAVLINK_TYPE_UINT16_T, 10, 40, offsetof(mavlink_param_value_group_t, param_count) }, \
         { "param_index", NULL, MAVLINK_TYPE_UINT16_T, 10, 60, offsetof(mavlink_param_value_group_t, param_index) }, \
         { "param_num", NULL, MAVLINK_TYPE_UINT8_T, 0, 250, offsetof(mavlink_param_value_group_t, param_num) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PARAM_VALUE_GROUP { \
    "PARAM_VALUE_GROUP", \
    15, \
    {  { "param_id_1", NULL, MAVLINK_TYPE_CHAR, 16, 80, offsetof(mavlink_param_value_group_t, param_id_1) }, \
         { "param_id_2", NULL, MAVLINK_TYPE_CHAR, 16, 96, offsetof(mavlink_param_value_group_t, param_id_2) }, \
         { "param_id_3", NULL, MAVLINK_TYPE_CHAR, 16, 112, offsetof(mavlink_param_value_group_t, param_id_3) }, \
         { "param_id_4", NULL, MAVLINK_TYPE_CHAR, 16, 128, offsetof(mavlink_param_value_group_t, param_id_4) }, \
         { "param_id_5", NULL, MAVLINK_TYPE_CHAR, 16, 144, offsetof(mavlink_param_value_group_t, param_id_5) }, \
         { "param_id_6", NULL, MAVLINK_TYPE_CHAR, 16, 160, offsetof(mavlink_param_value_group_t, param_id_6) }, \
         { "param_id_7", NULL, MAVLINK_TYPE_CHAR, 16, 176, offsetof(mavlink_param_value_group_t, param_id_7) }, \
         { "param_id_8", NULL, MAVLINK_TYPE_CHAR, 16, 192, offsetof(mavlink_param_value_group_t, param_id_8) }, \
         { "param_id_9", NULL, MAVLINK_TYPE_CHAR, 16, 208, offsetof(mavlink_param_value_group_t, param_id_9) }, \
         { "param_id_10", NULL, MAVLINK_TYPE_CHAR, 16, 224, offsetof(mavlink_param_value_group_t, param_id_10) }, \
         { "param_value", NULL, MAVLINK_TYPE_FLOAT, 10, 0, offsetof(mavlink_param_value_group_t, param_value) }, \
         { "param_type", NULL, MAVLINK_TYPE_UINT8_T, 10, 240, offsetof(mavlink_param_value_group_t, param_type) }, \
         { "param_count", NULL, MAVLINK_TYPE_UINT16_T, 10, 40, offsetof(mavlink_param_value_group_t, param_count) }, \
         { "param_index", NULL, MAVLINK_TYPE_UINT16_T, 10, 60, offsetof(mavlink_param_value_group_t, param_index) }, \
         { "param_num", NULL, MAVLINK_TYPE_UINT8_T, 0, 250, offsetof(mavlink_param_value_group_t, param_num) }, \
         } \
}
#endif

/**
 * @brief Pack a param_value_group message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param param_id_1  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_2  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_3  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_4  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_5  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_6  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_7  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_8  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_9  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_10  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_value  Onboard parameter value
 * @param param_type  Onboard parameter type.
 * @param param_count  Total number of onboard parameters
 * @param param_index  Index of this onboard parameter
 * @param param_num  Number of available parameters
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_param_value_group_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *param_id_1, const char *param_id_2, const char *param_id_3, const char *param_id_4, const char *param_id_5, const char *param_id_6, const char *param_id_7, const char *param_id_8, const char *param_id_9, const char *param_id_10, const float *param_value, const uint8_t *param_type, const uint16_t *param_count, const uint16_t *param_index, uint8_t param_num)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PARAM_VALUE_GROUP_LEN];
    _mav_put_uint8_t(buf, 250, param_num);
    _mav_put_float_array(buf, 0, param_value, 10);
    _mav_put_uint16_t_array(buf, 40, param_count, 10);
    _mav_put_uint16_t_array(buf, 60, param_index, 10);
    _mav_put_char_array(buf, 80, param_id_1, 16);
    _mav_put_char_array(buf, 96, param_id_2, 16);
    _mav_put_char_array(buf, 112, param_id_3, 16);
    _mav_put_char_array(buf, 128, param_id_4, 16);
    _mav_put_char_array(buf, 144, param_id_5, 16);
    _mav_put_char_array(buf, 160, param_id_6, 16);
    _mav_put_char_array(buf, 176, param_id_7, 16);
    _mav_put_char_array(buf, 192, param_id_8, 16);
    _mav_put_char_array(buf, 208, param_id_9, 16);
    _mav_put_char_array(buf, 224, param_id_10, 16);
    _mav_put_uint8_t_array(buf, 240, param_type, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_LEN);
#else
    mavlink_param_value_group_t packet;
    packet.param_num = param_num;
    mav_array_memcpy(packet.param_value, param_value, sizeof(float)*10);
    mav_array_memcpy(packet.param_count, param_count, sizeof(uint16_t)*10);
    mav_array_memcpy(packet.param_index, param_index, sizeof(uint16_t)*10);
    mav_array_memcpy(packet.param_id_1, param_id_1, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_2, param_id_2, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_3, param_id_3, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_4, param_id_4, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_5, param_id_5, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_6, param_id_6, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_7, param_id_7, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_8, param_id_8, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_9, param_id_9, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_10, param_id_10, sizeof(char)*16);
    mav_array_memcpy(packet.param_type, param_type, sizeof(uint8_t)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PARAM_VALUE_GROUP;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_MIN_LEN, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_LEN, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_CRC);
}

/**
 * @brief Pack a param_value_group message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param param_id_1  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_2  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_3  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_4  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_5  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_6  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_7  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_8  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_9  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_10  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_value  Onboard parameter value
 * @param param_type  Onboard parameter type.
 * @param param_count  Total number of onboard parameters
 * @param param_index  Index of this onboard parameter
 * @param param_num  Number of available parameters
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_param_value_group_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *param_id_1,const char *param_id_2,const char *param_id_3,const char *param_id_4,const char *param_id_5,const char *param_id_6,const char *param_id_7,const char *param_id_8,const char *param_id_9,const char *param_id_10,const float *param_value,const uint8_t *param_type,const uint16_t *param_count,const uint16_t *param_index,uint8_t param_num)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PARAM_VALUE_GROUP_LEN];
    _mav_put_uint8_t(buf, 250, param_num);
    _mav_put_float_array(buf, 0, param_value, 10);
    _mav_put_uint16_t_array(buf, 40, param_count, 10);
    _mav_put_uint16_t_array(buf, 60, param_index, 10);
    _mav_put_char_array(buf, 80, param_id_1, 16);
    _mav_put_char_array(buf, 96, param_id_2, 16);
    _mav_put_char_array(buf, 112, param_id_3, 16);
    _mav_put_char_array(buf, 128, param_id_4, 16);
    _mav_put_char_array(buf, 144, param_id_5, 16);
    _mav_put_char_array(buf, 160, param_id_6, 16);
    _mav_put_char_array(buf, 176, param_id_7, 16);
    _mav_put_char_array(buf, 192, param_id_8, 16);
    _mav_put_char_array(buf, 208, param_id_9, 16);
    _mav_put_char_array(buf, 224, param_id_10, 16);
    _mav_put_uint8_t_array(buf, 240, param_type, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_LEN);
#else
    mavlink_param_value_group_t packet;
    packet.param_num = param_num;
    mav_array_memcpy(packet.param_value, param_value, sizeof(float)*10);
    mav_array_memcpy(packet.param_count, param_count, sizeof(uint16_t)*10);
    mav_array_memcpy(packet.param_index, param_index, sizeof(uint16_t)*10);
    mav_array_memcpy(packet.param_id_1, param_id_1, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_2, param_id_2, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_3, param_id_3, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_4, param_id_4, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_5, param_id_5, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_6, param_id_6, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_7, param_id_7, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_8, param_id_8, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_9, param_id_9, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_10, param_id_10, sizeof(char)*16);
    mav_array_memcpy(packet.param_type, param_type, sizeof(uint8_t)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PARAM_VALUE_GROUP;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_MIN_LEN, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_LEN, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_CRC);
}

/**
 * @brief Encode a param_value_group struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param param_value_group C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_param_value_group_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_param_value_group_t* param_value_group)
{
    return mavlink_msg_param_value_group_pack(system_id, component_id, msg, param_value_group->param_id_1, param_value_group->param_id_2, param_value_group->param_id_3, param_value_group->param_id_4, param_value_group->param_id_5, param_value_group->param_id_6, param_value_group->param_id_7, param_value_group->param_id_8, param_value_group->param_id_9, param_value_group->param_id_10, param_value_group->param_value, param_value_group->param_type, param_value_group->param_count, param_value_group->param_index, param_value_group->param_num);
}

/**
 * @brief Encode a param_value_group struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param param_value_group C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_param_value_group_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_param_value_group_t* param_value_group)
{
    return mavlink_msg_param_value_group_pack_chan(system_id, component_id, chan, msg, param_value_group->param_id_1, param_value_group->param_id_2, param_value_group->param_id_3, param_value_group->param_id_4, param_value_group->param_id_5, param_value_group->param_id_6, param_value_group->param_id_7, param_value_group->param_id_8, param_value_group->param_id_9, param_value_group->param_id_10, param_value_group->param_value, param_value_group->param_type, param_value_group->param_count, param_value_group->param_index, param_value_group->param_num);
}

/**
 * @brief Send a param_value_group message
 * @param chan MAVLink channel to send the message
 *
 * @param param_id_1  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_2  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_3  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_4  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_5  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_6  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_7  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_8  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_9  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_id_10  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 * @param param_value  Onboard parameter value
 * @param param_type  Onboard parameter type.
 * @param param_count  Total number of onboard parameters
 * @param param_index  Index of this onboard parameter
 * @param param_num  Number of available parameters
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_param_value_group_send(mavlink_channel_t chan, const char *param_id_1, const char *param_id_2, const char *param_id_3, const char *param_id_4, const char *param_id_5, const char *param_id_6, const char *param_id_7, const char *param_id_8, const char *param_id_9, const char *param_id_10, const float *param_value, const uint8_t *param_type, const uint16_t *param_count, const uint16_t *param_index, uint8_t param_num)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PARAM_VALUE_GROUP_LEN];
    _mav_put_uint8_t(buf, 250, param_num);
    _mav_put_float_array(buf, 0, param_value, 10);
    _mav_put_uint16_t_array(buf, 40, param_count, 10);
    _mav_put_uint16_t_array(buf, 60, param_index, 10);
    _mav_put_char_array(buf, 80, param_id_1, 16);
    _mav_put_char_array(buf, 96, param_id_2, 16);
    _mav_put_char_array(buf, 112, param_id_3, 16);
    _mav_put_char_array(buf, 128, param_id_4, 16);
    _mav_put_char_array(buf, 144, param_id_5, 16);
    _mav_put_char_array(buf, 160, param_id_6, 16);
    _mav_put_char_array(buf, 176, param_id_7, 16);
    _mav_put_char_array(buf, 192, param_id_8, 16);
    _mav_put_char_array(buf, 208, param_id_9, 16);
    _mav_put_char_array(buf, 224, param_id_10, 16);
    _mav_put_uint8_t_array(buf, 240, param_type, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PARAM_VALUE_GROUP, buf, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_MIN_LEN, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_LEN, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_CRC);
#else
    mavlink_param_value_group_t packet;
    packet.param_num = param_num;
    mav_array_memcpy(packet.param_value, param_value, sizeof(float)*10);
    mav_array_memcpy(packet.param_count, param_count, sizeof(uint16_t)*10);
    mav_array_memcpy(packet.param_index, param_index, sizeof(uint16_t)*10);
    mav_array_memcpy(packet.param_id_1, param_id_1, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_2, param_id_2, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_3, param_id_3, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_4, param_id_4, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_5, param_id_5, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_6, param_id_6, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_7, param_id_7, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_8, param_id_8, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_9, param_id_9, sizeof(char)*16);
    mav_array_memcpy(packet.param_id_10, param_id_10, sizeof(char)*16);
    mav_array_memcpy(packet.param_type, param_type, sizeof(uint8_t)*10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PARAM_VALUE_GROUP, (const char *)&packet, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_MIN_LEN, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_LEN, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_CRC);
#endif
}

/**
 * @brief Send a param_value_group message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_param_value_group_send_struct(mavlink_channel_t chan, const mavlink_param_value_group_t* param_value_group)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_param_value_group_send(chan, param_value_group->param_id_1, param_value_group->param_id_2, param_value_group->param_id_3, param_value_group->param_id_4, param_value_group->param_id_5, param_value_group->param_id_6, param_value_group->param_id_7, param_value_group->param_id_8, param_value_group->param_id_9, param_value_group->param_id_10, param_value_group->param_value, param_value_group->param_type, param_value_group->param_count, param_value_group->param_index, param_value_group->param_num);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PARAM_VALUE_GROUP, (const char *)param_value_group, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_MIN_LEN, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_LEN, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_CRC);
#endif
}

#if MAVLINK_MSG_ID_PARAM_VALUE_GROUP_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_param_value_group_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *param_id_1, const char *param_id_2, const char *param_id_3, const char *param_id_4, const char *param_id_5, const char *param_id_6, const char *param_id_7, const char *param_id_8, const char *param_id_9, const char *param_id_10, const float *param_value, const uint8_t *param_type, const uint16_t *param_count, const uint16_t *param_index, uint8_t param_num)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 250, param_num);
    _mav_put_float_array(buf, 0, param_value, 10);
    _mav_put_uint16_t_array(buf, 40, param_count, 10);
    _mav_put_uint16_t_array(buf, 60, param_index, 10);
    _mav_put_char_array(buf, 80, param_id_1, 16);
    _mav_put_char_array(buf, 96, param_id_2, 16);
    _mav_put_char_array(buf, 112, param_id_3, 16);
    _mav_put_char_array(buf, 128, param_id_4, 16);
    _mav_put_char_array(buf, 144, param_id_5, 16);
    _mav_put_char_array(buf, 160, param_id_6, 16);
    _mav_put_char_array(buf, 176, param_id_7, 16);
    _mav_put_char_array(buf, 192, param_id_8, 16);
    _mav_put_char_array(buf, 208, param_id_9, 16);
    _mav_put_char_array(buf, 224, param_id_10, 16);
    _mav_put_uint8_t_array(buf, 240, param_type, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PARAM_VALUE_GROUP, buf, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_MIN_LEN, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_LEN, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_CRC);
#else
    mavlink_param_value_group_t *packet = (mavlink_param_value_group_t *)msgbuf;
    packet->param_num = param_num;
    mav_array_memcpy(packet->param_value, param_value, sizeof(float)*10);
    mav_array_memcpy(packet->param_count, param_count, sizeof(uint16_t)*10);
    mav_array_memcpy(packet->param_index, param_index, sizeof(uint16_t)*10);
    mav_array_memcpy(packet->param_id_1, param_id_1, sizeof(char)*16);
    mav_array_memcpy(packet->param_id_2, param_id_2, sizeof(char)*16);
    mav_array_memcpy(packet->param_id_3, param_id_3, sizeof(char)*16);
    mav_array_memcpy(packet->param_id_4, param_id_4, sizeof(char)*16);
    mav_array_memcpy(packet->param_id_5, param_id_5, sizeof(char)*16);
    mav_array_memcpy(packet->param_id_6, param_id_6, sizeof(char)*16);
    mav_array_memcpy(packet->param_id_7, param_id_7, sizeof(char)*16);
    mav_array_memcpy(packet->param_id_8, param_id_8, sizeof(char)*16);
    mav_array_memcpy(packet->param_id_9, param_id_9, sizeof(char)*16);
    mav_array_memcpy(packet->param_id_10, param_id_10, sizeof(char)*16);
    mav_array_memcpy(packet->param_type, param_type, sizeof(uint8_t)*10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PARAM_VALUE_GROUP, (const char *)packet, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_MIN_LEN, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_LEN, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_CRC);
#endif
}
#endif

#endif

// MESSAGE PARAM_VALUE_GROUP UNPACKING


/**
 * @brief Get field param_id_1 from param_value_group message
 *
 * @return  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 */
static inline uint16_t mavlink_msg_param_value_group_get_param_id_1(const mavlink_message_t* msg, char *param_id_1)
{
    return _MAV_RETURN_char_array(msg, param_id_1, 16,  80);
}

/**
 * @brief Get field param_id_2 from param_value_group message
 *
 * @return  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 */
static inline uint16_t mavlink_msg_param_value_group_get_param_id_2(const mavlink_message_t* msg, char *param_id_2)
{
    return _MAV_RETURN_char_array(msg, param_id_2, 16,  96);
}

/**
 * @brief Get field param_id_3 from param_value_group message
 *
 * @return  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 */
static inline uint16_t mavlink_msg_param_value_group_get_param_id_3(const mavlink_message_t* msg, char *param_id_3)
{
    return _MAV_RETURN_char_array(msg, param_id_3, 16,  112);
}

/**
 * @brief Get field param_id_4 from param_value_group message
 *
 * @return  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 */
static inline uint16_t mavlink_msg_param_value_group_get_param_id_4(const mavlink_message_t* msg, char *param_id_4)
{
    return _MAV_RETURN_char_array(msg, param_id_4, 16,  128);
}

/**
 * @brief Get field param_id_5 from param_value_group message
 *
 * @return  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 */
static inline uint16_t mavlink_msg_param_value_group_get_param_id_5(const mavlink_message_t* msg, char *param_id_5)
{
    return _MAV_RETURN_char_array(msg, param_id_5, 16,  144);
}

/**
 * @brief Get field param_id_6 from param_value_group message
 *
 * @return  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 */
static inline uint16_t mavlink_msg_param_value_group_get_param_id_6(const mavlink_message_t* msg, char *param_id_6)
{
    return _MAV_RETURN_char_array(msg, param_id_6, 16,  160);
}

/**
 * @brief Get field param_id_7 from param_value_group message
 *
 * @return  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 */
static inline uint16_t mavlink_msg_param_value_group_get_param_id_7(const mavlink_message_t* msg, char *param_id_7)
{
    return _MAV_RETURN_char_array(msg, param_id_7, 16,  176);
}

/**
 * @brief Get field param_id_8 from param_value_group message
 *
 * @return  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 */
static inline uint16_t mavlink_msg_param_value_group_get_param_id_8(const mavlink_message_t* msg, char *param_id_8)
{
    return _MAV_RETURN_char_array(msg, param_id_8, 16,  192);
}

/**
 * @brief Get field param_id_9 from param_value_group message
 *
 * @return  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 */
static inline uint16_t mavlink_msg_param_value_group_get_param_id_9(const mavlink_message_t* msg, char *param_id_9)
{
    return _MAV_RETURN_char_array(msg, param_id_9, 16,  208);
}

/**
 * @brief Get field param_id_10 from param_value_group message
 *
 * @return  Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
 */
static inline uint16_t mavlink_msg_param_value_group_get_param_id_10(const mavlink_message_t* msg, char *param_id_10)
{
    return _MAV_RETURN_char_array(msg, param_id_10, 16,  224);
}

/**
 * @brief Get field param_value from param_value_group message
 *
 * @return  Onboard parameter value
 */
static inline uint16_t mavlink_msg_param_value_group_get_param_value(const mavlink_message_t* msg, float *param_value)
{
    return _MAV_RETURN_float_array(msg, param_value, 10,  0);
}

/**
 * @brief Get field param_type from param_value_group message
 *
 * @return  Onboard parameter type.
 */
static inline uint16_t mavlink_msg_param_value_group_get_param_type(const mavlink_message_t* msg, uint8_t *param_type)
{
    return _MAV_RETURN_uint8_t_array(msg, param_type, 10,  240);
}

/**
 * @brief Get field param_count from param_value_group message
 *
 * @return  Total number of onboard parameters
 */
static inline uint16_t mavlink_msg_param_value_group_get_param_count(const mavlink_message_t* msg, uint16_t *param_count)
{
    return _MAV_RETURN_uint16_t_array(msg, param_count, 10,  40);
}

/**
 * @brief Get field param_index from param_value_group message
 *
 * @return  Index of this onboard parameter
 */
static inline uint16_t mavlink_msg_param_value_group_get_param_index(const mavlink_message_t* msg, uint16_t *param_index)
{
    return _MAV_RETURN_uint16_t_array(msg, param_index, 10,  60);
}

/**
 * @brief Get field param_num from param_value_group message
 *
 * @return  Number of available parameters
 */
static inline uint8_t mavlink_msg_param_value_group_get_param_num(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  250);
}

/**
 * @brief Decode a param_value_group message into a struct
 *
 * @param msg The message to decode
 * @param param_value_group C-struct to decode the message contents into
 */
static inline void mavlink_msg_param_value_group_decode(const mavlink_message_t* msg, mavlink_param_value_group_t* param_value_group)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_param_value_group_get_param_value(msg, param_value_group->param_value);
    mavlink_msg_param_value_group_get_param_count(msg, param_value_group->param_count);
    mavlink_msg_param_value_group_get_param_index(msg, param_value_group->param_index);
    mavlink_msg_param_value_group_get_param_id_1(msg, param_value_group->param_id_1);
    mavlink_msg_param_value_group_get_param_id_2(msg, param_value_group->param_id_2);
    mavlink_msg_param_value_group_get_param_id_3(msg, param_value_group->param_id_3);
    mavlink_msg_param_value_group_get_param_id_4(msg, param_value_group->param_id_4);
    mavlink_msg_param_value_group_get_param_id_5(msg, param_value_group->param_id_5);
    mavlink_msg_param_value_group_get_param_id_6(msg, param_value_group->param_id_6);
    mavlink_msg_param_value_group_get_param_id_7(msg, param_value_group->param_id_7);
    mavlink_msg_param_value_group_get_param_id_8(msg, param_value_group->param_id_8);
    mavlink_msg_param_value_group_get_param_id_9(msg, param_value_group->param_id_9);
    mavlink_msg_param_value_group_get_param_id_10(msg, param_value_group->param_id_10);
    mavlink_msg_param_value_group_get_param_type(msg, param_value_group->param_type);
    param_value_group->param_num = mavlink_msg_param_value_group_get_param_num(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PARAM_VALUE_GROUP_LEN? msg->len : MAVLINK_MSG_ID_PARAM_VALUE_GROUP_LEN;
        memset(param_value_group, 0, MAVLINK_MSG_ID_PARAM_VALUE_GROUP_LEN);
    memcpy(param_value_group, _MAV_PAYLOAD(msg), len);
#endif
}
