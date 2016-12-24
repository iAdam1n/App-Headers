/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBMemVideo, NSArray, FBFeedToolbox, FBVideoPlayerComponent, FBUserSession;

@interface FBFeedProfileVideoComponent : CKCompositeComponent {

	FBMemVideo* _video;
	NSArray* _trackingCodes;
	FBFeedToolbox* _toolbox;
	FBVideoPlayerComponent* _videoComponent;
	unsigned long long _options;
	FBUserSession* _session;

}

@property (nonatomic,readonly) FBVideoPlayerComponent * videoComponent;              //@synthesize videoComponent=_videoComponent - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                           //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                              //@synthesize session=_session - In the implementation block
+(id)newWithVideo:(id)arg1 size:(double)arg2 toolbox:(id)arg3 ;
-(FBVideoPlayerComponent *)videoComponent;
-(unsigned long long)options;
-(FBUserSession *)session;
@end
