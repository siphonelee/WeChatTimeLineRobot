/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface WCStreamVideoInfo : XXUnknownSuperclass <NSCoding> {
	NSString* streamVideoUrl;
	NSString* streamVideoTitle;
	NSString* streamVideoWording;
	NSString* streamVideoWebUrl;
	unsigned long uiStreamVideoTime;
	NSString* streamVideoThumbUrl;
	NSString* streamVideoPublishId;
	NSString* streamVideoAdUxInfo;
}
@property(retain, nonatomic) NSString* streamVideoAdUxInfo;
@property(retain, nonatomic) NSString* streamVideoPublishId;
@property(retain, nonatomic) NSString* streamVideoThumbUrl;
@property(assign, nonatomic) unsigned long uiStreamVideoTime;
@property(retain, nonatomic) NSString* streamVideoWebUrl;
@property(retain, nonatomic) NSString* streamVideoWording;
@property(retain, nonatomic) NSString* streamVideoTitle;
@property(retain, nonatomic) NSString* streamVideoUrl;
-(void).cxx_destruct;
-(BOOL)isValid;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)init;
@end

