/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMObject.h"
#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface SessionTranslateInfos : MMObject <PBCoding> {
	NSString* userName;
	NSMutableArray* arrTransInfo;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* arrTransInfo;
@property(retain, nonatomic) NSString* userName;
+(void)initialize;
-(void).cxx_destruct;
-(id)init;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

