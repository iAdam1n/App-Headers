/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsPersistentStoreExtension.h>

@class NSString;

@interface MNPaymentsPeerToPeerPersistentStoreExtension : NSObject <MNPaymentsPersistentStoreExtension>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)extractExtraDataFromPayment:(id)arg1 ;
-(id)buildPaymentWithPaymentCoreData:(id)arg1 extraData:(id)arg2 ;
-(id)updatePaymentWithExistingPayment:(id)arg1 coreData:(id)arg2 extraData:(id)arg3 ;
@end
