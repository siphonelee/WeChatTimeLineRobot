/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIView.h"

@class ContactsItemView, CContact, UIImageView;

@interface MMMultiSelectContactsItemView : MMUIView {
	BOOL _isAllowMultiSelect;
	CContact* _contact;
	UIImageView* _checkMarkImgView;
	ContactsItemView* _contactItemView;
}
@property(retain, nonatomic) ContactsItemView* contactItemView;
@property(retain, nonatomic) UIImageView* checkMarkImgView;
@property(assign, nonatomic) BOOL isAllowMultiSelect;
@property(retain, nonatomic) CContact* contact;
-(void).cxx_destruct;
-(id)getCheckMarkImageWithContactState:(unsigned)contactState;
-(void)updateItemView:(id)view andContactState:(unsigned)state;
-(void)initView;
-(id)initWithFrame:(CGRect)frame andContact:(id)contact andIsAllowMultiSelect:(BOOL)select;
-(void)dealloc;
@end

