/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CBaseContact.h"
#import "WeChat-Structs.h"
#import "PBCoding.h"
#import "NSCoding.h"

@class SubscriptBrandInfo, ChatRoomDetail, NSArray, NSString, ChatRoomData, NSDictionary;

@interface CContact : CBaseContact <PBCoding, NSCoding> {
	unsigned long m_uiChatRoomStatus;
	NSString* m_nsChatRoomMemList;
	unsigned long m_uiChatRoomMaxCount;
	unsigned long m_uiChatRoomVersion;
	ChatRoomDetail* m_ChatRoomDetail;
	NSString* m_nsChatRoomData;
	ChatRoomData* m_ChatRoomData;
	NSString* m_nsCountry;
	NSString* m_nsProvince;
	NSString* m_nsCity;
	NSString* m_nsSignature;
	unsigned long m_uiCertificationFlag;
	NSString* m_nsCertificationInfo;
	NSString* m_nsOwner;
	NSString* m_nsWeiboAddress;
	NSString* m_nsWeiboNickName;
	unsigned long m_uiWeiboFlag;
	NSString* m_nsFBNickName;
	NSString* m_nsFBID;
	unsigned long m_uiNeedUpdate;
	NSString* m_nsWCBGImgObjectID;
	int m_iWCFlag;
	NSString* m_pcWCBGImgID;
	NSString* m_nsExternalInfo;
	NSString* m_nsBrandSubscriptConfigUrl;
	unsigned long m_uiBrandSubscriptionSettings;
	SubscriptBrandInfo* m_subBrandInfo;
	NSString* m_nsBrandIconUrl;
	BOOL m_isExtInfoValid;
	NSDictionary* externalInfoJSONCache;
	BOOL m_isShowRedDot;
	NSString* m_nsMobileHash;
	NSString* m_nsMobileFullHash;
	NSString* m_nsLinkedInID;
	NSString* m_nsLinkedInName;
	NSString* m_nsLinkedInPublicUrl;
	unsigned long m_uiDeleteFlag;
	NSString* m_nsDescription;
	NSString* m_nsCardUrl;
	NSString* m_nsWorkID;
	NSString* m_nsLabelIDList;
	NSArray* m_arrPhoneItem;
	NSString* m_nsWeiDianInfo;
	NSDictionary* _m_dicWeiDianInfo;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) NSDictionary* m_dicWeiDianInfo;
