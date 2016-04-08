/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WCDeviceNetworkLogicMgrDelegate <NSObject>
@optional
-(void)onGetSportDeviceListResponse:(id)response ErrorCode:(int)code;
-(void)onSendSearchBLEHardDevice:(id)device device:(id)device2;
-(void)onSendAirKissHelpUrlReq:(id)req device:(id)device;
-(void)onSendSearchWifiHardDevice:(id)device extData:(id)data;
-(void)onUploadDeviceStepReponse:(id)reponse stepCount:(unsigned long)count HKStepCount:(unsigned long)count3 M7StepCount:(unsigned long)count4 sourceWhiteList:(id)list ErrorCode:(int)code;
-(void)onSendWCDevicesGetOperTicketResponse:(id)response reqTicketList:(id)list ErrorCode:(int)code;
-(void)onBatchSearchWCDeviceResponse:(id)response Scene:(int)scene ErrorCode:(int)code;
-(void)onSearchWCDeviceResponse:(id)response;
-(void)onWCDeviceGetBoundDevicesResponse:(id)response;
-(void)onSendWCDeviceUnbindResponse:(id)response deviceId:(id)anId bAllUnbind:(BOOL)unbind Error:(id)error;
-(void)onSendWCDeviceBindResponse:(id)response Ticket:(id)ticket Error:(id)error;
-(void)onUpdateMyDeviceAttrResponse:(id)response Error:(int)error;
@end

