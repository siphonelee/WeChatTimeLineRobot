/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "IContactMgrExt.h"
#import "MMKernelExt.h"
#import "MMService.h"

@class ContactTagCacheMgr, NSString, NSMutableDictionary;

@interface ContactTagMgr : MMService <MMService, MMKernelExt, IContactMgrExt, PBMessageObserverDelegate> {
	BOOL isCompleteLoadCache;
	BOOL isManulAuthOK;
	NSMutableDictionary* _dicNameToId;
	NSMutableDictionary* _dicIdToName;
	NSMutableDictionary* _dicOperateCache;
	ContactTagCacheMgr* m_CacheMgr;
	unsigned lastTimeGetAllLabelsFromServer;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)GetPathOfContactLabelList;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)OnSetLabels:(id)labels Event:(unsigned long)event;
-(void)OnUpdateLabelName:(id)name Event:(unsigned long)event;
-(void)OnDeleteLabel:(id)label Event:(unsigned long)event;
-(void)OnAddLabel:(id)label Event:(unsigned long)event;
-(void)OnGetAllLabels:(id)labels Event:(unsigned long)event;
-(unsigned long)updateLabelName:(id)name newName:(id)name2;
-(unsigned long)setLabelsToContact:(id)contact;
-(unsigned long)deleteLabel:(id)label;
-(unsigned long)addLabel:(id)label;
-(id)getAllLabelsFromServer;
-(id)getAllLabelsFromLocal;
-(id)getAllLabelName;
-(BOOL)isAlreadyExistTagName:(id)name;
-(id)searchLabel;
-(BOOL)searchLabel:(id)label forContact:(id)contact;
-(id)getContactsForTagName:(id)tagName;
-(id)getDicWithUserNameForAllTag;
-(id)getContactsForLabel:(id)label;
-(id)getLabelsNameForStrangerWithTagIDList:(id)tagIDList;
-(id)getLabelsNameForContact:(id)contact;
-(id)getLabelsForContact:(id)contact;
-(id)arrIDListToNameListInternal:(id)nameListInternal;
-(id)GetDicOfUserNameToTagNamesWithContacts:(id)contacts;
-(id)getDicOfUserNameAndTagNames:(id)userNameAndTagNames;
-(id)arrIdListToTagNames:(id)tagNames;
-(id)arrIdListToFormatString:(id)formatString;
-(id)arrLabelNameToIdFormatString:(id)idFormatString;
-(id)IdToLabelName:(unsigned)labelName;
-(unsigned)LabelNameToId:(id)anId;
-(void)BuildCacheDataFromContacts;
-(void)shouldGetAllLabelsFromServer:(id)server;
-(void)UpdateCacheMgrWithUserNameAndIDList:(id)userNameAndIDList;
-(void)ClearCacheDataWithNamePair:(id)namePair;
-(void)ClearCacheDataWithNames:(id)names;
-(void)UpdateCacheData:(unsigned)data LabelName:(id)name;
-(void)SaveCacheDataToFile;
-(void)CleanCurrentTagNameAndIdCache;
-(id)GetContactLabelItemsFromFile;
-(void)BuildCacheDataFromFile;
-(id)getContactTagIDListToNameList:(id)nameList;
-(void)onRemoveContactFromAddressBook:(id)addressBook;
-(void)onDeleteContact:(id)contact;
-(void)onModifyContact:(id)contact;
-(void)onManulLoginOK;
-(void)onServiceInit;
-(void)dealloc;
-(id)init;
@end

