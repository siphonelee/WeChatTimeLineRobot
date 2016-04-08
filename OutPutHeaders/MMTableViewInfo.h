/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMTableViewUserInfo.h"
#import "UITableViewDelegate.h"
#import "tableViewDelegate.h"
#import "UITableViewDataSource.h"

@class NSMutableArray, NSString, MMTableView;
@protocol MMTableViewInfoDelegate;

@interface MMTableViewInfo : MMTableViewUserInfo <UITableViewDelegate, UITableViewDataSource, tableViewDelegate> {
	MMTableView* _tableView;
	NSMutableArray* _arrSections;
	id<MMTableViewInfoDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic, setter=setDelegate:) __weak id<MMTableViewInfoDelegate> delegate;
+(id)genFootView:(id)view;
+(id)genHeadView:(id)view andIsUseDynamic:(BOOL)dynamic;
-(void).cxx_destruct;
-(void)touchesCancelled_TableView:(id)view withEvent:(id)event;
-(void)touchesEnded_TableView:(id)view withEvent:(id)event;
-(void)touchesMoved_TableView:(id)view withEvent:(id)event;
-(void)touchesBegan_TableView:(id)view withEvent:(id)event;
-(void)didFinishedLoading:(id)loading;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)scrollViewDidScroll:(id)scrollView;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view accessoryButtonTappedForRowWithIndexPath:(id)indexPath;
-(int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;
-(id)sectionIndexTitlesForTableView:(id)tableView;
-(id)tableView:(id)view titleForFooterInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)getCellAtSection:(unsigned long)section row:(unsigned long)row;
-(void)removeCellAt:(id)at;
-(void)removeSectionAt:(unsigned long)at;
-(id)getSectionAt:(unsigned long)at;
-(unsigned long)getSectionCount;
-(void)clearAllSection;
-(void)addSection:(id)section;
-(void)insertSection:(id)section At:(unsigned long)at;
-(void)setMainView:(BOOL)view;
-(id)getTableView;
-(id)initWithFrame:(CGRect)frame style:(int)style;
-(void)dealloc;
@end

