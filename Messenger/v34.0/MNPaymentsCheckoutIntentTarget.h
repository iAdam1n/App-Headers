/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:39 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@protocol MNPaymentsPayableDataModel;
@interface MNPaymentsCheckoutIntentTarget : FBIntentTarget {

	id<MNPaymentsPayableDataModel> _checkoutDataModel;

}

@property (nonatomic,copy,readonly) id<MNPaymentsPayableDataModel> checkoutDataModel;              //@synthesize checkoutDataModel=_checkoutDataModel - In the implementation block
+(id)checkoutIntentTargetWithDataModel:(id)arg1 ;
-(id)fallbackURLs;
-(id<MNPaymentsPayableDataModel>)checkoutDataModel;
-(BOOL)isEqual:(id)arg1 ;
@end
