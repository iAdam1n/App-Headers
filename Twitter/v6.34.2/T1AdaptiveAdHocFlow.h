/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1AdaptiveWizardFlow.h>

@class TFNTwitterAccount, NSArray;

@interface T1AdaptiveAdHocFlow : T1AdaptiveWizardFlow {

	TFNTwitterAccount* _account;
	NSArray* _steps;

}

@property (nonatomic,readonly) TFNTwitterAccount * account;              //@synthesize account=_account - In the implementation block
+(id)_supportedClasses;
-(id)initWithAccount:(id)arg1 options:(id)arg2 ;
-(id)init;
-(id)initWithAccount:(id)arg1 ;
-(TFNTwitterAccount *)account;
-(id)steps;
@end

