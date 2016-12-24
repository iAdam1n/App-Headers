/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MWSTrackProviderFlurry.h>

@class MWSTrackEventExit;

@interface MWSTrackProviderFlurryApp : MWSTrackProviderFlurry {

	MWSTrackEventExit* _exitEvent;

}

@property (nonatomic,retain) MWSTrackEventExit * exitEvent;              //@synthesize exitEvent=_exitEvent - In the implementation block
-(void)setExitEvent:(MWSTrackEventExit *)arg1 ;
-(MWSTrackEventExit *)exitEvent;
-(void)handleSetupAfterStart;
-(void)sendEvent:(id)arg1 Dictionary:(id)arg2 Value:(id)arg3 Info:(id)arg4 ;
@end
