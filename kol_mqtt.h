#ifndef _KOL_PKT_H_
#define _KOL_PKT_H_
//mqtt
enum PacketType {
	PKT_CONNECT = 1, /**< 连接请求数据包 */
	PKT_CONNACK,	 /**< 连接确认数据包 */
	PKT_PUBLISH,	 /**< 发布数据数据包 */
	PKT_PUBACK, 	 /**< 发布确认数据包 */
	PKT_PUBREC, 	 /**< 发布数据已接收数据包，Qos 2时，回复MQTT_PKT_PUBLISH */
	PKT_PUBREL, 	 /**< 发布数据释放数据包， Qos 2时，回复MQTT_PKT_PUBREC */
	PKT_PUBCOMP,	 /**< 发布完成数据包， Qos 2时，回复MQTT_PKT_PUBREL */
	PKT_SUBSCRIBE,	 /**< 订阅数据包 */
	PKT_SUBACK, 	 /**< 订阅确认数据包 */
	PKT_UNSUBSCRIBE, /**< 取消订阅数据包 */
	PKT_UNSUBACK,	 /**< 取消订阅确认数据包 */
	PKT_PINGREQ,	 /**< ping 数据包 */
	PKT_PINGRESP,	 /**< ping 响应数据包 */
	PKT_DISCONNECT	 /**< 断开连接数据包 */

};



#endif /* _KOL_PKT_H_ */
