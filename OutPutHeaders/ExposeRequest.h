/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface ExposeRequest : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* exposeContent;
@property(assign, nonatomic) unsigned long long snsId;
@property(assign, nonatomic) unsigned albumType;
@property(retain, nonatomic) NSString* albumPhotoId;
@property(assign, nonatomic) unsigned type;
@property(assign, nonatomic) unsigned scene;
@property(retain, nonatomic) NSString* userName;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

