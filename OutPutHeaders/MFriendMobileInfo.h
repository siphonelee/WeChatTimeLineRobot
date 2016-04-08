/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSString;

@interface MFriendMobileInfo : MMObject {
	NSString* _hashValue;
	NSString* _userName;
	NSString* _nickName;
	unsigned long _status;
	NSString* _bigHeadImgUrl;
	NSString* _smallHeadImgUrl;
	NSString* m_nsAntispamTicket;
}
@property(retain, nonatomic) NSString* m_nsAntispamTicket;
@property(retain, nonatomic) NSString* smallHeadImgUrl;
@property(retain, nonatomic) NSString* bigHeadImgUrl;
@property(assign, nonatomic) unsigned long status;
@property(retain, nonatomic) NSString* nickName;
@property(retain, nonatomic) NSString* userName;
@property(retain, nonatomic) NSString* hashValue;
-(void).cxx_destruct;
-(int)compareMFriendMobileInfoAscending:(id)ascending;
-(void)dealloc;
-(id)init;
@end

