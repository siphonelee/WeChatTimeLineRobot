/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol IBrandIAPMgrExt
@optional
-(void)OnBrandIAPGetResult:(id)result Error:(int)error;
-(void)OnBrandIAPPayFailForProduct:(id)product;
-(void)OnBrandIAPPayCancelForProduct:(id)product;
-(void)OnBrandIAPPaySuccessForProduct:(id)product;
-(void)OnBrandIAPPayRequestForProduct:(id)product;
-(void)OnBrandIAPPrepay:(id)prepay FailedWithError:(int)error;
-(void)OnBrandIAPPrepay:(id)prepay GetProductID:(id)anId ExtInfo:(id)info;
@end

