/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseResponse;

@interface AddFavItemResponse : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned long long usedSize;
@property(assign, nonatomic) unsigned updateSeq;
@property(assign, nonatomic) unsigned favId;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end
