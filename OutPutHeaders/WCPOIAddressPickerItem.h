/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCBaseTextFieldItem.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "WCBizPickerViewDelegate.h"

@class NSArray, WCAddressStageDataStruct, NSString, UIPickerView;

@interface WCPOIAddressPickerItem : WCBaseTextFieldItem <UIPickerViewDataSource, UIPickerViewDelegate, WCBizPickerViewDelegate> {
	NSArray* m_arrStage;
	WCAddressStageDataStruct* m_selectProvince;
	WCAddressStageDataStruct* m_selectCity;
	WCAddressStageDataStruct* m_selectDistrict;
	int m_uiCurProvince;
	int m_uiCurCity;
	int m_uiCurDistrict;
	UIPickerView* m_pickerView;
	BOOL m_bLockProvince;
	BOOL m_bLockCity;
	BOOL m_bLockDistrict;
	BOOL m_bLockProviceAndCity;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL lockProviceAndCity;
-(void).cxx_destruct;
-(void)UIPickerViewDidFinish;
-(void)UIPickerViewDidCancel;
-(void)pickerView:(id)view didSelectRow:(int)row inComponent:(int)component;
-(id)pickerView:(id)view viewForRow:(int)row forComponent:(int)component reusingView:(id)view4;
-(id)pickerView:(id)view titleForRow:(int)row forComponent:(int)component;
-(float)pickerView:(id)view widthForComponent:(int)component;
-(int)pickerView:(id)view numberOfRowsInComponent:(int)component;
-(int)numberOfComponentsInPickerView:(id)pickerView;
-(void)SetText;
-(void)becomeFirstResponder;
-(void)dealloc;
-(void)initView:(CGRect)view;
-(void)resetSelectedAddress;
-(id)getSelectDistrict;
-(id)getSelectCity;
-(id)getSelectProvice;
-(BOOL)selectCityInDistrict:(id)district;
-(void)setSelectStageProvince:(id)province City:(id)city District:(id)district;
-(void)setAllAddressStageData:(id)data;
@end

