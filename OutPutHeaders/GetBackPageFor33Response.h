/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BackPageInfo, ShowWordsInfo, NSString, BaseResponse;

@interface GetBackPageFor33Response : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned hasMobile;
@property(retain, nonatomic) BackPageInfo* backPageInfo;
@property(retain, nonatomic) ShowWordsInfo* showWords;
@property(retain, nonatomic) NSString* showUrl;
@property(assign, nonatomic) unsigned relativeExpiredSeconds;
@property(assign, nonatomic) unsigned actionCode;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

