/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IContactLabelMgrExt.h"
#import "UITextFieldDelegate.h"
#import "WeChat-Structs.h"
#import "UIAlertViewDelegate.h"
#import "ChatRoomMemberGridViewDelegate.h"
#import "MMUIViewController.h"
#import "contactInfoDelegate.h"
#import "MMTableViewInfoDelegate.h"
#import "MultiSelectContactsViewControllerDelegate.h"

@class UILabel, NSString, ContactTagData, MMTableViewInfo, NSMutableArray, UITextField;
@protocol ContactTagDetailViewControllerDelegate;

@interface ContactTagDetailViewController : MMUIViewController <UIAlertViewDelegate, MMTableViewInfoDelegate, ChatRoomMemberGridViewDelegate, contactInfoDelegate, IContactLabelMgrExt, MultiSelectContactsViewControllerDelegate, UITextFieldDelegate> {
	ContactTagData* _contactTagData;
	int _actionType;
	unsigned long _uiJobID;
	MMTableViewInfo* m_tableViewInfo;
	NSMutableArray* m_arrMemberList;
	unsigned m_nCellCnt;
	BOOL m_bDeleteStatus;
	UITextField* m_tagNameTextField;
	UILabel* m_WarningTextLabel;
	id<ContactTagDetailViewControllerDelegate> m_delegate;
	NSString* m_title;
	NSString* m_leftBarButtonTitle;
	BOOL isAlreadyPopKeyBoardWhenCreate;
	BOOL isShowWarningText;
	BOOL isAlreadyDisMissSelf;
	BOOL isTagNameOverLimit;
	int TagCountOfMutiSelectScene;
	BOOL m_bIsFromContactTagHelloWorld;
	NSString* ns_CurTagNameTextFieldValue;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* m_leftBarButtonTitle;
@property(retain, nonatomic) NSString* m_title;
@property(assign, nonatomic) BOOL m_bIsFromContactTagHelloWorld;
@property(retain, nonatomic) NSString* ns_CurTagNameTextFieldValue;
@property(assign, nonatomic) __weak id<ContactTagDetailViewControllerDelegate> m_delegate;
-(void).cxx_destruct;
-(void)onDeleteContactLabel:(id)label withRetCode:(int)retCode andEventId:(unsigned long)anId;
-(void)setContactLabel:(id)label withRetCode:(int)retCode andEventId:(unsigned long)anId;
-(void)onAddContactLabel:(id)label withRetCode:(int)retCode andEventId:(unsigned long)anId;
-(void)updateContactLabelName:(id)name withRetCode:(int)retCode andEventId:(unsigned long)anId;
-(void)reloadMemberListAndView:(id)view isChatRoomList:(BOOL)list;
-(void)onMultiSelectContactReturn:(id)aReturn;
-(void)openContactInfo:(id)info;
-(void)onDeleteMember:(id)member;
-(void)onLongPressEx:(id)ex;
-(void)setShowRemoveMember;
-(void)addMember;
-(void)ShowMultiSelectContactsViewController:(id)controller;
-(void)onTagNameChanged:(id)changed;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)textFieldShouldClear:(id)textField;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(unsigned long)JobForContactTagChanged;
-(unsigned long)JobForTagNameWithServer;
-(BOOL)isTagNameEmpty:(id)empty;
-(BOOL)isTagNameEmptyOrExist:(id)exist;
-(BOOL)isContactTagListChanged;
-(BOOL)isTagNameChanged;
-(BOOL)isTagNameCreated;
-(void)didReceiveMemoryWarning;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)SetSaveButtonEnable:(BOOL)enable;
-(void)onSave:(id)save;
-(void)onDismiss:(id)dismiss;
-(void)InternalDisMissSelfAnimated:(BOOL)animated;
-(void)initView;
-(void)reloadTableData;
-(void)makeDeleteBtnCell:(id)cell CellInfo:(id)info;
-(void)onTagDeleteButtonPress:(id)press;
-(id)makeDeleteBtnSection;
-(id)makeMemListSection;
-(void)makeWhiteCell:(id)cell CellInfo:(id)info;
-(int)getColCount;
-(void)makeMemListCell:(id)cell CellInfo:(id)info;
-(void)updateToNormalStatusEx;
-(void)updateMemberView;
-(unsigned)getBtnList:(id)list;
-(void)HideWarningText;
-(void)ShowWarningText:(id)text;
-(void)makeWarningTextCell:(id)cell CellInfo:(id)info;
-(id)makeInfoHeaderSection;
-(void)makeTagNameCell:(id)cell CellInfo:(id)info;
-(void)initData;
-(void)LoadMemberList;
-(void)sortTagContacts;
-(void)dealloc;
-(id)initWithMembers:(id)members;
-(id)initWithItem:(id)item;
@end
