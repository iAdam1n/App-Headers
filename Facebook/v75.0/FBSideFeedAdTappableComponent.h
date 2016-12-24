/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBSideFeedAdTappableObject;
@class FBMemSponsoredData, FBSideFeedAdsContext;

@interface FBSideFeedAdTappableComponent : CKCompositeComponent {

	FBMemSponsoredData* _sponsoredData;
	id<FBSideFeedAdTappableObject> _tappableObject;
	FBSideFeedAdsContext* _context;

}
+(id)newWithComponent:(id)arg1 sponsoredData:(id)arg2 tappableObject:(id)arg3 context:(id)arg4 ;
-(void)_didTap:(id)arg1 ;
@end
