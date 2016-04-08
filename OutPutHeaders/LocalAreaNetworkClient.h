/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "C2ObjcClientCallBackExt.h"
#import "MMObject.h"

@class NSDate, NSString;
@protocol LocalAreaNetworkClientDelegate;

@interface LocalAreaNetworkClient : MMObject <C2ObjcClientCallBackExt> {
	unsigned long totalReciveLength;
	unsigned long totalSendLength;
	NSDate* start_date;
	unsigned short server_port;
	id<LocalAreaNetworkClientDelegate> m_delegate;
	NSString* server_ip;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned short server_port;
@property(retain, nonatomic) NSString* server_ip;
@property(assign, nonatomic) __weak id<LocalAreaNetworkClientDelegate> m_delegate;
-(void).cxx_destruct;
-(void)onDisconnect:(id)disconnect port:(unsigned short)port;
-(void)onRecv:(id)recv port:(unsigned short)port data:(id)data length:(unsigned)length;
-(float)GetClientRecvSpeed;
-(void)initTransferStartTime;
-(unsigned long)Client_SendData:(id)data andLength:(unsigned)length;
-(void)Client_Disconnect;
-(void)dealloc;
-(id)init;
@end

