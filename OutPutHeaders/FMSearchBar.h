/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class UIView, UIColor, UITextField, UIButton, NSString, UIImageView;

@interface FMSearchBar : XXUnknownSuperclass {
	UIView* searchBarDisableMaskView;
	UIImageView* cancelButtonBelowView;
	NSString* placeholderForNormal;
	NSString* placeholderForSearching;
	BOOL _enabled;
	UIColor* m_bkgColor;
	float m_totalHeight;
	UIButton* cancelButton;
	UIButton* editButton;
	UITextField* textField;
	UIView* wrapView;
	float cancelButtonWidth;
	float editButtonWidth;
	UIColor* textFieldNormalColor;
	UIColor* textFieldActiveColor;
}
@property(retain, nonatomic) UIColor* textFieldActiveColor;
@property(retain, nonatomic) UIColor* textFieldNormalColor;
@property(assign, nonatomic) float editButtonWidth;
@property(assign, nonatomic) float cancelButtonWidth;
@property(assign, nonatomic) BOOL enabled;
@property(retain, nonatomic) UIView* wrapView;
@property(retain, nonatomic) UITextField* textField;
@property(retain, nonatomic) UIButton* editButton;
@property(retain, nonatomic) UIButton* cancelButton;
@property(retain, nonatomic) NSString* placeholderForSearching;
@property(retain, nonatomic) NSString* placeholderForNormal;
-(void).cxx_destruct;
-(void)setSearchbarResponder;
-(void)setSearchBarUI;
-(void)removeAllActionInEditButton;
-(void)addEditButtonTarget:(id)target andAction:(SEL)action;
-(void)showEditButton:(BOOL)button;
-(void)setTextFieldBackgroundColor:(id)color activeColor:(id)color2;
-(void)setTextFieldBackgroundColor:(id)color;
-(void)renderCancelButton;
-(void)getAndRenderCancelButton;
-(void)renderTextField;
-(void)renderTextFieldWithButton:(id)button;
-(void)getAndRenderTextField;
-(void)realSetBkgColor:(id)color;
-(void)renderEditButton;
-(void)resetSearchField:(float)field;
-(void)layoutSubviews;
-(void)initSearchbarUI;
-(id)initWithFrame:(CGRect)frame;
@end

