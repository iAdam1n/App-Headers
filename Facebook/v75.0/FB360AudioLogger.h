/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoPlaybackLoggingDataProvider;
@class NSString, NSDate;

@interface FB360AudioLogger : NSObject {

	NSString* _videoID;
	id<FBVideoPlaybackLoggingDataProvider> _loggingProvider;
	NSDate* _nextLogTime;
	int _previousBufferUnderrunCount;

}
-(id)initWithVideoID:(id)arg1 loggingProvider:(id)arg2 ;
-(void)maybeLogBufferUnderrunWithCount:(int)arg1 videoTimePosition:(double)arg2 ignoreLoggingInterval:(BOOL)arg3 ;
@end
