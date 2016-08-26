/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface MNReceiptDetailTextAutoExpandAfterNSecondsExperimentContext : FBExperimentContext {

	BOOL _shouldShowReceiptTextOnSending;
	double _receiptTextAutoExpandTimeInSeconds;

}

@property (nonatomic,readonly) BOOL shouldShowReceiptTextOnSending;                    //@synthesize shouldShowReceiptTextOnSending=_shouldShowReceiptTextOnSending - In the implementation block
@property (nonatomic,readonly) double receiptTextAutoExpandTimeInSeconds;              //@synthesize receiptTextAutoExpandTimeInSeconds=_receiptTextAutoExpandTimeInSeconds - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)shouldShowReceiptTextOnSending;
-(double)receiptTextAutoExpandTimeInSeconds;
@end
