/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, LibGameBaseInfo, BaseResponse;

@interface GetLibGameListResponse_V2 : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned nextOffSet;
@property(assign, nonatomic) BOOL remaining;
@property(retain, nonatomic) NSMutableArray* allGameList;
@property(retain, nonatomic) LibGameBaseInfo* libGameBaseInfo;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