@property(retain, nonatomic) NSString* m_nsWeiDianInfo;
@property(retain, nonatomic) NSArray* m_arrPhoneItem;
@property(retain, nonatomic) NSString* m_nsLabelIDList;
@property(retain, nonatomic) NSString* m_nsWorkID;
@property(retain, nonatomic) NSString* m_nsCardUrl;
@property(retain, nonatomic) NSString* m_nsDescription;
@property(assign, nonatomic) unsigned long m_uiDeleteFlag;
@property(retain, nonatomic) NSString* m_nsLinkedInPublicUrl;
@property(retain, nonatomic) NSString* m_nsLinkedInName;
@property(retain, nonatomic) NSString* m_nsLinkedInID;
@property(retain, nonatomic) NSString* m_nsMobileFullHash;
@property(retain, nonatomic) NSString* m_nsMobileHash;
@property(assign, nonatomic) BOOL m_isShowRedDot;
@property(retain, nonatomic) ChatRoomData* m_ChatRoomData;
@property(retain, nonatomic) NSString* m_nsChatRoomData;
@property(assign, nonatomic) BOOL m_isExtInfoValid;
@property(retain, nonatomic) NSString* m_nsBrandIconUrl;
@property(retain, nonatomic) SubscriptBrandInfo* m_subBrandInfo;
@property(assign, nonatomic) unsigned long m_uiBrandSubscriptionSettings;
@property(retain, nonatomic) NSString* m_nsBrandSubscriptConfigUrl;
@property(retain, nonatomic) NSString* m_nsExternalInfo;
@property(retain, nonatomic) NSString* m_pcWCBGImgID;
@property(assign, nonatomic) int m_iWCFlag;
@property(retain, nonatomic) NSString* m_nsWCBGImgObjectID;
@property(assign, nonatomic) unsigned long m_uiNeedUpdate;
@property(retain, nonatomic) NSString* m_nsFBID;
@property(retain, nonatomic) NSString* m_nsFBNickName;
@property(assign, nonatomic) unsigned long m_uiWeiboFlag;
@property(retain, nonatomic) NSString* m_nsWeiboNickName;
@property(retain, nonatomic) NSString* m_nsWeiboAddress;
@property(retain, nonatomic) NSString* m_nsOwner;
@property(retain, nonatomic) NSString* m_nsCertificationInfo;
@property(assign, nonatomic) unsigned long m_uiCertificationFlag;
@property(retain, nonatomic) NSString* m_nsSignature;
@property(retain, nonatomic) NSString* m_nsCity;
@property(retain, nonatomic) NSString* m_nsProvince;
@property(retain, nonatomic) NSString* m_nsCountry;
@property(retain, nonatomic) ChatRoomDetail* m_ChatRoomDetail;
@property(assign, nonatomic) unsigned long m_uiChatRoomVersion;
@property(assign, nonatomic) unsigned long m_uiChatRoomMaxCount;
@property(assign, nonatomic) unsigned long m_uiChatRoomStatus;
@property(retain, nonatomic) NSString* m_nsChatRoomMemList;
+(BOOL)isHeadImgUpdated:(id)updated Local:(id)local;
+(void)HandleChatMemUsrImg:(tagMMModChatRoomMember*)img Contatct:(id)contatct DocPath:(id)path;
+(void)HandleUsrImgPB:(id)pb Contatct:(id)contatct DocPath:(id)path;
+(void)HandleUsrImg:(tagMMModContact*)img Contatct:(id)contatct DocPath:(id)path;
+(id)genChatRoomName:(id)name;
+(id)getChatRoomMemberWithoutMyself:(id)myself;
+(id)getChatRoomMember:(id)member;
+(unsigned)getChatRoomMemberCount:(id)count;
+(id)getMicroBlogUsrDisplayName:(id)name;
+(id)parseContactKey:(id)key;
+(id)SubscriptedBrandsFromString:(id)string;
+(void)initialize;
-(void)setExternalInfoJSONCache:(id)cache;
-(id)externalInfoJSONCache;
-(void).cxx_destruct;
-(BOOL)IsUserInChatRoom:(id)chatRoom;
-(id)getLabelIDList;
-(BOOL)isAccountDeleted;
-(BOOL)isHasWeiDian;
-(BOOL)isShowLinkedIn;
-(BOOL)needShowUnreadCountOnSession;
-(void)setChatStatusNotifyOpen:(BOOL)open;
-(BOOL)isChatStatusNotifyOpen;
-(BOOL)isContactFrozen;
-(BOOL)isContactSessionTop;
-(BOOL)isShowChatRoomDisplayName;
-(BOOL)isAdmin;
-(id)xmlForMessageWrapContent;
-(id)getChatRoomMembrGroupNickName:(id)name;
-(id)getChatRoomMemberNickName:(id)name;
-(id)getChatRoomMemberDisplayName:(id)name;
-(id)getNormalContactDisplayDesc;
-(int)compareForFavourGroup:(id)favourGroup;
-(BOOL)isLocalizedContact;
-(BOOL)isHolderContact;
-(BOOL)isVerified;
-(BOOL)isIgnoreBrandContat;
-(BOOL)isVerifiedBrandContact;
-(BOOL)isBrandContact;
-(BOOL)IsAddFromShake;
-(BOOL)IsAddFromLbs;
-(BOOL)isMyContact;
-(void)tryLoadExtInfo;
-(BOOL)copyPatialFieldFromContact:(id)contact;
-(BOOL)copyFieldFromContact:(id)contact;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)initWithModContact:(id)modContact;
-(id)initWithShareCardMsgWrapContent:(id)shareCardMsgWrapContent;
-(id)initWithShareCardMsgWrap:(id)shareCardMsgWrap;
-(void)genContactFromShareCardMsgWrapContent:(id)shareCardMsgWrapContent;
-(BOOL)genContactFromShareCardMsgWrap:(id)shareCardMsgWrap;
-(id)init;
-(BOOL)isHasMobile;
-(id)getMobileList;
-(BOOL)hasMatchHashPhone;
-(id)getMobileNumString;
-(id)getMobileDisplayName;
-(BOOL)isContactTypeShouldDelete;
-(id)getNewChatroomData;
-(void)setSignatureWithoutEmojiChange:(id)change;
-(void)setChatRoomDataWithoutEmojiChange:(id)change;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
-(id)getMainPageUrl;
-(BOOL)isOpenMainPage;
-(unsigned long)getFunctionFlag;
-(id)getSupportEmoticonLinkPrefix;
-(id)getConferenceVerifyButtonTitle;
-(id)getConferenceVerifyPromptTitle;
-(unsigned long)getConferenceContactExpireTime;
-(id)getBrandBusinessScope;
-(id)getBrandMerchantSecurityUrl;
-(id)getBrandMerchantSecurity;
-(id)getBrandEvaluateCount;
-(id)getBrandMerchantRatings;
-(id)brandUrls;
-(id)brandPrivileges;
-(id)getBrandRegisterSourceIntroUrl;
-(id)getBrandRegisterSourceBody;
-(BOOL)getIsTrademarkProtection;
-(id)getBrandVerifySubTitle;
-(id)getBrandVerifySourceIntroUrl;
-(id)getBrandVerifySourceDescription;
-(id)getBrandVerifySourceName;
-(unsigned long)getBrandVerifySourceType;
-(id)getBrandTrademarkName;
-(id)getBrandTrademarkUrl;
-(id)getCustomizeMenu;
-(id)bizMenuInfoFromContact;
-(int)getInteractiveMode;
-(BOOL)isShowToolBarInMsg;
-(BOOL)isShowHeadImgInMsg;
-(int)getScanQRCodeType;
-(int)getReportLocationType;
-(int)getAudioPlayType;
-(BOOL)isContactCanReceiveSpeexVoice;
-(BOOL)containKFWorkerInfo;
-(id)getSpecifyWorkerOpenID;
-(int)getConnectorMsgType;
-(BOOL)canSupportMessageNotify;
-(BOOL)isHardDeviceHideSubtitle;
-(BOOL)isInternalMyDeviceBrand;
-(BOOL)isInternalSportBrand;
-(id)getNearFieldDesc;
-(BOOL)isSupportPublicWifi;
-(BOOL)isHardDeviceTestBrand;
-(BOOL)isHardDeviceBrand;
-(BOOL)isEnterpriseDisableBrand;
-(BOOL)isEnterpriseWebSubBrand;
-(BOOL)isEnterpriseChatSubBrand;
-(BOOL)isEnterpriseSubBrand;
-(id)getEnterpriseSubBrandUrl;
-(unsigned long)getEnterpriseSubBrandChildType;
-(BOOL)isEnterpriseBrand;
-(BOOL)isEnterpriseMainBrand;
-(id)getEnterpriseBrandFrozenWording;
-(id)getEnterpriseMainBrandUserName;
-(int)getBrandContactType;
-(id)getExternalInfoDictionary;
-(void)updateWithBizAttrChanged:(id)bizAttrChanged;
@end

