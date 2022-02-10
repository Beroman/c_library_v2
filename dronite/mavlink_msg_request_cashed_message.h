#pragma once
// MESSAGE REQUEST_CASHED_MESSAGE PACKING

#define MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE 13002


typedef struct __mavlink_request_cashed_message_t {
 uint16_t frequency_hop; /*<  Number of frequency hop*/
 uint16_t hop_delay; /*< [ms] Delay for hop*/
} mavlink_request_cashed_message_t;

#define MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_LEN 4
#define MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_MIN_LEN 4
#define MAVLINK_MSG_ID_13002_LEN 4
#define MAVLINK_MSG_ID_13002_MIN_LEN 4

#define MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_CRC 34
#define MAVLINK_MSG_ID_13002_CRC 34



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_REQUEST_CASHED_MESSAGE { \
    13002, \
    "REQUEST_CASHED_MESSAGE", \
    2, \
    {  { "frequency_hop", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_request_cashed_message_t, frequency_hop) }, \
         { "hop_delay", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_request_cashed_message_t, hop_delay) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_REQUEST_CASHED_MESSAGE { \
    "REQUEST_CASHED_MESSAGE", \
    2, \
    {  { "frequency_hop", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_request_cashed_message_t, frequency_hop) }, \
         { "hop_delay", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_request_cashed_message_t, hop_delay) }, \
         } \
}
#endif

/**
 * @brief Pack a request_cashed_message message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param frequency_hop  Number of frequency hop
 * @param hop_delay [ms] Delay for hop
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_request_cashed_message_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t frequency_hop, uint16_t hop_delay)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_LEN];
    _mav_put_uint16_t(buf, 0, frequency_hop);
    _mav_put_uint16_t(buf, 2, hop_delay);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_LEN);
#else
    mavlink_request_cashed_message_t packet;
    packet.frequency_hop = frequency_hop;
    packet.hop_delay = hop_delay;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_LEN, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_CRC);
}

/**
 * @brief Pack a request_cashed_message message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param frequency_hop  Number of frequency hop
 * @param hop_delay [ms] Delay for hop
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_request_cashed_message_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t frequency_hop,uint16_t hop_delay)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_LEN];
    _mav_put_uint16_t(buf, 0, frequency_hop);
    _mav_put_uint16_t(buf, 2, hop_delay);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_LEN);
#else
    mavlink_request_cashed_message_t packet;
    packet.frequency_hop = frequency_hop;
    packet.hop_delay = hop_delay;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_LEN, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_CRC);
}

/**
 * @brief Encode a request_cashed_message struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param request_cashed_message C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_request_cashed_message_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_request_cashed_message_t* request_cashed_message)
{
    return mavlink_msg_request_cashed_message_pack(system_id, component_id, msg, request_cashed_message->frequency_hop, request_cashed_message->hop_delay);
}

/**
 * @brief Encode a request_cashed_message struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param request_cashed_message C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_request_cashed_message_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_request_cashed_message_t* request_cashed_message)
{
    return mavlink_msg_request_cashed_message_pack_chan(system_id, component_id, chan, msg, request_cashed_message->frequency_hop, request_cashed_message->hop_delay);
}

/**
 * @brief Send a request_cashed_message message
 * @param chan MAVLink channel to send the message
 *
 * @param frequency_hop  Number of frequency hop
 * @param hop_delay [ms] Delay for hop
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_request_cashed_message_send(mavlink_channel_t chan, uint16_t frequency_hop, uint16_t hop_delay)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_LEN];
    _mav_put_uint16_t(buf, 0, frequency_hop);
    _mav_put_uint16_t(buf, 2, hop_delay);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE, buf, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_LEN, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_CRC);
#else
    mavlink_request_cashed_message_t packet;
    packet.frequency_hop = frequency_hop;
    packet.hop_delay = hop_delay;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE, (const char *)&packet, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_LEN, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_CRC);
#endif
}

/**
 * @brief Send a request_cashed_message message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_request_cashed_message_send_struct(mavlink_channel_t chan, const mavlink_request_cashed_message_t* request_cashed_message)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_request_cashed_message_send(chan, request_cashed_message->frequency_hop, request_cashed_message->hop_delay);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE, (const char *)request_cashed_message, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_LEN, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_CRC);
#endif
}

#if MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_request_cashed_message_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t frequency_hop, uint16_t hop_delay)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, frequency_hop);
    _mav_put_uint16_t(buf, 2, hop_delay);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE, buf, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_LEN, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_CRC);
#else
    mavlink_request_cashed_message_t *packet = (mavlink_request_cashed_message_t *)msgbuf;
    packet->frequency_hop = frequency_hop;
    packet->hop_delay = hop_delay;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE, (const char *)packet, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_LEN, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_CRC);
#endif
}
#endif

#endif

// MESSAGE REQUEST_CASHED_MESSAGE UNPACKING


/**
 * @brief Get field frequency_hop from request_cashed_message message
 *
 * @return  Number of frequency hop
 */
static inline uint16_t mavlink_msg_request_cashed_message_get_frequency_hop(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field hop_delay from request_cashed_message message
 *
 * @return [ms] Delay for hop
 */
static inline uint16_t mavlink_msg_request_cashed_message_get_hop_delay(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Decode a request_cashed_message message into a struct
 *
 * @param msg The message to decode
 * @param request_cashed_message C-struct to decode the message contents into
 */
static inline void mavlink_msg_request_cashed_message_decode(const mavlink_message_t* msg, mavlink_request_cashed_message_t* request_cashed_message)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    request_cashed_message->frequency_hop = mavlink_msg_request_cashed_message_get_frequency_hop(msg);
    request_cashed_message->hop_delay = mavlink_msg_request_cashed_message_get_hop_delay(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_LEN? msg->len : MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_LEN;
        memset(request_cashed_message, 0, MAVLINK_MSG_ID_REQUEST_CASHED_MESSAGE_LEN);
    memcpy(request_cashed_message, _MAV_PAYLOAD(msg), len);
#endif
}
