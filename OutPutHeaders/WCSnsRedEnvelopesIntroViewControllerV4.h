/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "WeChat-Structs.h"
#import "UIAlertViewDelegate.h"
#import "MMUIViewController.h"
#import "IMMGrowTextViewExt.h"
#import "IMMAssetICloudExt.h"
#import "WCMultiImageScannerDelegateForHB.h"
#import "MMTableViewInfoDelegate.h"
#import "InputControllerDelegate.h"
#import "BaseEmoticonViewDelegate.h"

@class UILabel, UIView, UIImageView, NSString, UIButton, EmoticonBoardView, MMGrowTextView, MMTableViewInfo, ImageSelectorController, NSMutableArray, WCInputController;
@protocol WCSnsRedEnvelopesCommitViewControllerDelegateV4;

@interface WCSnsRedEnvelopesIntroViewControllerV4 : MMUIViewController <InputControllerDelegate, BaseEmoticonViewDelegate, IMMAssetICloudExt, WCMultiImageScannerDelegateForHB, IMMGrowTextViewExt, WCActionSheetDelegate, MMTableViewInfoDelegate, UIAlertViewDelegate> {
	id<WCSnsRedEnvelopesCommitViewControllerDelegateV4> m_delegate;
	NSMutableArray* m_arrMMImages;
	UIImageView* _titleImageView;
	UILabel* _titleTipLabel;
	UIImageView* _cameraBgImageView;
	UIButton* _cameraBtn;
	CGRect _cameraBtnFrameInFirstPage;
	UIImageView* _hbImageView;
	UIView* _blurView;
	UILabel* _secondTitleTipLabel;
	ImageSelectorController* _imageSelectorController;
	MMTableViewInfo* _tableViewInfo;
	WCInputController* _inputController;
	MMGrowTextView* _textView;
	UIImageView* _inputView;
	BOOL _bHasInput;
	BOOL m_hasClickDone;
	NSString* _loadingOKStr;
	unsigned _singlePasteTextMaxLength;
	BOOL _isFirstPage;
	BOOL _isAnimating;
	UIButton* _expressionButton;
	UIView* _bottomTipView;
	UIImageView* _upLineImageView;
	UIImageView* _bottomLineImageView;
	BOOL m_hasICloudImage;
	BOOL m_hasConfirmReturn;
	BOOL bCommmitOnlyText;
	id<WCSnsRedEnvelopesCommitViewControllerDelegateV4> _commitDelegate;
	EmoticonBoardView* m_emoticonBoardView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL m_hasICloudImage;
@property(assign, nonatomic) BOOL m_hasConfirmReturn;
@property(retain, nonatomic) EmoticonBoardView* m_emoticonBoardView;
@property(assign, nonatomic) BOOL bCommmitOnlyText;
@property(retain, nonatomic) NSString* loadingOKStr;
@property(assign, nonatomic) __weak id<WCSnsRedEnvelopesCommitViewControllerDelegateV4> commitDelegate;
@property(assign, nonatomic) __weak id<WCSnsRedEnvelopesCommitViewControllerDelegateV4> m_delegate;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onDeleteItemAtIndex:(unsigned)index;
-(void)updateStatus:(BOOL)status;
-(void)asynedHbImageViewTapped;
-(void)hbImageViewTapped;
-(void)MMImagePickerManagerDidCancel:(id)mmimagePickerManager;
-(void)animateToShowImage;
-(void)initSecondTitleTipLabel;
-(void)setBorderColor:(id)color withView:(id)view;
-(void)setBorder:(id)border;
-(void)MMImagePickerManager:(id)manager didFinishPickingImageWithInfo:(id)info;
-(void)showImagePicker:(int)picker;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)didReceiveMemoryWarning;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)onCameraBtnClick;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)doExit;
-(void)onClose;
-(void)initGradientBgView;
-(float)calTextViewMinHeight;
-(void)initTableView;
-(void)initView;
-(id)getFontWithSize:(float)size;
-(void)viewDidLoad;
-(void)sendAnimation;
-(void)resignInput;
-(void)onPostTimeline;
-(BOOL)checkImageState;
-(void)afterProcessSingleImage;
-(BOOL)processImage;
-(void)OnDone;
-(void)initRightButtonItem;
-(void)initNavBar;
-(BOOL)useTransparentNavibar;
-(void)dealloc;
-(void)commonInit;
-(id)init;
-(void)onPrivacyCellClicked;
-(void)onTextView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)onAssetImageDonwloadProgress:(double)progress assetUrl:(id)url;
-(void)onAssetImageDonwloadStart:(id)start;
-(void)reloadExpressionButtonImage:(int)image;
-(void)onExpressionButtonClicked:(id)clicked;
-(void)keyboardDidHide;
-(void)textViewTextDidChange;
-(void)keyboardWillShow;
-(void)MMGrowTextViewBeginEditing:(id)editing;
-(void)MMGrowTextViewHeightDidChanged:(id)mmgrowTextViewHeight;
-(void)didCommitText:(id)text;
-(void)resignInput;
-(void)becomeInput;
-(void)updateContentOffset;
-(void)initInputController;
-(void)initEmoticonView;
-(id)getGroupDesc;
-(void)updateGroupBtn;
-(void)initInputToolView;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)touchesBegan_ScrollView:(id)view withEvent:(id)event;
@end

