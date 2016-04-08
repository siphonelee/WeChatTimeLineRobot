/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MMScrollActionSheetIconViewDelegate.h"

@class MMUILabel, UIViewController, NSArray, UIView, NSString, UIButton, UIPopoverController;
@protocol MMScrollActionSheetDelegate;

@interface MMScrollActionSheet : XXUnknownSuperclass <MMScrollActionSheetIconViewDelegate, UIScrollViewDelegate, UIPopoverPresentationControllerDelegate> {
	unsigned _rowCount;
	NSArray* _dataAry;
	NSString* _description;
	NSString* _cancelTitle;
	MMUILabel* _titleLabel;
	UIView* _containerView;
	UIView* _transparentView;
	UIButton* _cancelButton;
	int _lastOrientation;
	UIPopoverController* _popoverController;
	UIViewController* _popoverControllerNew;
	BOOL _isShowed;
	id<MMScrollActionSheetDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<MMScrollActionSheetDelegate> delegate;
-(void).cxx_destruct;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)didRotate:(id)rotate;
-(void)handleTap:(id)tap;
-(void)dismissAnimated:(BOOL)animated;
-(void)showInView:(id)view;
-(int)adaptivePresentationStyleForPresentationController:(id)presentationController;
-(void)onCancelBtnClicked;
-(void)setupCancelButton;
-(void)setupTitle;
-(void)setupTransparentView;
-(void)onActionSheetIconView:(id)view didTapedWithItem:(id)item;
-(void)setupScrollViews;
-(void)setupContainerView;
-(BOOL)isSupportVisualEffect;
-(void)dealloc;
-(id)initWithItems:(id)items desciption:(id)desciption cancelButtonTitle:(id)title;
@end

