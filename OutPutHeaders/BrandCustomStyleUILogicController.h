/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "IUiUtilExt.h"
#import "IBrandCustomReportExt.h"
#import "CustomMenuToolViewDelegate.h"
#import "CustomSubMenuFloatViewDelegate.h"
#import "CameraScanLogicDelegate.h"
#import "BrandStyleUILogicController.h"
#import "CameraScanUIDelegate.h"
#import "BrandOpenSpecificViewHandlerDelegate.h"

@class ClickCommandRequestInfo, CustomMenuToolView, BrandOpenSpecificViewHandler, CustomSubMenuFloatView, NSString, MMBizMenuInfo, NSMutableArray;

@interface BrandCustomStyleUILogicController : BrandStyleUILogicController <CustomMenuToolViewDelegate, CustomSubMenuFloatViewDelegate, CameraScanLogicDelegate, CameraScanUIDelegate, WCActionSheetDelegate, IBrandCustomReportExt, BrandOpenSpecificViewHandlerDelegate, IUiUtilExt> {
	CustomMenuToolView* m_menuToolView;
	CustomSubMenuFloatView* m_subMenuFloatView;
	MMBizMenuInfo* m_menuData;
	BOOL m_isInMenuMode;
	BOOL m_isMsgReceiving;
	BrandOpenSpecificViewHandler* _openSpecificViewHandler;
	BOOL m_hasInit;
	ClickCommandRequestInfo* m_reportInfo;
	BOOL m_hasSendCgiSuccess;
	NSMutableArray* m_pickImageMd5List;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* m_pickImageMd5List;
@property(retain, nonatomic) ClickCommandRequestInfo* m_reportInfo;
@property(retain, nonatomic) MMBizMenuInfo* m_menuData;
@property(retain, nonatomic) CustomSubMenuFloatView* m_subMenuFloatView;
@property(retain, nonatomic) CustomMenuToolView* m_menuToolView;
-(void).cxx_destruct;
-(BOOL)isNoNeedShowNormalToolView;
-(void)updateIfCreateToolView:(id)view;
-(void)showAlertViewForMenuUpdated;
-(void)removeCustomToolView;
-(void)updateIfViewDidAppear;
-(void)updateIfViewWillAppear;
-(void)addMsgForUsr:(id)usr;
-(void)processLocationDidFinish;
-(void)saveAchievedImageMd5:(id)a5;
-(BOOL)shouldSaveAchievedImageMd5;
-(void)processImageDidFinish;
-(void)processImageDidCancel;
-(BOOL)shouldHideOrginInputToolView;
-(float)getCustomizedAreaWidth;
-(void)setLastMenuMode:(BOOL)mode;
-(BOOL)getLastMenuMode;
-(BOOL)canReloadViewIfMemoryWarning;
-(BOOL)CanRotateOrientation;
-(BOOL)isShakeEnabled;
-(void)onTopBarFrameChanged;
-(void)updateFloatContentView;
-(BOOL)hasDraft;
-(id)buttonListFromArr:(id)arr;
-(id)getSubMenuInfoByIndex:(int)index;
-(id)getMenuInfo;
-(void)stopReceiveMsg;
-(void)startReceiveMsg;
-(BOOL)shouldDismissCurrentViewController;
-(void)cleanPickImageMd5List;
-(void)addItem2PickImageMd5List:(id)list;
-(id)getPickImageMd5List;
-(void)createCameraScanViewController;
-(void)SendClickNotify:(id)notify ClickCommandRequestInfo:(id)info;
-(void)onReportActionEventAndContentXML:(id)xml;
-(id)getCDATAWithJSON:(id)json;
-(void)onRecordActionEvent:(id)event toBrand:(id)brand;
-(void)onReportClickEvent:(id)event toBrand:(id)brand;
-(void)finishedChangeToInputMode;
-(void)onChangeToInputMode;
-(void)finishedChangeToMenuMode;
-(void)swichToolViewToCustomView;
-(void)changeToMenuMode;
-(BOOL)shouldShowChangeModeBtn;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(BOOL)shouldDirectShowImagePicker;
-(void)obtainScanResultDidFinish:(id)obtainScanResult;
-(BOOL)shouldBackToSessionImmediately;
-(BOOL)shouldObtainScanResult;
-(void)onJumpToPOIView:(id)poiview;
-(void)onJumpToPicView:(id)picView;
-(void)onJumpToScanView:(id)scanView;
-(void)handleOpenSpecificView:(id)view;
-(BOOL)isOpenNativeUrl:(id)url;
-(BOOL)isWeGoRecommed:(id)recommed;
-(BOOL)isOpenSpecificView:(id)view;
-(void)onDisconnectDevice;
-(void)onConnectDevice;
-(BOOL)onJumpToNativeView:(id)nativeView;
-(void)onJumpToWebView:(id)webView;
-(void)onRecordActionEvent:(id)event;
-(void)onReportClickEvent:(id)event;
-(void)onChangeToMenuMode:(id)menuMode;
-(void)onSubMenuDismiss;
-(void)onSubMenuPresentWithIndex:(int)index ArrowX:(float)x;
-(void)createMenuToolView;
-(void)loadMenuData;
-(id)initWithContact:(id)contact WithDelegate:(id)delegate;
-(void)dealloc;
@end

