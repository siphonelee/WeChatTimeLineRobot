/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class NSString;

@interface GameCenterMsgBubbleInfo : XXUnknownSuperclass {
	NSString* _iconUrl;
	NSString* _desc;
	int _action;
	NSString* _url;
}
@property(retain, nonatomic) NSString* url;
@property(assign, nonatomic) int action;
@property(retain, nonatomic) NSString* desc;
@property(retain, nonatomic) NSString* iconUrl;
+(id)parseFromXml:(XmlReaderNode_t*)xml;
-(void).cxx_destruct;
@end

