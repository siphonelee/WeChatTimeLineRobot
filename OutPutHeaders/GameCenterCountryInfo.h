/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMObject.h"
#import "PBCoding.h"

@class NSString;

@interface GameCenterCountryInfo : MMObject <PBCoding> {
	NSString* productID;
	NSString* countryCode;
	unsigned long lastFetchTime;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned long lastFetchTime;
@property(retain, nonatomic) NSString* countryCode;
@property(retain, nonatomic) NSString* productID;
+(void)initialize;
-(void).cxx_destruct;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

