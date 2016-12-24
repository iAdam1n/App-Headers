/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface IosMessengerSendingStateTextUniverseExperimentContext : FBExperimentContext {

	BOOL _receipt_detail_text_auto_expand_after_nseconds_should_show_receipt_on_sending;
	double _receipt_detail_text_auto_expand_after_nseconds_auto_expand_interval;

}

@property (assign,nonatomic) BOOL receipt_detail_text_auto_expand_after_nseconds_should_show_receipt_on_sending;              //@synthesize receipt_detail_text_auto_expand_after_nseconds_should_show_receipt_on_sending=_receipt_detail_text_auto_expand_after_nseconds_should_show_receipt_on_sending - In the implementation block
@property (assign,nonatomic) double receipt_detail_text_auto_expand_after_nseconds_auto_expand_interval;                      //@synthesize receipt_detail_text_auto_expand_after_nseconds_auto_expand_interval=_receipt_detail_text_auto_expand_after_nseconds_auto_expand_interval - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(double)receipt_detail_text_auto_expand_after_nseconds_auto_expand_interval;
-(BOOL)receipt_detail_text_auto_expand_after_nseconds_should_show_receipt_on_sending;
-(void)setReceipt_detail_text_auto_expand_after_nseconds_should_show_receipt_on_sending:(BOOL)arg1 ;
-(void)setReceipt_detail_text_auto_expand_after_nseconds_auto_expand_interval:(double)arg1 ;
@end
