/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIViewController.h"
#import "UITextViewDelegate.h"
#import "IFavoritesExt.h"

@class UIImageView, UILabel, UITextView, FavoritesItem, NSString, POIInfo;
@protocol FavLocRemarkDelegate;

@interface FavLocationRemarkViewController : MMUIViewController <IFavoritesExt, UITextViewDelegate> {
	FavoritesItem* m_favItem;
	POIInfo* m_locInfo;
	UIImageView* m_textBkgView;
	UITextView* m_textView;
	UIImageView* m_locImg;
	UILabel* m_poiLabel;
	UILabel* m_placeholderLabel;
	id<FavLocRemarkDelegate> m_delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<FavLocRemarkDelegate> m_delegate;
-(void).cxx_destruct;
-(void)OnUpdateItemRemark:(unsigned long)remark ErrCode:(int)code;
-(void)onFavLocRemarkComplete;
-(void)onCancel;
-(void)textViewDidChange:(id)textView;
-(void)textViewDidEndEditing:(id)textView;
-(void)textViewDidBeginEditing:(id)textView;
-(void)updateTextViewSize;
-(void)didReceiveMemoryWarning;
-(void)initView;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)viewDidLoad;
-(void)initRightBtn;
-(void)initLeftBtn;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)view;
-(id)initWithFavItem:(id)favItem;
-(id)initWithLocInfo:(id)locInfo;
@end

