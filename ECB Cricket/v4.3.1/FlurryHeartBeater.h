/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:05 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSTimer;

@interface FlurryHeartBeater : NSObject {

	NSTimer* _timer;

}
+(id)createAndStartInstance:(double)arg1 ;
+(id)instance;
-(void)heartBeat;
-(void)dealloc;
-(void)start:(double)arg1 ;
@end
