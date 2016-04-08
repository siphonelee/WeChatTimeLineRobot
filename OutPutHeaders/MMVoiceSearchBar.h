/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IVOIPUILogicMgrExt.h"
#import "IRecordPermissionCheckExt.h"
#import "VoiceSearchContactsViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "SearchGuideViewDelegate.h"
#import "WeChat-Structs.h"
#import "MMSearchBar.h"
#import "IVoiceSearchExt.h"

@class VoiceRecogView, UIViewController, UIView, NSString, UIButton, SearchGuideView;
@protocol MMVoiceSearchBarDelegate, MMVoiceSearchDelegate;

@interface MMVoiceSearchBar : MMSearchBar <IVOIPUILogicMgrExt, UIAlertViewDelegate, IVoiceSearchExt, IRecordPermissionCheckExt, VoiceSearchContactsViewDelegate, SearchGuideViewDelegate> {
	UIButton* m_voiceSearchBackButton;
	UIButton* m_searchingCancelButton;
	UIViewController* m_parentViewController;
	UIView* m_preventSearchBarView;
	UIButton* m_voiceSearchBtn;
	int m_voiceSearchStatus;
	int m_voiceSearchSpecies;
	BOOL m_useDefaultDisplayController;
	BOOL m_indexBarEffect;
	VoiceRecogView* m_voiceRecogView;
	id<MMVoiceSearchDelegate> m_voiceSearchDelegate;
	id<MMVoiceSearchBarDelegate> m_voiceSearchBarDelegate;
	unsigned long m_voiceID;
	BOOL m_bVoiceSearchEnabled;
	BOOL m_bRealTimeSearch;
	float m_fCancelButtonWidth;
	BOOL m_showBlurEffectView;
	SEL mRecordSelector;
	SearchGuideView* _ftsGuideView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic, getter=getSearchGuideView) SearchGuideView* ftsGuideView;
@property(assign, nonatomic) BOOL m_showBlurEffectView;
@property(assign, nonatomic) BOOL m_bRealTimeSearch;
@property(assign, nonatomic) SEL mRecordSelector;
@property(assign, nonatomic) __weak id<MMVoiceSearchBarDelegate> m_voiceSearchBarDelegate;
@property(assign, nonatomic) __weak id<MMVoiceSearchDelegate> m_voiceSearchDelegate;
-(void).cxx_destruct;
-(void)handleRotateEvent;
-(void)resetVoiceSearchBarFrame;
-(void)SimulateSearchBackBtnClick;
-(void)SetVoiceSearchBackBtnOnTheView:(BOOL)view;
-(void)hideVoiceSearch;
-(BOOL)isVoiceSearchActive;
-(void)finishSearch;
-(void)startSearchTableViewCancelingAnimation;
-(void)hiddenBlurEffectView;
-(void)voiceSearchViewErrorCancelButtonDone;
-(void)voiceSearchCancelButtonDone;
-(void)voiceSearchRecordDone;
-(void)OnError:(int)error andSearchId:(unsigned long)anId;
-(void)OnGetSearchResult:(id)result andSearchId:(unsigned long)anId;
-(void)OnLevelMeter:(unsigned long)meter Peak:(float)peak;
-(void)OnEndRecord;
-(void)OnStartRecord;
-(void)showContactInfoView:(id)view;
-(void)openContactInfoView:(int)view;
-(BOOL)handleVoiceSearchResults:(id)results;
-(id)usrNameConvertToOContacts:(id)ocontacts;
-(id)filterContactsViewContacts:(id)contacts;
-(unsigned long)getVoiceID;
-(id)voiceSearchResultsTableView:(id)view andCell:(id)cell cellForRowAtIndexPath:(id)indexPath;
-(int)voiceSearchResultsTableView:(id)view numberOfRowsInSection:(int)section;
-(void)voiceSearchResultsTableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)voiceSearchResultsTableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)voiceSearchContactsViewCancel;
-(void)voiceSearchContactsViewBack;
-(void)tryShowBlurEffectView;
-(void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;
-(void)searchDisplayController:(id)controller willHideSearchResultsTableView:(id)view;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(BOOL)searchBar:(id)bar shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)searchBarTextDidEndEditing:(id)searchBarText;
-(BOOL)searchBarShouldEndEditing:(id)searchBar;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(id)findCancelButton:(id)button;
-(BOOL)searchBarShouldBeginEditing:(id)searchBar;
-(void)voiceSearchRestart;
-(void)voiceSearchBackToPreviousView;
-(void)OnRecordPermissioned;
-(void)OnRecordDenied;
-(void)voiceSearchByMainFrameRealDone;
-(void)voiceSearchStartByNewMainFrame;
-(void)adjustDimmingViewRect;
-(void)voiceSearchBtnRealDone;
-(void)voiceSearchButtonDone;
-(void)voiceSearchButtonClick;
-(void)backButtonDone:(id)done;
-(BOOL)stopVoiceSearch;
-(void)startVoiceSearch;
-(BOOL)callVoiceSearchMgrStop;
-(void)callVoiceSearchMgrStart;
-(void)statusFrameChange:(id)change;
-(void)showVoiceSearchButton:(BOOL)button;
-(void)dealloc;
-(id)initWithContentsController:(id)contentsController withParentViewController:(id)parentViewController withSpecies:(int)species withUseDefaultDisplayController:(BOOL)useDefaultDisplayController hasIndexBar:(BOOL)bar;
-(id)initWithContentsController:(id)contentsController withParentViewController:(id)parentViewController withSpecies:(int)species withUseDefaultDisplayController:(BOOL)useDefaultDisplayController;
-(void)onVideoVoipViewDisappear;
-(void)onVideoVoipViewDidAppear:(id)onVideoVoipView;
-(BOOL)setVoiceSearchStatusFrom:(int)from transferToStatus:(int)status;
-(BOOL)setVoiceSearchStatusFrom:(int)from transferToStatus:(int)status withVoiceID:(int)voiceID;
-(BOOL)canFromStatus:(int)status transferToStatus:(int)status2;
-(void)loadView;
-(void)setVoiceSearchBarFrame:(BOOL)frame animation:(BOOL)animation;
-(void)setVoiceSearchToParentView:(id)parentView;
@end

