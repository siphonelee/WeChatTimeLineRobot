/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface SendFeedbackRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned reportType;
@property(retain, nonatomic) NSString* content;
@property(retain, nonatomic) NSString* machineType;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

