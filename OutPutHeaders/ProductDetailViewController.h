/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "SendAppMsgHandleDelegate.h"
#import "MMUIViewController.h"
#import "MMWebImageViewDelegate.h"
#import "IScanBookMgrExt.h"
#import "ProductDetailLogicHelperDelegate.h"
#import "ProductTableViewDelegate.h"

@class ProductDetailLogicHelper, SendAppMsgHandler, UIView, UIImageView, NSString, ScanProductItem, UIButton, MMAnimationTipView, UIImage, MMWebImageView, ProductTableView;
@protocol ProductDetailViewControllerDelegate;

@interface ProductDetailViewController : MMUIViewController <MMWebImageViewDelegate, ProductDetailLogicHelperDelegate, ProductTableViewDelegate, WCActionSheetDelegate, SendAppMsgHandleDelegate, IScanBookMgrExt> {
	BOOL _canShareToFriend;
	BOOL _canShareToWC;
	BOOL _canAddToFav;
	BOOL _canEditTag;
	BOOL _canDelete;
	id _userdata;
	UIView* _infoView;
	float _infoViewHeight;
	MMWebImageView* _infoBgView;
	UIImageView* _blurView;
	UIImage* _snapShotImg;
	UIView* _maskView;
	MMWebImageView* _thumbImgView;
	UIButton* _containView;
	ScanProductItem* _productItem;
	NSString* _qrcodeUrl;
	ProductTableView* _productTableView;
	SendAppMsgHandler* _sendAppMsgHandler;
	MMAnimationTipView* _tipView;
	ProductDetailLogicHelper* _logicHelper;
	unsigned long _fromScene;
	UIImageView* _disclosureBtn;
	int _functionType;
	double beginTime;
	id<ProductDetailViewControllerDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<ProductDetailViewControllerDelegate> delegate;
@property(retain, nonatomic) id userdata;
@property(assign, nonatomic) BOOL canDelete;
@property(assign, nonatomic) BOOL canEditTag;
@property(assign, nonatomic) BOOL canAddToFav;
@property(assign, nonatomic) BOOL canShareToWC;
@property(assign, nonatomic) BOOL canShareToFriend;
-(void).cxx_destruct;
-(void)onLoadImageOK:(id)ok;
-(void)onEditProductTag;
-(void)onDeleteProduct;
-(void)OnSendAppMsgOK;
-(void)updateInfoViewAlpha:(float)alpha;
-(void)onProuductTableViewDidScroll:(id)onProuductTableView;
-(void)updateInfoViewSnapshot;
-(id)getThumbImageData;
-(id)getMessageWrap:(id)wrap;
-(id)getUpLoadTask:(id)task;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)onAction:(id)action;
-(void)onCertificationClick;
-(void)onHeaderClick;
-(void)onExposeClick;
-(void)onIntroTitleClick;
-(void)dealloc;
-(void)viewDidTransitionToNewSize;
-(void)viewDidLayoutSubviews;
-(void)viewWillBeDismissed:(BOOL)view;
-(void)viewWillBePoped:(BOOL)view;
-(void)viewDidLoad;
-(void)OnReturn;
-(void)initView;
-(unsigned long)getJumpProfileScenceFromFunctionType;
-(unsigned long)getGetA8KeyScenceFromFunctionType;
-(void)setTableFooterView;
-(void)initTableView;
-(void)headerTouchUp:(id)up;
-(void)headerTouchDown:(id)down;
-(void)initInfoView;
-(BOOL)useTransparentNavibar;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)onAsyncDataRefreshed:(id)refreshed;
-(void)OnGetRemoteProductItem:(id)item QRCodeUrl:(id)url Error:(int)error;
-(void)startAsyncGetActionInfo;
-(id)initWithExtContent:(id)extContent Scence:(unsigned long)scence;
-(id)initWithQRCodeUrl:(id)qrcodeUrl Scence:(unsigned long)scence FunctionType:(int)type;
-(id)initWithScanItem:(id)scanItem FunctionType:(int)type;
@end

