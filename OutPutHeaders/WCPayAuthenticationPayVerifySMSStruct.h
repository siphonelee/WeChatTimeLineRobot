/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface WCPayAuthenticationPayVerifySMSStruct : XXUnknownSuperclass {
	unsigned long m_flag;
	unsigned long m_payScene;
	unsigned long m_payChannel;
	NSString* m_payPassword;
	NSString* m_payKey;
	NSString* m_payToken;
	NSString* m_uuid;
	NSString* m_verifySMS;
	NSString* m_nsBankType;
	NSString* m_nsBindSerial;
	NSString* m_appId;
	NSString* m_appName;
	NSString* m_appSource;
	BOOL _m_bUseTouchID;
	NSString* _m_arriveType;
}
@property(assign, nonatomic) BOOL m_bUseTouchID;
@property(retain, nonatomic) NSString* m_arriveType;
@property(retain, nonatomic) NSString* m_nsBindSerial;
@property(retain, nonatomic) NSString* m_nsBankType;
@property(retain, nonatomic) NSString* m_appSource;
@property(retain, nonatomic) NSString* m_appName;
@property(retain, nonatomic) NSString* m_appId;
@property(retain, nonatomic) NSString* m_verifySMS;
@property(retain, nonatomic) NSString* m_payToken;
@property(retain, nonatomic) NSString* m_uuid;
@property(retain, nonatomic) NSString* m_payKey;
@property(retain, nonatomic) NSString* m_payPassword;
@property(assign, nonatomic) unsigned long m_payChannel;
@property(assign, nonatomic) unsigned long m_payScene;
@property(assign, nonatomic) unsigned long m_flag;
-(void).cxx_destruct;
-(void)dealloc;
@end

