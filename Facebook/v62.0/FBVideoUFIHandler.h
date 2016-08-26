/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMediaUFIBarControllerDelegate.h>

@protocol FBNavigationCoordinator;
@class FBVideoViewManager, FBStoryShareHandler, NSArray, NSDictionary, NSString;

@interface FBVideoUFIHandler : NSObject <FBMediaUFIBarControllerDelegate> {

	id<FBNavigationCoordinator> _navigationCoordinator;
	FBVideoViewManager* _videoViewManager;
	FBStoryShareHandler* _shareHandler;
	NSArray* _trackingCodes;
	NSDictionary* _extraAnalyticsData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithViewManager:(id)arg1 session:(id)arg2 navigationCoordinator:(id)arg3 analyticsModule:(id)arg4 trackingCodes:(id)arg5 playerSource:(unsigned long long)arg6 ;
-(void)mediaUFIBarWillPresentFeedbackView:(id)arg1 withAnalyticsModule:(id)arg2 ;
-(void)mediaUFIBarWillPresentShareView:(id)arg1 withFeedback:(id)arg2 shareable:(id)arg3 linkURL:(id)arg4 feedStory:(id)arg5 analyticsModule:(id)arg6 navigationCoordinator:(id)arg7 fromRect:(CGRect)arg8 inView:(id)arg9 ;
@end
