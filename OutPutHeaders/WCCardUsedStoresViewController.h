/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UIAlertViewDelegate.h"
#import "IWCCardPkgExt.h"
#import "WCCardUsedStoreViewDelegate.h"

@class NSArray, NSString, MMTableView;
@protocol WCCardDataSource;

@interface WCCardUsedStoresViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, IWCCardPkgExt, WCCardUsedStoreViewDelegate> {
	id<WCCardDataSource> _cardDataSource;
	NSArray* _tableDatas;
	MMTableView* _tableView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onNavigation:(id)navigation;
-(void)hardCodeData;
-(void)onGetUsedStoreList:(id)list ErrCode:(int)code;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)onRetrieveLocation:(int)location;
-(void)makeStoreCell:(id)cell storeInfo:(id)info;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)initView;
-(void)initData;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)initWithCardDataSource:(id)cardDataSource;
-(void)dealloc;
@end

