/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCDBCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class NSString;

@interface FavoritesDownloadCDNInfo : XXUnknownSuperclass <WCDBCoding> {
	unsigned long localItemId;
	NSString* localDataID;
	NSString* cdnUrl;
	unsigned long size;
	long status;
	NSString* cdnKey;
	NSString* md5;
	NSString* head256Md5;
	long isThumb;
	long dataType;
	NSString* dataFmt;
	unsigned long IntRes1;
	unsigned long IntRes2;
	NSString* StrRes1;
	NSString* StrRes2;
	long long m___rowID;
}
@property(assign, nonatomic) long long __rowID;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* StrRes2;
@property(retain, nonatomic) NSString* StrRes1;
@property(assign, nonatomic) unsigned long IntRes2;
@property(assign, nonatomic) unsigned long IntRes1;
@property(retain, nonatomic) NSString* dataFmt;
@property(assign, nonatomic) long dataType;
@property(assign, nonatomic) long isThumb;
@property(retain, nonatomic) NSString* head256Md5;
@property(retain, nonatomic) NSString* md5;
@property(retain, nonatomic) NSString* cdnKey;
@property(assign, nonatomic) long status;
@property(assign, nonatomic) unsigned long size;
@property(retain, nonatomic) NSString* cdnUrl;
@property(retain, nonatomic) NSString* localDataID;
@property(assign, nonatomic) unsigned long localItemId;
+(id)dummyObject;
-(void).cxx_destruct;
-(id)init;
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
-(const WCDBCondition<NSString* >*)db_StrRes2;
-(const WCDBCondition<NSString* >*)db_StrRes1;
-(const WCDBCondition<unsigned long>*)db_IntRes2;
-(const WCDBCondition<unsigned long>*)db_IntRes1;
-(const WCDBCondition<NSString* >*)db_dataFmt;
-(const WCDBCondition<long>*)db_dataType;
-(const WCDBCondition<long>*)db_isThumb;
-(const WCDBCondition<NSString* >*)db_head256Md5;
-(const WCDBCondition<NSString* >*)db_md5;
-(const WCDBCondition<NSString* >*)db_cdnKey;
-(const WCDBCondition<long>*)db_status;
-(const WCDBCondition<unsigned long>*)db_size;
-(const WCDBCondition<NSString* >*)db_cdnUrl;
-(const WCDBCondition<NSString* >*)db_localDataID;
-(const WCDBCondition<unsigned long>*)db_localItemId;
@end

