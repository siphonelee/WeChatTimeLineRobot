/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray;

@interface CliReportKVResp : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned askSvrStrategyInterval;
@property(assign, nonatomic) unsigned banReportTime;
@property(assign, nonatomic) unsigned maxValidDataTime;
@property(retain, nonatomic) NSMutableArray* whiteOrBlackUinStrategies;
@property(retain, nonatomic) NSMutableArray* specialStrategies;
@property(retain, nonatomic) NSMutableArray* generalStrategies;
@property(assign, nonatomic) unsigned whiteOrBlackUinVersion;
@property(assign, nonatomic) unsigned specialVersion;
@property(assign, nonatomic) unsigned generalVersion;
@property(assign, nonatomic) int ret;
+(void)initialize;
@end

