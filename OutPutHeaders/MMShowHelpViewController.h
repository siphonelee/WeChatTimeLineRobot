/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"
#import "WeChat-Structs.h"
#import "UIAlertViewDelegate.h"

@class UIScrollView, NSString;

@interface MMShowHelpViewController : MMUIViewController <UIAlertViewDelegate> {
	UIScrollView* mScrollView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIScrollView* mScrollView;
-(void).cxx_destruct;
-(void)OnXXX;
-(void)OnDataChange;
-(void)viewDidLoad;
-(void)initView;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)onHardwareDebug;
-(void)onJsDebug;
-(void)onUploadData;
-(void)onRecoverData;
-(void)onUpLoadLog;
-(void)initData;
@end

