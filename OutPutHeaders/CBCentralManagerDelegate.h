/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol CBCentralManagerDelegate <NSObject>
-(void)centralManagerDidUpdateState:(id)centralManager;
@optional
-(void)centralManager:(id)manager didDisconnectPeripheral:(id)peripheral error:(id)error;
-(void)centralManager:(id)manager didFailToConnectPeripheral:(id)connectPeripheral error:(id)error;
-(void)centralManager:(id)manager didConnectPeripheral:(id)peripheral;
-(void)centralManager:(id)manager didDiscoverPeripheral:(id)peripheral advertisementData:(id)data RSSI:(id)rssi;
-(void)centralManager:(id)manager willRestoreState:(id)state;
@end

