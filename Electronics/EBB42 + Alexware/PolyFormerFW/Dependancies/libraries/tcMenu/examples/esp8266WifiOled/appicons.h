
#define APPICON_SETTINGS_WIDTH 24
#define APPICON_SETTINGS_HEIGHT 24
static unsigned char appIconSettings[] = {
        0x00, 0x81, 0x00, 0xc0, 0xe3, 0x03, 0xc0, 0xe3, 0x03, 0xc0, 0xf7, 0x03,
        0xc0, 0xff, 0x01, 0xc0, 0xff, 0x03, 0xee, 0xf7, 0x7f, 0xfe, 0x81, 0x7f,
        0xff, 0x00, 0xff, 0x7e, 0x00, 0x7e, 0x7e, 0x00, 0x1e, 0x78, 0x00, 0x1e,
        0x70, 0x00, 0x1e, 0x7c, 0x00, 0x3e, 0x7e, 0x00, 0xfe, 0xfe, 0x00, 0xff,
        0xfe, 0x81, 0x7f, 0xfe, 0xf7, 0x77, 0xc0, 0xff, 0x03, 0x80, 0xff, 0x03,
        0xc0, 0xef, 0x03, 0xc0, 0xc7, 0x03, 0xc0, 0xc3, 0x03, 0x00, 0x83, 0x00 };

#define APPICON_HEAT_WIDTH 24
#define APPICON_HEAT_HEIGHT 24
static unsigned char appIconHeatOff[] = {
        0x1c, 0x1c, 0x0c, 0x3e, 0x3e, 0x1e, 0x7f, 0x7f, 0x3f, 0x7f, 0x7f, 0x3f,
        0x7f, 0x7f, 0x3f, 0x7f, 0x7f, 0x3f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0xff,
        0x7f, 0x7f, 0x3f, 0x7f, 0x7f, 0x3f, 0x7f, 0x7f, 0x3f, 0x7f, 0x7f, 0x3f,
        0x7f, 0x7f, 0x3f, 0x7f, 0x7f, 0x3f, 0x7f, 0x7f, 0x3f, 0x7f, 0x7f, 0x3f,
        0x7f, 0x7f, 0x3f, 0x7f, 0x7f, 0x3f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0xff,
        0x7f, 0x7f, 0x3f, 0x7f, 0x7f, 0x3f, 0x3e, 0x3e, 0x1e, 0x1c, 0x1c, 0x0c };

static unsigned char appIconHeatOn[] = {
        0x1c, 0x1c, 0x0c, 0x3e, 0x3e, 0x1e, 0x7f, 0x7f, 0x3f, 0x7f, 0x7f, 0x3f,
        0x7f, 0x7f, 0x3f, 0x77, 0x77, 0x37, 0x77, 0x77, 0xf7, 0x7b, 0x7b, 0xfb,
        0x7b, 0x7b, 0x3b, 0x7b, 0x7b, 0x3b, 0x77, 0x77, 0x37, 0x77, 0x77, 0x37,
        0x77, 0x77, 0x37, 0x7b, 0x7b, 0x3b, 0x7b, 0x7b, 0x3b, 0x7b, 0x7b, 0x3b,
        0x77, 0x77, 0x37, 0x77, 0x77, 0x37, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0xff,
        0x7f, 0x7f, 0x3f, 0x7f, 0x7f, 0x3f, 0x3e, 0x3e, 0x1e, 0x1c, 0x1c, 0x0c };


#define APPICON_LOCK_WIDTH 19
#define APPICON_LOCK_HEIGHT 24
static unsigned char appIconLockOpen[] = {
        0x80, 0x0f, 0x00, 0xe0, 0x3f, 0x00, 0xf0, 0x7d, 0x00, 0xf0, 0x78, 0x00,
        0x78, 0xf0, 0x00, 0x38, 0xe0, 0x00, 0x3c, 0xe0, 0x01, 0x3c, 0xe0, 0x01,
        0x1c, 0xc0, 0x01, 0x00, 0xc0, 0x01, 0x00, 0xc0, 0x01, 0xff, 0xff, 0x07,
        0xff, 0xff, 0x07, 0xff, 0xff, 0x07, 0xff, 0xff, 0x07, 0xff, 0xf8, 0x07,
        0x7f, 0xf0, 0x07, 0x7f, 0xf0, 0x07, 0xff, 0xf8, 0x07, 0xff, 0xf8, 0x07,
        0xff, 0xf8, 0x07, 0xff, 0xff, 0x07, 0xff, 0xff, 0x07, 0xff, 0xff, 0x07 };

static unsigned char appIconLockClosed[] = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0f, 0x00, 0xe0, 0x3f, 0x00,
        0xf0, 0x7d, 0x00, 0xf0, 0x78, 0x00, 0x78, 0xf0, 0x00, 0x38, 0xe0, 0x00,
        0x3c, 0xe0, 0x01, 0x3c, 0xe0, 0x01, 0x1c, 0xc0, 0x01, 0xff, 0xff, 0x07,
        0xff, 0xff, 0x07, 0xff, 0xff, 0x07, 0xff, 0xff, 0x07, 0xff, 0xf8, 0x07,
        0x7f, 0xf0, 0x07, 0x7f, 0xf0, 0x07, 0xff, 0xf8, 0x07, 0xff, 0xf8, 0x07,
        0xff, 0xf8, 0x07, 0xff, 0xff, 0x07, 0xff, 0xff, 0x07, 0xff, 0xff, 0x07 };