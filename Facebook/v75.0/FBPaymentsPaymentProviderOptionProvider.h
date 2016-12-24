/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsUpdateListener.h>
#import <Facebook/FBPaymentsSupportedPaymentMethodOptionsProviding.h>

@protocol FBPaymentsBillingCountryProviding;
@class NSArray, FBPaymentsPaymentProviderDataController, FBPaymentsUpdateListenerAnnouncer, NSString;

@interface FBPaymentsPaymentProviderOptionProvider : NSObject <FBPaymentsUpdateListener, FBPaymentsSupportedPaymentMethodOptionsProviding> {

	FBPaymentsPaymentProviderDataController* _dataController;
	FBPaymentsUpdateListenerAnnouncer* _updateAnnouncer;
	id<FBPaymentsBillingCountryProviding> _billingCountryProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<FBPaymentsBillingCountryProviding> billingCountryProvider;              //@synthesize billingCountryProvider=_billingCountryProvider - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedPaymentMethodOptions; 
+(id)announcerIdentifier;
-(void)addUpdateListener:(id)arg1 ;
-(void)removeUpdateListener:(id)arg1 ;
-(long long)dataLoadingStatus;
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(NSArray *)supportedPaymentMethodOptions;
-(id)initWithDataController:(id)arg1 ;
-(id<FBPaymentsBillingCountryProviding>)billingCountryProvider;
-(void)setBillingCountryProvider:(id<FBPaymentsBillingCountryProviding>)arg1 ;
@end
