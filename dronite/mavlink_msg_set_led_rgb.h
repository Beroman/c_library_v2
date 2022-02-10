#pragma once
// MESSAGE SET_LED_RGB PACKING

#define MAVLINK_MSG_ID_SET_LED_RGB 13001


typedef struct __mavlink_set_led_rgb_t {
 uint8_t r; /*<  Red*/
 uint8_t g; /*<  Green*/
 uint8_t b; /*<  Blue*/
} mavlink_set_led_rgb_t;

#define MAVLINK_MSG_ID_SET_LED_RGB_LEN 3
#define MAVLINK_MSG_ID_SET_LED_RGB_MIN_LEN 3
#define MAVLINK_MSG_ID_13001_LEN 3
#define MAVLINK_MSG_ID_13001_MIN_LEN 3

#define MAVLINK_MSG_ID_SET_LED_RGB_CRC 193
#define MAVLINK_MSG_ID_13001_CRC 193



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SET_LED_RGB { \
    13001, \
    "SET_LED_RGB", \
    3, \
    {  { "r", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_set_led_rgb_t, r) }, \
         { "g", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_set_led_rgb_t, g) }, \
         { "b", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_set_led_rgb_t, b) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SET_LED_RGB { \
    "SET_LED_RGB", \
    3, \
    {  { "r", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_set_led_rgb_t, r) }, \
         { "g", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_set_led_rgb_t, g) }, \
         { "b", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_set_led_rgb_t, b) }, \
         } \
}
#endif

