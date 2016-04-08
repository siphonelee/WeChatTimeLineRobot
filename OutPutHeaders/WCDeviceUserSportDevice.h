/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSString;

@interface WCDeviceUserSportDevice : MMObject {
	BOOL m_isHealThkitOrApp;
	NSString* m_deviceId;
	NSString* m_deviceType;
	NSString* m_bundleId;
	NSString* m_appName;
	NSString* m_deviceName;
	NSString* m_iconUrl;
	NSString* m_connProto;
	unsigned long m_stepCount;
	long long m_bleSimpleProtol;
	long long m_DID;
}
@property(assign, nonatomic) unsigned long m_stepCount;
@property(assign, nonatomic) long long m_DID;
@property(assign, nonatomic) long long m_bleSimpleProtol;
@property(retain, nonatomic) NSString* m_connProto;
@property(retain, nonatomic) NSString* m_iconUrl;
@property(retain, nonatomic) NSString* m_deviceName;
@property(retain, nonatomic) NSString* m_appName;
@property(retain, nonatomic) NSString* m_bundleId;
@property(retain, nonatomic) NSString* m_deviceType;
@property(retain, nonatomic) NSString* m_deviceId;
@property(assign, nonatomic) BOOL m_isHealThkitOrApp;
-(void).cxx_destruct;
-(BOOL)isSimpleProfileDevcie;
-(BOOL)isBLEDevice;
-(BOOL)isM7Device;
-(void)dealloc;
@end

