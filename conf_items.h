#ifndef _VERBALEYES_CONF_ITEMS;
#define _VERBALEYES_CONF_ITEMS;

// Structure for creating a conf item
struct config {
	int addr;
	int len;
	char *name;
};



// Creates config item for SSID
struct config conf_ssid = {
	0,
	32,
	"ssid"
};

// Creates config item for SSID key
struct config conf_ssidKey = {
	32,
	63,
	"ssidKey"
};

// Creates config item for websocket server
struct config conf_host = {
	95,
	64,
	"host"
};

// Creates config item for websocket servers port
struct config conf_port = {
	159,
	5,
	"port"
};

// Creates config item for verbaleyes project name
struct config conf_proj = {
	164,
	32,
	"proj"
};

// Creates config item for verbaleyes project password
struct config conf_projKey = {
	196,
	64,
	"projKey"
};

// Creates config item for maximum scroll speed
struct config conf_speedMax = {
	260,
	7,
	"speedMax"
};

// Creates config item for minimum scroll speed
struct config conf_speedMin = {
	267,
	7,
	"speedMin"
};

// Creates config item for deadzone around zero
struct config conf_speedDeadzone = {
	274,
	7,
	"speedDeadzone"
};

// Creates config item for calibration at analog inputs minimum value
struct config conf_calLow = {
	281,
	4,
	"calLow"
};

// Creates config item for calibration at analog inputs maximum value
struct config conf_calHigh = {
	285,
	4,
	"calHigh"
};

// Creates config item for calibration of sensitivity for jitter
struct config conf_calIgnorejitter = {
	289,
	4,
	"calIgnorejitter"
};

// Creates config item for maximum interval of sending data to server
struct config conf_calInterval = {
	293,
	4,
	"calInterval"
};



// A list of all conf items
struct config *confList[] = {
	&conf_ssid,
	&conf_ssidKey,
	&conf_host,
	&conf_port,
	&conf_proj,
	&conf_projKey,
	&conf_speedMax,
	&conf_speedMin,
	&conf_speedDeadzone,
	&conf_calLow,
	&conf_calHigh,
	&conf_calIgnorejitter,
	&conf_calInterval
};

// Number of conf items
#define confListLength sizeof confList / sizeof confList[0]

#endif