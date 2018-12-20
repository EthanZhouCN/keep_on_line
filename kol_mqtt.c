
#include "kol_mqtt.h"


static uint16_t make_connect_pkg(uint8_t *buf)
{
	uint8_t *source_buff = buf;
	
	*buf = PKT_CONNECT << 4;
	
}
uint16_t make_pkg(uint8_t type, uint8_t *buf)
{
	
	switch(type)
	{
		case PKT_CONNECT:
			make_connect_pkg(buf);	
			break;
			
		default:
			break;
	}
}
