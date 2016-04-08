/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "MMSearchBarDelegate.h"
#import "ContactsDataLogicDelegate.h"

@class NSDictionary, UIView, ContactsDataLogic, NSString, MMTableView, NSMutableDictionary, MMSearchBar;
@protocol ContactSelectViewDelegate;

@interface ContactSelectView : XXUnknownSuperclass <UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource, MMSearchBarDelegate, WCActionSheetDelegate, ContactsDataLogicDelegate> {
	id<ContactSelectViewDelegate> m_delegate;
	MMTableView* m_tableView;
	NSDictionary* m_dicExistContact;
	BOOL m_bShowHistoryGroup;
	BOOL m_bShowRadarCreateRoom;
	BOOL m_bMultiSelect;
	NSMutableDictionary* m_dicMultiSelect;
	ContactsDataLogic* m_contactsDataLogic;
	unsigned long m_uiGroupScene;
	UIView* _tableFooterView;
	NSString* nsCurrentSearchText;
	MMSearchBar* m_mmSearchBar;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableDictionary* m_dicMultiSelect;
@property(assign, nonatomic) unsigned long m_uiGroupScene;
@property(assign, nonatomic) BOOL m_bMultiSelect;
@property(assign, nonatomic) BOOL m_bShowRadarCreateRoom;
@property(assign, nonatomic) BOOL m_bShowHistoryGroup;
@property(retain, nonatomic) NSDictionary* m_dicExistContact;
@property(assign, nonatomic) __weak id<ContactSelectViewDelegate> m_delegate;
-(void).cxx_destruct;
-(void)didSearchViewTableSelect:(id)select;
-(float)heightForSearchViewTable:(id)searchViewTable;
-(id)cellForSearchViewTable:(id)searchViewTable index:(id)index;
-(void)searchTextFieldDidBeginEditing;
-(void)resetTableViewOffset:(id)offset;
-(void)cancelSearch;
-(void)doSearch:(id)search Pre:(BOOL)pre;
-(void)onContactAsynSearchResultChanged:(BOOL)changed;
-(BOOL)onFilterContactCandidate:(id)candidate;
-(void)onContactsDataChange;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;
-(id)sectionIndexTitlesForTableView:(id)tableView;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)reloadTableView;
-(unsigned)getTotalSelectCount;
-(void)handleSelectRadarCreateRoom;
-(void)handleSelectHistoryGroup;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)makeHistoryGroupCell:(id)cell;
-(void)makeMultiTalkSessionCell:(id)cell;
-(void)makeRadarCreateRoomCell:(id)cell;
-(void)makeCell:(id)cell tableCell:(id)cell2 section:(unsigned)section row:(unsigned)row;
-(void)makeGroupCell:(id)cell head:(id)head title:(id)title;
-(void)makeCell:(id)cell contact:(id)contact;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)dealloc;
-(void)initView;
-(void)initTableView;
-(void)initSearchBar;
-(void)setExtraCellLineHidden:(id)hidden;
-(void)initData:(unsigned long)data;
-(BOOL)updateMultiSelect:(id)select;
-(void)addSelect:(id)select;
-(id)getCellTextView:(id)view;
-(id)getCellImage:(id)image;
-(BOOL)isSelected:(id)selected;
-(BOOL)isExisted:(id)existed;
-(void)removeSelect:(id)select;
-(id)initWithFrame:(CGRect)frame delegate:(id)delegate;
@end

