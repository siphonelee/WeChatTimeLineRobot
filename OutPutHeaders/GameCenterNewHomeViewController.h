/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "IGameCenterExt.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "MMSearchBarDelegate.h"
#import "GameCenterSearchLogicControllerDelegate.h"
#import "GameCenterUserActionCellDelegate.h"
#import "GameCenterRecentGamesCellDelegate.h"
#import "GameCenterNewFeedsCellDelegate.h"
#import "GameCenterRankedGameInfoCellDelegate.h"
#import "IGameCenterMsgNotifyExt.h"

@class GameCenterSearchLogicController, MMLoadingView, UIView, NSString, MMTableView, GameCenterNotifyContent, NSMutableArray, GameCenterHomeData;

@interface GameCenterNewHomeViewController : MMUIViewController <MMSearchBarDelegate, GameCenterSearchLogicControllerDelegate, UITableViewDelegate, UITableViewDataSource, GameCenterUserActionCellDelegate, GameCenterRecentGamesCellDelegate, IGameCenterExt, IGameCenterMsgNotifyExt, GameCenterNewFeedsCellDelegate, GameCenterRankedGameInfoCellDelegate> {
	NSMutableArray* _resultGroupList;
	MMLoadingView* _loadingView;
	UIView* _bgBlurView;
	GameCenterSearchLogicController* _searchLogic;
	NSMutableArray* _sectionList;
	NSMutableArray* _rowListOfSectionMe;
	GameCenterHomeData* _homeData;
	MMTableView* _tableView;
	BOOL _fromFindFriendEntry;
	NSString* _adAppID;
	NSString* _adNoticeID;
	int _sourceScene;
	GameCenterNotifyContent* _gameCenterBubble;
	GameCenterNotifyContent* _msgCenterRedDotMsg;
	int _entryNotifyType;
	GameCenterNotifyContent* _giftRedDot;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) GameCenterNotifyContent* giftRedDot;
@property(retain, nonatomic) GameCenterNotifyContent* msgCenterRedDotMsg;
@property(retain, nonatomic) GameCenterNotifyContent* gameCenterBubble;
@property(assign, nonatomic) int entryNotifyType;
-(void).cxx_destruct;
-(void)onGameCenterDeleteOneMsg:(unsigned long)msg;
-(void)onGameCenterDeleteAllMsg;
-(void)onGameCenterClearAllRedDot;
-(void)checkDBAutoRecover;
-(void)onStopSearch;
-(void)onStartSearch;
-(void)onOpenSearchWebResultItem:(id)item;
-(void)onOpenSearchGameRecommendResultItem:(id)item;
-(void)onOpenSearchGameResultItem:(id)item sourceScene:(int)scene;
-(void)searchBarDidEndSearch;
-(void)searchBarBecomeFirstResponder;
-(void)viewWillLayoutSubviews;
-(void)updateSearchLogic;
-(void)reloadAfterRedDotChanged;
-(void)onFetchGameCenterHomeData:(id)data error:(int)error;
-(void)onInstalledMoreIconClicked:(id)clicked;
-(void)onRecentGameIconClicked:(id)clicked;
-(void)handleDownloadButtonClicked:(id)clicked Action:(int*)action;
-(void)rankedGameInfoCellDownloadButtonClicked:(id)clicked;
-(void)feedGameInfoClicked:(id)clicked;
-(void)userActionButtonClickedAtIndex:(unsigned)index;
-(void)feedBackButtonClicked;
-(void)bubbleButtonClicked;
-(void)openGameListView;
-(void)showWebViewWithUrl:(id)url title:(id)title;
-(void)openGameDetailViewWithGameInfo:(id)gameInfo sourceScene:(int)scene;
-(int)launchGameOrOpenDetailViewWithGameInfo:(id)gameInfo sourceScene:(int)scene;
-(id)makeBubbleCellWithReusableCell:(id)reusableCell identifier:(id)identifier;
-(id)makeRecentCellWithReusableCell:(id)reusableCell identifier:(id)identifier;
-(id)makeFeedBackCellWithReusableCell:(id)reusableCell identifier:(id)identifier;
-(id)makeMoreGamesCellWithReusableCell:(id)reusableCell identifier:(id)identifier;
-(id)makeFeedsFriendCellWithReusableCell:(id)reusableCell identifier:(id)identifier;
-(id)makeFeedsGameCellWithReusableCell:(id)reusableCell identifier:(id)identifier;
-(id)makePromotedGameCellWithReusableCell:(id)reusableCell identifier:(id)identifier index:(int)index;
-(id)makeMyActionsCellWithReusableCell:(id)reusableCell identifier:(id)identifier;
-(id)makeMyInfoCellWithReusableCell:(id)reusableCell identifier:(id)identifier;
-(void)viewDidTransitionToNewSize;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)initTableView;
-(id)titleOfSectionType:(unsigned)sectionType;
-(unsigned)typeOfRow:(id)row;
-(unsigned)typeOfSection:(int)section;
-(void)reloadRows;
-(void)reloadSections;
-(id)libraryEntranceTitle;
-(BOOL)shouldShowFeedBackEntrance;
-(BOOL)shouldShowBubble;
-(id)promotedGames;
-(id)installedMore;
-(id)recentGames;
-(id)feedItem;
-(id)feedGameInfo;
-(id)userInfo;
-(id)userActionCellItems;
-(BOOL)initData;
-(void)didReceiveMemoryWarning;
-(void)viewDidAppear:(BOOL)view;
-(void)showSettingView;
-(void)initRightBarBtns;
-(void)viewDidLoad;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)view;
-(id)initWithSourceScene:(int)sourceScene;
-(id)init;
@end

