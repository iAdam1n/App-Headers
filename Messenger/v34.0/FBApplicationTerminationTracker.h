/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class FBCrashCounter, FBExceptionHandler, FBPreferences;

@interface FBApplicationTerminationTracker : NSObject {

	double _minStartupDuration;
	FBCrashCounter* _crashCounter;
	FBExceptionHandler* _exceptionHandler;
	FBPreferences* _preferences;

}
-(void)_willEnterForeground;
-(void)_didEnterBackground;
-(void)startupCompleted;
-(id)initWithMinStartupDuration:(double)arg1 exceptionHandler:(id)arg2 preferences:(id)arg3 ;
-(void)_willTerminate;
-(id)initWithMinStartupDuration:(double)arg1 exceptionHandler:(id)arg2 ;
-(void)startupBegan;
-(void)_setApplicationState:(int)arg1 ;
-(void)dealloc;
-(id)init;
@end
