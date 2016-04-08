/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMObject.h"
#import "PBCoding.h"

@class NSArray, NSString;

@interface GameCenterGiftInfo : MMObject <PBCoding> {
	NSString* title;
	NSArray* giftList;
	NSString* moreTitle;
	NSString* moreURL;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* moreURL;
@property(retain, nonatomic) NSString* moreTitle;
@property(retain, nonatomic) NSArray* giftList;
@property(retain, nonatomic) NSString* title;
+(void)initialize;
-(void).cxx_destruct;
-(void)parseFromResp:(id)resp;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

