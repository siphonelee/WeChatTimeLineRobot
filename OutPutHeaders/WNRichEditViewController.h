/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIViewController.h"
#import "WNNoteRichEditDelegate.h"
#import "UIWebViewDelegate.h"

@class NSArray, UIView, WNJsBridge, NSString, NSMutableDictionary, UIWebView, WNRichEditWebView;

@interface WNRichEditViewController : MMUIViewController <UIWebViewDelegate, WNNoteRichEditDelegate> {
	WNJsBridge* _bridge;
	NSMutableDictionary* _itemDic;
	int _maxLocalId;
	WNRichEditWebView* m_webView;
	UIView* m_toolView;
	UIView* m_headerView;
	float keyboardHeight;
	float maxKeyboardHeight;
	NSArray* _m_noteItemUtils;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIWebView* m_webView;
@property(retain, nonatomic) NSArray* m_noteItemUtils;
@property(retain, nonatomic) UIView* m_toolView;
@property(retain, nonatomic) UIView* m_headerView;
-(void).cxx_destruct;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(id)noteItemArrayFromType:(int)type;
-(id)noteItemFromLocalEditorId:(id)localEditorId;
-(void)deleteItem:(id)item;
-(void)updateItem:(id)item;
-(void)configItemId:(id)anId;
-(void)onCancelInsert;
-(void)insertItems:(id)items;
-(void)insertItem:(id)item;
-(id)getViewController;
-(void)registerJSCallBack;
-(void)changeWebviewEditable:(BOOL)editable;
-(void)showKeyboard;
-(void)hideKeyboard;
-(void)foldKeyboard;
-(void)noteReload;
-(void)loadURL:(id)url;
-(void)setToolViewHidden:(BOOL)hidden;
-(void)initWebView;
-(void)checkCaret:(id)caret;
-(void)onHideKeyboard;
-(void)keyboardWillShow:(id)keyboard;
-(CGRect)CGRectConvertWindowRectToCurOri:(CGRect)curOri;
-(void)keyboardWillHide:(id)keyboard;
-(void)dealloc;
-(void)configData;
-(void)viewDidLoad;
@end

