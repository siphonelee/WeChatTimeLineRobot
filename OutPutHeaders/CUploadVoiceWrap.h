/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCDBCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class NSData, NSString;

@interface CUploadVoiceWrap : XXUnknownSuperclass <WCDBCoding> {
	NSString* m_nsFromUsrName;
	NSString* m_nsToUsrName;
	long long m_n64SvrID;
	unsigned long m_uiLocalID;
	unsigned long m_uiOffset;
	unsigned long m_uiLen;
	unsigned long m_uiCreateTime;
	unsigned long m_uiVoiceLen;
	unsigned long m_uiVoiceTime;
	unsigned long m_uiVoiceFormat;
	unsigned long m_uiEndFlag;
	NSData* m_dtVoice;
	unsigned long m_uiRetryCount;
	unsigned long m_uiInsertQueueTime;
	unsigned long m_uiCancelFlag;
	unsigned long m_uiVoiceForwardFlag;
	unsigned long m_uiCgi;
	NSString* m_nsMsgThumbUrl;
	NSString* m_nsMsgSource;
	unsigned long m_uiStatus;
	NSString* m_nsExtend;
	NSString* ConStrRes2;
	NSString* ConStrRes3;
	long long m___rowID;
}
@property(assign, nonatomic) long long __rowID;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* ConStrRes3;
@property(retain, nonatomic) NSString* ConStrRes2;
@property(retain, nonatomic) NSString* m_nsExtend;
@property(assign, nonatomic) unsigned long m_uiVoiceFormat;
@property(assign, nonatomic) unsigned long m_uiCancelFlag;
@property(assign, nonatomic) unsigned long m_uiInsertQueueTime;
@property(assign, nonatomic) unsigned long m_uiStatus;
@property(assign, nonatomic) unsigned long m_uiRetryCount;
@property(assign, nonatomic) unsigned long m_uiEndFlag;
@property(assign, nonatomic) unsigned long m_uiVoiceTime;
@property(assign, nonatomic) unsigned long m_uiLen;
@property(assign, nonatomic) unsigned long m_uiOffset;
@property(assign, nonatomic) unsigned long m_uiCreateTime;
@property(assign, nonatomic) long long m_n64SvrID;
@property(assign, nonatomic) unsigned long m_uiLocalID;
@property(retain, nonatomic) NSString* m_nsToUsrName;
@property(retain, nonatomic) NSString* m_nsMsgSource;
@property(assign, nonatomic) unsigned long m_uiCgi;
@property(assign, nonatomic) unsigned long m_uiVoiceForwardFlag;
@property(retain, nonatomic) NSData* m_dtVoice;
@property(assign, nonatomic) unsigned long m_uiVoiceLen;
@property(retain, nonatomic) NSString* m_nsFromUsrName;
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
-(const WCDBCondition<NSString* >*)db_ConStrRes3;
-(const WCDBCondition<NSString* >*)db_ConStrRes2;
-(const WCDBCondition<NSString* >*)db_m_nsExtend;
-(const WCDBCondition<unsigned long>*)db_m_uiVoiceFormat;
-(const WCDBCondition<unsigned long>*)db_m_uiCancelFlag;
-(const WCDBCondition<unsigned long>*)db_m_uiInsertQueueTime;
-(const WCDBCondition<unsigned long>*)db_m_uiStatus;
-(const WCDBCondition<unsigned long>*)db_m_uiRetryCount;
-(const WCDBCondition<unsigned long>*)db_m_uiEndFlag;
-(const WCDBCondition<unsigned long>*)db_m_uiVoiceTime;
-(const WCDBCondition<unsigned long>*)db_m_uiLen;
-(const WCDBCondition<unsigned long>*)db_m_uiOffset;
-(const WCDBCondition<unsigned long>*)db_m_uiCreateTime;
-(const WCDBCondition<long long>*)db_m_n64SvrID;
-(const WCDBCondition<unsigned long>*)db_m_uiLocalID;
-(const WCDBCondition<NSString* >*)db_m_nsToUsrName;
@end

