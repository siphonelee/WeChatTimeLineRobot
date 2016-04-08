/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"
#import "MMImgageBrowseViewDelegate.h"

@class UIImage, NSString, MMImageBrowseView;
@protocol ImageBrowseDelegate;

@interface PickImageForCommonViewController : MMUIViewController <MMImgageBrowseViewDelegate> {
	MMImageBrowseView* m_imageView;
	UIImage* m_image;
	id<ImageBrowseDelegate> m_delegate;
	id m_singleTapOnNav;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<ImageBrowseDelegate> m_delegate;
@property(retain, nonatomic) id m_singleTapOnNav;
-(void).cxx_destruct;
-(void)onSingleTapImageBrowseView;
-(void)doCancel;
-(void)doSelect;
-(void)onSingleTapOnNavigationBar:(id)bar;
-(void)dealloc;
-(id)initWithImage:(id)image;
-(void)onTopBarFrameChanged;
-(void)willAppear;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillBePoped:(BOOL)view;
-(void)viewDidLoad;
-(void)initView;
-(void)initImageView;
-(void)initNavigationBar;
-(void)exitFullScreen;
-(void)setFullScreen:(BOOL)screen;
-(void)removeNvGestureRecognizer;
-(void)addNvGestureRecognizer;
-(void)handleViewWillDisappear;
-(void)handleViewWillAppear;
-(void)showStatusBar;
-(void)hideStatusBar;
-(void)adjustImageViewRect;
@end

