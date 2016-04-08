/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BlueProfilePedometer.h"

@class BlueDevicePool, NSObject, NSString, NSRecursiveLock;
@protocol OS_dispatch_queue, BlueAdapterDelegate;

@interface BlueAdapterBase : XXUnknownSuperclass <BlueProfilePedometer> {
	id<BlueAdapterDelegate> m_delegate;
	BlueDevicePool* m_devices;
	NSObject<OS_dispatch_queue>* m_queue;
	NSRecursiveLock* m_lock;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain) NSRecursiveLock* m_lock;
@property(retain) BlueDevicePool* m_devices;
@property(assign, nonatomic) __weak id<BlueAdapterDelegate> m_delegate;
-(void).cxx_destruct;
-(int)writePedometerProfileTarget:(long long)target Step:(int)step;
-(int)readPedometerProfileTarget:(long long)target;
-(int)readPedometerProfileCurPedometerInfo:(long long)info;
-(int)getProfileType:(long long)type;
-(void)closeProfile:(long long)profile;
-(int)connectProfile:(long long)profile ProfileType:(int)type;
-(void)onBlueToothPowerOff;
-(void)writeSession:(long long)session :(const char*)arg2 :(int)arg3;
-(int)readSession:(long long)session :(char*)arg2 :(int)arg3;
-(void)closeSession:(long long)session;
-(int)connectSession:(long long)session;
-(long long)createSession:(long long)session;
-(long long)getDIDbySessionID:(long long)anId;
-(id)getDeviceMac:(long long)mac;
-(id)getDeviceName:(long long)name;
-(id)getDeviceProtocols:(long long)protocols;
-(void)stopScan;
-(BOOL)scanAll;
-(BOOL)scan;
-(void)dealloc;
-(void)cleanUpAllDevices;
-(id)initWithDelegate:(id)delegate withQueue:(id)queue;
@end

