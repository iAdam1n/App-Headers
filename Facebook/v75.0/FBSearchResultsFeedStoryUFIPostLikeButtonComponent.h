/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBMemFeedback, FBSearchResultsContext, FBAnalyticsInfo, FBFeedEventBus;

@interface FBSearchResultsFeedStoryUFIPostLikeButtonComponent : CKCompositeComponent {

	FBMemFeedback* _feedback;
	FBSearchResultsContext* _context;
	FBAnalyticsInfo* _analyticsInfo;
	FBFeedEventBus* _eventBus;

}
+(id)newWithFeedback:(id)arg1 eventBus:(id)arg2 context:(id)arg3 ;
-(void)didTapLike:(id)arg1 ;
@end
