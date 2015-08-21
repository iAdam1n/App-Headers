/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerSPDeltaHandler.h>

@protocol FBPaymentsPeerToPeerPaymentMethodsDataLoader;
@class NSString;

@interface FBPaymentsPeerToPeerSPDeltaHandlerPaymentForcedFetch : NSObject <FBPaymentsPeerToPeerSPDeltaHandler> {

	id<FBPaymentsPeerToPeerPaymentMethodsDataLoader> _paymentMethodsDataLoader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
-(long long)_processDelta:(id)arg1 ;
-(long long)handleDelta:(id)arg1 withDeltaHandlerMap:(id)arg2 ;
-(id)initWithPaymentMethodsDataLoader:(id)arg1 ;
-(long long)type;
@end

