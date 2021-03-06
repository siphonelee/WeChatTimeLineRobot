/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PBCoding.h"

@class NSString, PBCContact, PBCMessageWrap;

@interface PBSessionInfo : XXUnknownSuperclass <PBCoding> {
	BOOL showUnreadCountAsRedDot;
	PBCContact* contact;
	PBCMessageWrap* message;
	unsigned atMeCount;
	unsigned greenLabelType;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned greenLabelType;
@property(assign, nonatomic) BOOL showUnreadCountAsRedDot;
@property(assign, nonatomic) unsigned atMeCount;
@property(retain, nonatomic) PBCMessageWrap* message;
@property(retain, nonatomic) PBCContact* contact;
+(void)initialize;
-(void).cxx_destruct;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
-(void)setFromSessionInfo:(id)sessionInfo;
-(id)toSessionInfo;
@end

