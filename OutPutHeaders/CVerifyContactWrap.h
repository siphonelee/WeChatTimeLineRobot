/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CContact, NSString;

@interface CVerifyContactWrap : XXUnknownSuperclass {
	NSString* m_nsUsrName;
	NSString* m_nsOriginalUsrName;
	unsigned long m_uiScene;
	NSString* m_nsTicket;
	unsigned long m_uiWCFlag;
	CContact* m_oVerifyContact;
	NSString* m_nsSourceUserName;
	NSString* m_nsSourceNickName;
	NSString* _m_nsChatRoomUserName;
}
@property(retain, nonatomic) NSString* m_nsSourceNickName;
@property(retain, nonatomic) NSString* m_nsSourceUserName;
@property(retain, nonatomic) NSString* m_nsChatRoomUserName;
@property(retain, nonatomic) CContact* m_oVerifyContact;
@property(assign, nonatomic) unsigned long m_uiWCFlag;
@property(retain, nonatomic) NSString* m_nsTicket;
@property(assign, nonatomic) unsigned long m_uiScene;
@property(retain, nonatomic) NSString* m_nsOriginalUsrName;
@property(retain, nonatomic) NSString* m_nsUsrName;
-(void).cxx_destruct;
-(id)getRealUserName;
-(id)init;
@end

