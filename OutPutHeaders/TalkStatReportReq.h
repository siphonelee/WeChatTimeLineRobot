/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, BaseRequest;

@interface TalkStatReportReq : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned scene;
@property(retain, nonatomic) NSMutableArray* reportData;
@property(assign, nonatomic) int dataNum;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

