/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WCAddressBaseAddress, NSArray, NSString;

@interface WCProductOrderInfo : XXUnknownSuperclass {
	NSString* productID;
	NSString* skuID;
	NSString* skuInfo;
	unsigned long count;
	NSString* productName;
	NSString* feeType;
	float unitPrice;
	float totalPrice;
	float expressPrice;
	NSString* imageUrl;
	NSString* stockID;
	unsigned long expressID;
	unsigned long flag;
	NSArray* expressList;
	NSString* sourceUrl;
	WCAddressBaseAddress* addressInfo;
	NSArray* skuItemList;
	NSString* thumbUrl;
	unsigned long productSubType;
	unsigned long productType;
	NSString* sellerID;
	NSString* receiptStr;
	NSArray* discountInfoList;
	float discountPrice;
	NSString* userName;
}
@property(retain, nonatomic) NSString* userName;
@property(assign, nonatomic) unsigned long flag;
@property(retain, nonatomic) NSArray* discountInfoList;
@property(retain, nonatomic) WCAddressBaseAddress* addressInfo;
@property(retain, nonatomic) NSString* receiptStr;
@property(retain, nonatomic) NSString* sourceUrl;
@property(retain, nonatomic) NSArray* expressList;
@property(assign, nonatomic) unsigned long expressID;
@property(retain, nonatomic) NSString* stockID;
@property(retain, nonatomic) NSString* thumbUrl;
@property(retain, nonatomic) NSString* imageUrl;
@property(assign, nonatomic) float discountPrice;
@property(assign, nonatomic) float totalPrice;
@property(assign, nonatomic) float expressPrice;
@property(assign, nonatomic) unsigned long count;
@property(retain, nonatomic) NSString* feeType;
@property(retain, nonatomic) NSString* sellerID;
@property(retain, nonatomic) NSArray* skuItemList;
@property(retain, nonatomic) NSString* skuInfo;
@property(retain, nonatomic) NSString* skuID;
@property(assign, nonatomic) float unitPrice;
@property(assign, nonatomic) unsigned long productSubType;
@property(assign, nonatomic) unsigned long productType;
@property(retain, nonatomic) NSString* productName;
@property(retain, nonatomic) NSString* productID;
-(void).cxx_destruct;
-(void)dealloc;
@end

