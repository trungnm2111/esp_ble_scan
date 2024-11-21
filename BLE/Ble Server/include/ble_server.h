#ifndef _BLE_SERVER_H
#define _BLE_SERVER_H

#include <Arduino.h>
#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>


/****************************************************************
 * Definitions and Constants
 ***************************************************************/
static constexpr char SERVICE_UUID[] = "4fafc201-1fb5-459e-8fcc-c5c9c331914b";
static BLEUUID SERVICE_UUID_OBJ(SERVICE_UUID);

void start_bluetooth_server();



#endif