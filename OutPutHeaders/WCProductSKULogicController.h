/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCRadioButtonGroupDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "MMObject.h"

@class UILabel, UIView, NSString, MMTableView, UIButton, NSArray, NSMutableArray;
@protocol WCProductSKULogicControllerDelegate;

@interface WCProductSKULogicController : MMObject <UITableViewDelegate, UITableViewDataSource, WCRadioButtonGroupDelegate> {
	id<WCProductSKULogicControllerDelegate> _delegate;
	NSArray* _skuAttrTable;
	NSArray* _skuInfoTable;
	NSMutableArray* _skuResult;
	NSMutableArray* _tableDatas;
	unsigned _purchaseCount;
	unsigned _stockCount;
	unsigned _leftBuyQuantity;
	MMTableView* _tableView;
	UIView* _lineImageView;
	UIButton* _reduceButton;
	UIButton* _increaseButton;
	UILabel* _purchaseCountLabel;
	UILabel* _stockCountLabel;
	UILabel* _tipLabel;
	BOOL _isShowCaution;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<WCProductSKULogicControllerDelegate> delegate;
-(void).cxx_destruct;
-(id)getStockCountStr;
-(id)getPurchaseCountStr;
-(unsigned)getTotleStockCount;
-(id)getGroupID:(id)anId contactButtonID:(id)anId2;
-(id)getResultItemFromItemValue:(id)itemValue;
-(id)buttonIDConvertArr2String:(id)string;
-(id)sortButtonIDList:(id)list;
-(id)powerSet:(id)set;
-(id)selectedGroupIDContactButtonIDListFilterGroupID:(id)anId;
-(id)selectedGroupIDContactButtonIDList;
-(id)getSelectedGroupNameAndButtonNameList;
-(id)getSelectedButtonNameList;
-(void)addSkuInfo2SKUResult:(id)result forCombItemValue:(id)combItemValue;
-(id)getSKUIDList:(id)list;
-(id)buttonIDCombine:(id)combine;
-(id)filterNOStockSKUInfo:(id)info;
-(void)increasePurchaseCount;
-(void)reducePurchaseCount;
-(void)animationFadeTipLabel;
-(void)updateUIInfoPriceAndStockCount:(id)count;
-(void)radioButtonGroup:(id)group selectedIndex:(int)index;
-(void)showCaution;
-(void)updateStockCount:(id)count;
-(BOOL)canIncreaseAndUpdateTipLabelWording;
-(void)updateIncreaseButton;
-(void)updateReduceButton;
-(void)updatePurchaseCountLabel;
-(void)updateSKUAttrItemState:(id)state;
-(void)makeCountCell:(id)cell;
-(void)makeSKUAttrCell:(id)cell withAttrItem:(id)attrItem;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)initStockCount;
-(void)initSKUDisplayInfo;
-(void)loadTableData;
-(void)loadSKUData;
-(BOOL)isNOStock;
-(id)isSKUSelectFinish;
-(BOOL)isSKUNOStartSelect;
-(unsigned)getPurchaseCount;
-(id)getFinalSelectedGroupNameButtonNameList;
-(id)getFinalSelectedButtonNames;
-(id)getFinalSelectedGroupIDButtonIDs;
-(float)getTableViewHeight;
-(void)loadSKUSubView:(id)view withScrollEnabled:(BOOL)scrollEnabled contentInset:(UIEdgeInsets)inset;
-(id)initWithProductInfo:(id)productInfo;
-(void)clearSKUStateInfo;
-(void)dealloc;
@end

