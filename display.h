/* 
 * File:   display.h
 * Author: Mark Bersalona
 *
 * Created on 2023.01.16
 */

#ifndef DISPLAY_H
#define DISPLAY_H

#ifdef __cplusplus
extern "C" {
#endif

///////////////////////////////////////////////////////////////////////////////
//
// Public variables
//
///////////////////////////////////////////////////////////////////////////////

// Main display
extern GtkCssProvider *cssProvider;
extern GtkWindow *window;
extern GtkWidget *lblMAC, *lblBoardRev, *lbl400FW;
extern GtkWidget *txtentNewMAC, *txtentNewBoardRev;
extern GtkWidget *cbtMenu;
extern GtkWidget *swLogfileEnable, *lblLogfile;
extern GtkWidget *lblRTC, *lblConnection;
extern GtkWidget *lblZWaveNodes, *lblZWaveLiveNodes;
extern GtkWidget *lblSmartStart, *lblBootstrap;

extern GtkWidget *lblZone1, *lblZone2, *lblZone3, *lblZone4, *lblZone5;
extern GtkWidget *lblTypePower, *lblTypeBattery, *lblTypeLithium;
extern GtkWidget *lblTypeZone1, *lblTypeZone2, *lblTypeZone3, *lblTypeZone4, *lblTypeZone5, *lblTypeRelay;
extern GtkWidget *lblTimestampPower, *lblTimestampBattery, *lblTimestampLithium;
extern GtkWidget *lblTimestampZone1, *lblTimestampZone2, *lblTimestampZone3, *lblTimestampZone4, *lblTimestampZone5, *lblTimestampRelay;
extern GtkWidget *lblValuePower, *lblValueBattery, *lblValueLithium;
extern GtkWidget *lblValueZone1, *lblValueZone2, *lblValueZone3, *lblValueZone4, *lblValueZone5, *lblValueRelay;
extern GtkWidget *lblAlarmPower, *lblAlarmBattery, *lblAlarmLithium;
extern GtkWidget *lblAlarmZone1, *lblAlarmZone2, *lblAlarmZone3, *lblAlarmZone4, *lblAlarmZone5, *lblAlarmRelay;

extern GtkWidget *lblLogfile;

extern GtkWidget *lblStatusTitle;
extern GtkTextBuffer *textbufStatus;
extern GtkTextBuffer *textbufReceive;
extern GtkTextIter textiterReceiveStart;
extern GtkTextIter textiterReceiveEnd;
extern GtkTextIter textiterStatusStart;
extern GtkTextIter textiterStatusEnd;
extern GtkScrolledWindow *scrolledwindowStatus;
extern GtkAdjustment *adjStatus;

    
// Menu tables
extern char* pucMenuItems[];
extern char* pucMenuCMD[];
typedef enum Menu_IDs
{
    MENU_ID_DISPLAY_MENU,
    MENU_ID_ERASE_EXT_FLASH,
    MENU_ID_APP_CRC,
    MENU_ID_APP_TO_EXT_FLASH,
    
    MENU_ID_APP_FROM_EXT_FLASH,

    MENU_ID_SPI_FLASH_TEST_BIG,
    MENU_ID_SPI_FLASH_TEST_SMALL,
    MENU_ID_ACK_ALL_ALARMS,
    
    MENU_ID_READ_MAC,
    MENU_ID_READ_BOARD_REV,
    MENU_ID_TOGGLE_LAMPS,
    MENU_ID_TOGGLE_RELAY,
    MENU_ID_DELETE_NODE,
    
    MENU_ID_PING_SERVER,
    MENU_ID_SYNC_RTC,
    MENU_ID_ZONE_UPDATE_POST,
    MENU_ID_RESET_TO_DEFAULTS,
    MENU_ID_REBOOT,
    
    MENU_ID_COUNT,
    
} MenuID;

///////////////////////////////////////////////////////////////////////////////
//
// Public routines
//
///////////////////////////////////////////////////////////////////////////////

void display_clear_UUT_values(void);
void display_diagnostics_enter(GtkWindow *parent);
void display_diagnostics_exit(void);
void display_main_initialize(void);
void display_receive_write(char * paucWriteBuf);
void display_status_write(char * paucWriteBuf);
void display_update_zones(void);
void display_update_display_connection(void);
void display_update_data_age(void);



#ifdef __cplusplus
}
#endif

#endif /* DISPLAY_H */

