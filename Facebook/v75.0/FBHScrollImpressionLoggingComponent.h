/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollImpressionLogging.h>

@protocol FBNativeAppFeedLoggingDelegate, FBSponsorableFBAppFeedAdvertisable;
@interface FBHScrollImpressionLoggingComponent : CKCompositeComponent <FBHScrollImpressionLogging> {

	id<FBNativeAppFeedLoggingDelegate> _impressionLogger;
	id<FBSponsorable><FBAppFeedAdvertisable> _sponsorable;

}

@property (nonatomic,readonly) id<FBNativeAppFeedLoggingDelegate> impressionLogger;               //@synthesize impressionLogger=_impressionLogger - In the implementation block
@property (nonatomic,readonly) id<FBSponsorable><FBAppFeedAdvertisable> sponsorable;              //@synthesize sponsorable=_sponsorable - In the implementation block
+(id)newWithSponsorable:(id)arg1 component:(id)arg2 toolbox:(id)arg3 ;
-(void)becameFullyVisible;
-(id<FBNativeAppFeedLoggingDelegate>)impressionLogger;
-(id<FBSponsorable><FBAppFeedAdvertisable>)sponsorable;
@end