/**
 * @brief Pack a set_led_rgb message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param r  Red
 * @param g  Green
 * @param b  Blue
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_led_rgb_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t r, uint8_t g, uint8_t b)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_LED_RGB_LEN];
    _mav_put_uint8_t(buf, 0, r);
    _mav_put_uint8_t(buf, 1, g);
    _mav_put_uint8_t(buf, 2, b);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_LED_RGB_LEN);
#else
    mavlink_set_led_rgb_t packet;
    packet.r = r;
    packet.g = g;
    packet.b = b;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_LED_RGB_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_LED_RGB;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_LED_RGB_MIN_LEN, MAVLINK_MSG_ID_SET_LED_RGB_LEN, MAVLINK_MSG_ID_SET_LED_RGB_CRC);
}

/**
 * @brief Pack a set_led_rgb message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param r  Red
 * @param g  Green
 * @param b  Blue
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_led_rgb_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t r,uint8_t g,uint8_t b)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_LED_RGB_LEN];
    _mav_put_uint8_t(buf, 0, r);
    _mav_put_uint8_t(buf, 1, g);
    _mav_put_uint8_t(buf, 2, b);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_LED_RGB_LEN);
#else
    mavlink_set_led_rgb_t packet;
    packet.r = r;
    packet.g = g;
    packet.b = b;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_LED_RGB_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_LED_RGB;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SET_LED_RGB_MIN_LEN, MAVLINK_MSG_ID_SET_LED_RGB_LEN, MAVLINK_MSG_ID_SET_LED_RGB_CRC);
}

/**
 * @brief Encode a set_led_rgb struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param set_led_rgb C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_led_rgb_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_set_led_rgb_t* set_led_rgb)
{
    return mavlink_msg_set_led_rgb_pack(system_id, component_id, msg, set_led_rgb->r, set_led_rgb->g, set_led_rgb->b);
}

/**
 * @brief Encode a set_led_rgb struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param set_led_rgb C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_led_rgb_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_set_led_rgb_t* set_led_rgb)
{
    return mavlink_msg_set_led_rgb_pack_chan(system_id, component_id, chan, msg, set_led_rgb->r, set_led_rgb->g, set_led_rgb->b);
}

/**
 * @brief Send a set_led_rgb message
 * @param chan MAVLink channel to send the message
 *
 * @param r  Red
 * @param g  Green
 * @param b  Blue
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_led_rgb_send(mavlink_channel_t chan, uint8_t r, uint8_t g, uint8_t b)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_LED_RGB_LEN];
    _mav_put_uint8_t(buf, 0, r);
    _mav_put_uint8_t(buf, 1, g);
    _mav_put_uint8_t(buf, 2, b);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_LED_RGB, buf, MAVLINK_MSG_ID_SET_LED_RGB_MIN_LEN, MAVLINK_MSG_ID_SET_LED_RGB_LEN, MAVLINK_MSG_ID_SET_LED_RGB_CRC);
#else
    mavlink_set_led_rgb_t packet;
    packet.r = r;
    packet.g = g;
    packet.b = b;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_LED_RGB, (const char *)&packet, MAVLINK_MSG_ID_SET_LED_RGB_MIN_LEN, MAVLINK_MSG_ID_SET_LED_RGB_LEN, MAVLINK_MSG_ID_SET_LED_RGB_CRC);
#endif
}

/**
 * @brief Send a set_led_rgb message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_set_led_rgb_send_struct(mavlink_channel_t chan, const mavlink_set_led_rgb_t* set_led_rgb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_set_led_rgb_send(chan, set_led_rgb->r, set_led_rgb->g, set_led_rgb->b);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_LED_RGB, (const char *)set_led_rgb, MAVLINK_MSG_ID_SET_LED_RGB_MIN_LEN, MAVLINK_MSG_ID_SET_LED_RGB_LEN, MAVLINK_MSG_ID_SET_LED_RGB_CRC);
#endif
}

#if MAVLINK_MSG_ID_SET_LED_RGB_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_set_led_rgb_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t r, uint8_t g, uint8_t b)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, r);
    _mav_put_uint8_t(buf, 1, g);
    _mav_put_uint8_t(buf, 2, b);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_LED_RGB, buf, MAVLINK_MSG_ID_SET_LED_RGB_MIN_LEN, MAVLINK_MSG_ID_SET_LED_RGB_LEN, MAVLINK_MSG_ID_SET_LED_RGB_CRC);
#else
    mavlink_set_led_rgb_t *packet = (mavlink_set_led_rgb_t *)msgbuf;
    packet->r = r;
    packet->g = g;
    packet->b = b;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_LED_RGB, (const char *)packet, MAVLINK_MSG_ID_SET_LED_RGB_MIN_LEN, MAVLINK_MSG_ID_SET_LED_RGB_LEN, MAVLINK_MSG_ID_SET_LED_RGB_CRC);
#endif
}
#endif

#endif

// MESSAGE SET_LED_RGB UNPACKING


/**
 * @brief Get field r from set_led_rgb message
 *
 * @return  Red
 */
static inline uint8_t mavlink_msg_set_led_rgb_get_r(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field g from set_led_rgb message
 *
 * @return  Green
 */
static inline uint8_t mavlink_msg_set_led_rgb_get_g(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field b from set_led_rgb message
 *
 * @return  Blue
 */
static inline uint8_t mavlink_msg_set_led_rgb_get_b(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a set_led_rgb message into a struct
 *
 * @param msg The message to decode
 * @param set_led_rgb C-struct to decode the message contents into
 */
static inline void mavlink_msg_set_led_rgb_decode(const mavlink_message_t* msg, mavlink_set_led_rgb_t* set_led_rgb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    set_led_rgb->r = mavlink_msg_set_led_rgb_get_r(msg);
    set_led_rgb->g = mavlink_msg_set_led_rgb_get_g(msg);
    set_led_rgb->b = mavlink_msg_set_led_rgb_get_b(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SET_LED_RGB_LEN? msg->len : MAVLINK_MSG_ID_SET_LED_RGB_LEN;
        memset(set_led_rgb, 0, MAVLINK_MSG_ID_SET_LED_RGB_LEN);
    memcpy(set_led_rgb, _MAV_PAYLOAD(msg), len);
#endif
}
