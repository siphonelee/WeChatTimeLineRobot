/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCDBCoding.h"
#import "CBaseContact.h"
#import "WeChat-Structs.h"

@class NSString, EnterpriseRoomData;

@interface CEnterpriseContact : CBaseContact <WCDBCoding> {
	BOOL m_bHeadImageUpdateFlag;
	NSString* m_nsContactDisplayName;
	NSString* m_nsProfileJumpUrl;
	NSString* m_nsAddMemberUrl;
	unsigned long m_uiUserFlag;
	unsigned long m_uiContactType;
	EnterpriseRoomData* m_oRoomData;
	NSString* m_nsBrandUserName;
	unsigned long long m_uiContactVer;
	long long m___rowID;
}
@property(assign, nonatomic) long long __rowID;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned long m_uiDraftTime;
@property(retain, nonatomic) NSString* m_nsDraft;
@property(retain, nonatomic) NSString* m_nsAtUserList;
@property(retain, nonatomic) EnterpriseRoomData* m_oRoomData;
@property(assign, nonatomic) unsigned long m_uiContactType;
@property(assign, nonatomic) unsigned long m_uiUserFlag;
@property(retain, nonatomic) NSString* m_nsAddMemberUrl;
@property(assign, nonatomic) BOOL m_bHeadImageUpdateFlag;
@property(retain, nonatomic) NSString* m_nsHeadHDImgUrl;
@property(retain, nonatomic) NSString* m_nsProfileJumpUrl;
@property(retain, nonatomic) NSString* m_nsContactDisplayName;
@property(assign, nonatomic) unsigned long long m_uiContactVer;
@property(retain, nonatomic) NSString* m_nsBrandUserName;
@property(retain, nonatomic) NSString* m_nsUsrName;
+(id)dummyObject;
-(void).cxx_destruct;
-(BOOL)isFavorite;
-(BOOL)isSelf;
-(BOOL)isChatStatusNotifyOpen;
-(BOOL)isChatroom;
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
-(const WCDBCondition<unsigned long>*)db_m_uiDraftTime;
-(const WCDBCondition<NSString* >*)db_m_nsDraft;
-(const WCDBCondition<NSString* >*)db_m_nsAtUserList;
-(const WCDBCondition<NSString* >*)db_m_nsBrandUserName;
-(const WCDBCondition<signed char>*)db_m_bHeadImageUpdateFlag;
-(const WCDBCondition<EnterpriseRoomData* >*)db_m_oRoomData;
-(const WCDBCondition<unsigned long>*)db_m_uiContactType;
-(const WCDBCondition<unsigned long>*)db_m_uiUserFlag;
-(const WCDBCondition<NSString* >*)db_m_nsAddMemberUrl;
-(const WCDBCondition<NSString* >*)db_m_nsHeadHDImgUrl;
-(const WCDBCondition<NSString* >*)db_m_nsProfileJumpUrl;
-(const WCDBCondition<unsigned long long>*)db_m_uiContactVer;
-(const WCDBCondition<NSString* >*)db_m_nsContactDisplayName;
-(const WCDBCondition<NSString* >*)db_m_nsUsrName;
@end

