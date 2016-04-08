/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"
#import "PBCoding.h"
#import "NSCopying.h"

@class NSString;

@interface SnsMusicItem : XXUnknownSuperclass <PBCoding, NSCoding, NSCopying> {
	NSString* musicName;
	NSString* singer;
	NSString* albumName;
	NSString* coverImageUrl;
	NSString* lyrics;
	NSString* musicUrl;
	NSString* musicLowBandUrl;
	NSString* webUrl;
	NSString* musicID;
	unsigned createTime;
	NSString* tid;
	NSString* username;
	NSString* appId;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* appId;
@property(retain, nonatomic) NSString* username;
@property(retain, nonatomic) NSString* tid;
@property(assign, nonatomic) unsigned createTime;
@property(retain, nonatomic) NSString* musicID;
@property(retain, nonatomic) NSString* webUrl;
@property(retain, nonatomic) NSString* musicLowBandUrl;
@property(retain, nonatomic) NSString* musicUrl;
@property(retain, nonatomic) NSString* lyrics;
@property(retain, nonatomic) NSString* coverImageUrl;
@property(retain, nonatomic) NSString* albumName;
@property(retain, nonatomic) NSString* singer;
@property(retain, nonatomic) NSString* musicName;
+(void)initialize;
-(void).cxx_destruct;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

