/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, NSString, BaseRequest;

@interface VerifyPurchaseRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned quantity;
@property(retain, nonatomic) NSString* receiptSig;
@property(assign, nonatomic) unsigned payTime;
@property(retain, nonatomic) NSString* billNo;
@property(retain, nonatomic) NSString* currencyType;
@property(retain, nonatomic) NSString* price;
@property(assign, nonatomic) unsigned payType;
@property(assign, nonatomic) unsigned verifyType;
@property(retain, nonatomic) NSString* productId;
@property(retain, nonatomic) SKBuiltinBuffer_t* receipt;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

