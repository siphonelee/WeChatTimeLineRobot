/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextFieldDelegate.h"
#import "MMNewMultiSelectContactsLogicDelegate.h"
#import "WeChat-Structs.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "MMNewMultiSelectContactsViewControllerDelegate.h"

@class MMDelegateProxy, MMNewMultiSelectContactsLogicController, UIImageView, NSString, MMUIView, MMTableView, MMMultiSelectedContactDisplayView, UIButton, UIImage, MMUILabel, UITextField;

@interface MMNewMultiSelectContactsViewController : MMUIViewController <MMNewMultiSelectContactsLogicDelegate, UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, MMNewMultiSelectContactsViewControllerDelegate> {
	BOOL _isSearching;
	BOOL _isAllowMultiSelect;
	BOOL _isShowSelectResult;
	BOOL _m_hasReachLimit;
	MMDelegateProxy<MMNewMultiSelectContactsViewControllerDelegate>* _delegate;
	NSString* _m_rightButtonTitle;
	MMUIView* _headerContainerView;
	MMMultiSelectedContactDisplayView* _selectedDisplayView;
	MMUIView* _searchBar;
	UITextField* _searchTextField;
	MMUIView* _searchHintBkgView;
	UIImageView* _searchIconImgView;
	MMUILabel* _searchBarHintLabel;
	UIButton* _searchCancelBtn;
	MMTableView* _displayTableView;
	UIImage* _backgroundImage;
	unsigned _dataMode;
	NSString* _limitTipsContent;
	MMNewMultiSelectContactsLogicController* _logicController;
	unsigned _m_clickCount;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned m_clickCount;
@property(assign, nonatomic) BOOL m_hasReachLimit;
@property(retain, nonatomic) MMNewMultiSelectContactsLogicController* logicController;
@property(retain, nonatomic) NSString* limitTipsContent;
@property(assign, nonatomic) unsigned dataMode;
@property(assign, nonatomic) BOOL isShowSelectResult;
@property(assign, nonatomic) BOOL isAllowMultiSelect;
@property(assign, nonatomic) BOOL isSearching;
@property(retain, nonatomic) UIImage* backgroundImage;
@property(retain, nonatomic) MMTableView* displayTableView;
@property(retain, nonatomic) UIButton* searchCancelBtn;
@property(retain, nonatomic) MMUILabel* searchBarHintLabel;
@property(retain, nonatomic) UIImageView* searchIconImgView;
@property(retain, nonatomic) MMUIView* searchHintBkgView;
@property(retain, nonatomic) UITextField* searchTextField;
@property(retain, nonatomic) MMUIView* searchBar;
@property(retain, nonatomic) MMMultiSelectedContactDisplayView* selectedDisplayView;
@property(retain, nonatomic) MMUIView* headerContainerView;
@property(retain, nonatomic) NSString* m_rightButtonTitle;
@property(assign, nonatomic) __weak MMDelegateProxy<MMNewMultiSelectContactsViewControllerDelegate>* delegate;
-(void).cxx_destruct;
-(void)setRightBarButtonItem;
-(void)setLeftBarButtonItem;
-(void)setTitleBar;
-(void)showLimitTipsView;
-(void)addExistContact2DisplayView;
-(BOOL)isNeedShowSection;
-(void)searchFieldResignFirstResponder;
-(void)cancelSearch:(id)search;
-(void)onTextFieldTextChange;
-(void)onFinishBarButtonPress:(id)press;
-(void)onCloseBarButtonPress:(id)press;
-(void)onTipsViewClick:(id)click;
-(BOOL)isContactCanBeRemove:(id)remove;
-(void)onSelectedContactDisplayViewDelete:(id)aDelete;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)onSelectCountOutOfLimit;
-(void)onResultTableViewNeedReload;
-(void)onHandleCotnactTableViewSelected:(id)selected atIndexPath:(id)indexPath isSelected:(BOOL)selected3;
-(void)onGetContactSearchResult:(id)result;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;
-(id)sectionIndexTitlesForTableView:(id)tableView;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)setBackGroundImage:(id)image;
-(void)setMultiSelectLimitCount:(unsigned)count andShowTips:(id)tips;
-(void)setExistContactArray:(id)array;
-(void)setNeedShowSelectResultView:(BOOL)view;
-(void)setAllowMultiSelect:(BOOL)select;
-(void)initView;
-(void)makeBackgroundBlurView;
-(void)adjustSubviewRects;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidLoad;
-(void)commonInit;
-(id)initWithAllFriendContactsAndChatroomContact:(id)allFriendContactsAndChatroomContact;
-(id)initWithChatRoomContact:(id)chatRoomContact;
-(id)initWithAllFriendContacts;
-(void)dealloc;
@end

