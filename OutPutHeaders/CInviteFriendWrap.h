/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface CInviteFriendWrap : XXUnknownSuperclass <NSCoding> {
	unsigned long m_uiInviteCount;
	unsigned long m_uiFriendType;
	unsigned long m_uiGroupId;
	unsigned long m_uiUin;
	NSString* m_nsNickName;
	NSString* m_nsNickFullPY;
	NSString* m_nsEmail;
	NSString* m_nsRemark;
	NSString* m_nsRemarkFullPY;
	NSString* m_nsUsrName;
}
@property(retain, nonatomic) NSString* m_nsUsrName;
@property(retain, nonatomic) NSString* m_nsRemarkFullPY;
@property(retain, nonatomic) NSString* m_nsRemark;
@property(retain, nonatomic) NSString* m_nsEmail;
@property(retain, nonatomic) NSString* m_nsNickFullPY;
@property(retain, nonatomic) NSString* m_nsNickName;
@property(assign, nonatomic) unsigned long m_uiUin;
@property(assign, nonatomic) unsigned long m_uiGroupId;
@property(assign, nonatomic) unsigned long m_uiFriendType;
@property(assign, nonatomic) unsigned long m_uiInviteCount;
-(void).cxx_destruct;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)init;
-(int)compare:(id)compare;
@end

