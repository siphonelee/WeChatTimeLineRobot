/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface WCPayOfflinePayChangeLimitFeeRequestStruct : XXUnknownSuperclass {
	NSString* m_nsPassword;
	NSString* m_nsOptionControl;
	long long m_uiChangeFee;
	NSString* m_nsVerifyCode;
	NSString* m_nsBindSerial;
	NSString* m_nsBankType;
	NSString* m_nsBindCardTail;
	BOOL m_bRepeatSend;
}
@property(assign, nonatomic) BOOL m_bRepeatSend;
@property(retain, nonatomic) NSString* m_nsBindCardTail;
@property(retain, nonatomic) NSString* m_nsBankType;
@property(retain, nonatomic) NSString* m_nsBindSerial;
@property(retain, nonatomic) NSString* m_nsVerifyCode;
@property(assign, nonatomic) long long m_uiChangeFee;
@property(retain, nonatomic) NSString* m_nsOptionControl;
@property(retain, nonatomic) NSString* m_nsPassword;
-(void).cxx_destruct;
-(void)dealloc;
-(id)init;
@end

