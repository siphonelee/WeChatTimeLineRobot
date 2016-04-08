/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIViewController.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class UITableView, UILabel, UIView, NSTimer, UIImageView, NSString, UIButton, NSDateFormatter, UIScrollView, NSMutableArray, UIPageControl;

@interface WCAddWatchcontactsGuideViewController : MMUIViewController <UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate> {
	UIButton* leftNavButton;
	UIButton* rightNavButton;
	UIPageControl* _pageControl;
	NSMutableArray* _recommendConstancts;
	NSMutableArray* _selectedConstanctsArr;
	UITableView* _contactsTable;
	UIScrollView* _scrollView;
	NSMutableArray* _checkImageArr;
	UIView* _progressLine;
	UILabel* _timeLabel;
	UIImageView* _watch;
	NSDateFormatter* _dateformatter;
	NSTimer* _tickTimer;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)selectcontact:(id)selectcontact;
-(void)skipAddcontacts;
-(void)addcontactsComplete;
-(void)handleTimer;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)stopTimer;
-(void)startAnimation;
-(void)setAvatarInScrollView:(id)scrollView withAvatarArr:(id)avatarArr;
-(void)setNavigationbar;
-(void)initUI;
-(void)dealloc;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)init;
@end

