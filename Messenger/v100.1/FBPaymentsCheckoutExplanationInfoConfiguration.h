/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBPaymentsCheckoutExplanationInfoViewModel;

@interface FBPaymentsCheckoutExplanationInfoConfiguration : FBValueObject <NSCopying> {

	unsigned long long _displayPolicy;
	FBPaymentsCheckoutExplanationInfoViewModel* _viewModel;

}

@property (nonatomic,readonly) unsigned long long displayPolicy;                                         //@synthesize displayPolicy=_displayPolicy - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCheckoutExplanationInfoViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(unsigned long long)displayPolicy;
-(id)initWithDisplayPolicy:(unsigned long long)arg1 viewModel:(id)arg2 ;
-(FBPaymentsCheckoutExplanationInfoViewModel *)viewModel;
@end
