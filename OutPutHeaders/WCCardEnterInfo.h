/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSString;

@interface WCCardEnterInfo : MMObject {
	NSString* _cardIdOrTpId;
	NSString* _cardExt;
	unsigned long _fromScene;
	NSString* _fromUserName;
	NSString* _chatName;
	NSString* _webUrl;
	NSString* _appID;
	unsigned long _statScene;
}
@property(assign, nonatomic) unsigned long statScene;
@property(retain, nonatomic) NSString* appID;
@property(retain, nonatomic) NSString* webUrl;
@property(retain, nonatomic) NSString* chatName;
@property(retain, nonatomic) NSString* fromUserName;
@property(assign, nonatomic) unsigned long fromScene;
@property(retain, nonatomic) NSString* cardExt;
@property(retain, nonatomic) NSString* cardIdOrTpId;
-(void).cxx_destruct;
-(void)dealloc;
@end

