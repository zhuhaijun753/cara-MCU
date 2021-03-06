#ifndef		__IO_CFG_H__
#define		__IO_CFG_H__

#include "mid_pin.h"
#include "function_cfg.h"
#include "mid_filter.h"

/**************************************/
/*Core power */
/*********************************************/
#define  PIN_CORE_POWER				    CFG_ON
#define  PIN_IGN_IN						CFG_ON
/**********************************************/
#define  SIG_IN_HEAD_LIGHT_CONDITON     CFG_ON 
#define  SIG_IN_RIGHT_TURN				CFG_ON
#define  SIG_IN_LEFT_TURN				CFG_ON
#define  SIG_IN_DIPPLED_LIGHT			CFG_ON
#define  SIG_IN_FAR_BEAM				CFG_ON
#define  SIG_IN_FRONT_FOG				CFG_ON
#define  SIG_IN_REAR_FOG				CFG_ON
#define  SIG_IN_PARK					CFG_ON
#define  SIG_IN_POSITION_LIGHT			CFG_ON
/*********************************************/
//AD io config
/*********************************************/
/* DOOR */
#define  SIG_IN_DOORS					CFG_OFF
/* ElectronSecurity */
#define  SIG_IN_EAS						CFG_ON	
/* AIR bag */
#define  SIG_IN_MAIN_AIRBAG				CFG_ON
#define  SIG_IN_PASSENGER_AIRBAG		CFG_OFF
/* belt */
#define  SIG_IN_MAIN_BELT				CFG_ON
#define  SIG_IN_PASSENGER_BELT			CFG_OFF
/* safe */
#define  SIG_IN_BRAKE					CFG_ON
#define  SIG_IN_WASH_LIQUID_LOW			CFG_ON
#define  SIG_IN_CHARGE_INDICATE			CFG_ON
#define  SIG_IN_BATTERY_CHARGE			CFG_ON
#define  SIG_IN_AIRBAG					CFG_ON
#define  SIG_IN_KEY						CFG_ON	
#define  SIG_VIDEO_INPUT				CFG_ON
#define  SIG_BACKLIGHT_EN				CFG_ON	  /* backlight io*/
/*---------------------------------------------------------------*/
#define  SIG_OUT_LEFT_LED				CFG_OFF
#define  SIG_OUT_RIGHT_LED				CFG_OFF
#define  SIG_OUT_FAR_BEAM_LED			CFG_OFF
#define  SIG_OUT_LOW_BEAM_LED			CFG_OFF
#define  SIG_OUT_FRONT_FOG_LED			CFG_OFF
#define  SIG_OUT_REAR_FOG_LED			CFG_OFF
#define  SIG_OUT_HEAD_LIGHT_LED			CFG_OFF
#define  SIG_OUT_POSITION_LED			CFG_OFF
#define  SIG_OUT_WASH_LOW_LED			CFG_OFF
#define  SIG_OUT_EAT_LED				CFG_OFF
#define  SIG_OUT_BAT_CHARGE_LED			CFG_OFF
#define  SIG_OUT_PARK_LED				CFG_OFF
#define  SIG_OUT_ABS_LED				CFG_OFF
#define  SIG_OUT_MAIN_BELT_LED			CFG_OFF
#define  SIG_OUT_AIRBAG_LED				CFG_OFF
#define  SIG_OUT_BRAKE_LED				CFG_OFF
#define  SIG_A20_START_UP				CFG_ON
/*-------------------------------------------------------------*/

typedef enum{
	PIN_IN_IGN = 0,
	PIN_IN_OIL_PRESS,
	PIN_IN_GUARD,
	PIN_IN_CHARGE,
	PIN_IN_ENGINE_GUARD,
	PIN_IN_MAIN_BELT,
	PIN_IN_ALS_ERROR,
	PIN_IN_BRAKE_WARNING,
	PIN_IN_KEY0,
	PIN_IN_KEY1,
	PIN_IN_KEY2,
	PIN_IN_REVERSE_SIGNAL,
	PIN_IN_REVERSE_RADAR,
	PIN_IN_VIDEO_MPOUT,
	PIN_IN_VIDEO_INTREQ,
	PIN_IN_ALL
}PinIO_IN_e;

typedef enum{
	PIN_OUT_VIDEO_PWDN = 0,
	PIN_OUT_VIDEO_RST,
	PIN_OUT_BACKLIGHT,
	PIN_OUT_ALL
}PinIO_OUT_e;

/******************************************************************/
extern  io_type_t	    pin_io_in[PIN_IN_ALL];
extern  pin_filter_t    pin_filter_in[PIN_IN_ALL];

#endif 
