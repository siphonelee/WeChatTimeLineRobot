/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCDBCoding.h"
#import "MMObject.h"
#import "WeChat-Structs.h"

@class NSString;

@interface MultiTalkSessionItem : MMObject <WCDBCoding> {
	unsigned localID;
	NSString* groupID;
	NSString* clientGroupID;
	NSString* createUserName;
	unsigned lastMessageID;
	long long m___rowID;
}
@property(assign, nonatomic) long long __rowID;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned lastMessageID;
@property(retain, nonatomic) NSString* createUserName;
@property(retain, nonatomic) NSString* clientGroupID;
@property(retain, nonatomic) NSString* groupID;
@property(assign, nonatomic) unsigned localID;
+(id)dummyObject;
-(void).cxx_destruct;
-(BOOL)isSessionItemValid;
-(void)dealloc;
-(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)getWCDBPrimaryColumnName;
-(const WCDBIndexHelper*)getWCDBIndexArray;
-(unsigned long)getWCDBIndexArrayCount;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getFileValueTagIndexMap;
-(id)getFileValueTypeTable;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getPackedValueTagIndexMap;
-(id)getPackedValueTypeTable;
-(const map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >*)getValueNameIndexMap;
-(id)getValueTable;
-(const WCDBCondition<unsigned long>*)db_lastMessageID;
-(const WCDBCondition<NSString* >*)db_createUserName;
-(const WCDBCondition<NSString* >*)db_clientGroupID;
-(const WCDBCondition<NSString* >*)db_groupID;
-(const WCDBCondition<unsigned long>*)db_localID;
@end

