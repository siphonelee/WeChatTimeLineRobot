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

@interface ShakeUrlItem : XXUnknownSuperclass <PBCoding, NSCoding, NSCopying> {
	NSString* title;
	NSString* link;
	NSString* thumbUrl;
	NSString* username;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* username;
@property(retain, nonatomic) NSString* thumbUrl;
@property(retain, nonatomic) NSString* link;
@property(retain, nonatomic) NSString* title;
+(void)initialize;
-(void).cxx_destruct;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

