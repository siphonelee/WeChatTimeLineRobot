/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"
#import "PBCoding.h"
#import "WeChat-Structs.h"

@class PersonalDesigner, SKProduct, NSArray, NSString, iAPTransation, EmoticonStoreCollectionCellData;

@interface EmoticonStoreItem : MMObject <PBCoding> {
	NSString* productID;
	NSString* iconUrl;
	NSString* packName;
	NSString* packDesc;
	NSString* packAuthInfo;
	NSString* packPrice;
	unsigned packType;
	unsigned packFlag;
	NSString* packThumb;
	NSString* coverUrl;
	unsigned boughtTime;
	NSString* packCopyright;
	NSArray* packThumbList;
	NSArray* packThumbPreviewList;
	NSString* timeLimit;
	unsigned long version;
	NSString* introduce;
	NSString* tagUrl;
	NSString* shareDesc;
	NSString* oldRedirectUrl;
	SKProduct* product;
	BOOL isInvalidProductFromApple;
	iAPTransation* transation;
	NSString* packFileID;
	NSString* packFileKey;
	unsigned packFileSize;
	NSString* cdnDownloadClientID;
	NSString* cdnDownloadPath;
	BOOL m_isCollectionCell;
	EmoticonStoreCollectionCellData* m_collectionData;
	BOOL _m_isAutomaticDownload;
	PersonalDesigner* personalDesigner;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL m_isAutomaticDownload;
@property(retain, nonatomic) EmoticonStoreCollectionCellData* m_collectionData;
@property(assign, nonatomic) BOOL m_isCollectionCell;
@property(retain, nonatomic) iAPTransation* transation;
@property(assign, nonatomic) BOOL isInvalidProductFromApple;
@property(retain, nonatomic) SKProduct* product;
@property(assign, nonatomic) unsigned packFileSize;
@property(assign, nonatomic) unsigned boughtTime;
@property(assign, nonatomic) unsigned packFlag;
@property(assign, nonatomic) unsigned packType;
@property(assign, nonatomic) unsigned long version;
@property(retain, nonatomic) PersonalDesigner* personalDesigner;
@property(retain, nonatomic) NSString* oldRedirectUrl;
@property(retain, nonatomic) NSString* shareDesc;
@property(retain, nonatomic) NSString* tagUrl;
@property(retain, nonatomic) NSString* introduce;
@property(retain, nonatomic) NSString* timeLimit;
@property(retain, nonatomic) NSArray* packThumbPreviewList;
@property(retain, nonatomic) NSArray* packThumbList;
@property(copy, nonatomic) NSString* packFileKey;
@property(copy, nonatomic) NSString* packCopyright;
@property(copy, nonatomic) NSString* cdnDownloadPath;
@property(copy, nonatomic) NSString* cdnDownloadClientID;
@property(copy, nonatomic) NSString* packFileID;
@property(copy, nonatomic) NSString* coverUrl;
@property(copy, nonatomic) NSString* packThumb;
@property(copy, nonatomic) NSString* packPrice;
@property(copy, nonatomic) NSString* packAuthInfo;
@property(copy, nonatomic) NSString* packDesc;
@property(copy, nonatomic) NSString* packName;
@property(copy, nonatomic) NSString* iconUrl;
@property(copy, nonatomic) NSString* productID;
+(id)loadItemFromCache:(id)cache;
+(id)getMd5Pid:(id)pid;
+(id)getItemCachePath:(id)path;
+(id)getItemCacheRootDir;
+(BOOL)IsPrivilegeEmoticonByPid:(id)pid;
+(void)megerWithOutProduct:(id)outProduct item:(id)item;
+(void)megerWithOutProductForceUpdateTagAndIntroduce:(id)outProductForceUpdateTagAndIntroduce item:(id)item;
+(id)StoreItemFromEmotionDetail:(id)emotionDetail;
+(id)StoreItemFromEmotionSummary:(id)emotionSummary;
+(void)megerStoreItem:(id)item FromEmotionSummary:(id)emotionSummary;
+(void)initialize;
-(void).cxx_destruct;
-(void)saveItemToCache;
-(BOOL)IsStaticPicture;
-(id)GetServerPrice;
-(BOOL)isEmptyItem;
-(BOOL)isCanReward;
-(BOOL)isCanReport;
-(BOOL)isCanShare;
-(BOOL)hasPaid;
-(BOOL)isExpired;
-(BOOL)hasDetail;
-(id)GetBoughtTimeString;
-(BOOL)IsFreeLimited;
-(BOOL)IsFree;
-(id)GetSmallIconUrlList;
-(id)GetDesc;
-(id)GetCoverUrl;
-(id)GetPrice;
-(id)priceStringForProduct:(id)product;
-(id)GetName;
-(id)GetIconUrl;
-(BOOL)isSameAs:(id)as;
-(BOOL)canDownload;
-(BOOL)canBuy;
-(BOOL)isValid;
-(id)init;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

