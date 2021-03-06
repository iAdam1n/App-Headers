/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class CMMotionManager, NSOperationQueue;

@interface TFNMotion : NSObject {

	CMMotionManager* _manager;
	NSOperationQueue* _accelerometerUpdateQueue;
	unsigned long long _accelerometerUpdateSubscribersCount;
	unsigned long long _deviceOrientationNotificationSubscribersCount;
	long long _deviceOrientation;
	long long _lastDeviceOrientation;

}

@property (getter=isGeneratingDeviceOrientationNotifications,nonatomic,readonly) BOOL generatesDeviceOrientationNotifications; 
@property (assign,nonatomic) long long deviceOrientation;                                                                                   //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (assign,nonatomic) long long lastDeviceOrientation;                                                                               //@synthesize lastDeviceOrientation=_lastDeviceOrientation - In the implementation block
+(id)sharedMotion;
-(void)_pauseAccelerometerUpdates;
-(void)_resumeAccelerometerUpdates;
-(void)_accelerometerDidUpdate:(id)arg1 error:(id)arg2 ;
-(void)setLastDeviceOrientation:(long long)arg1 ;
-(void)_startAccelerometerUpdates;
-(void)_stopAccelerometerUpdates;
-(long long)lastDeviceOrientation;
-(void)dealloc;
-(id)init;
-(BOOL)isGeneratingDeviceOrientationNotifications;
-(void)beginGeneratingDeviceOrientationNotifications;
-(void)endGeneratingDeviceOrientationNotifications;
-(long long)deviceOrientation;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)setDeviceOrientation:(long long)arg1 ;
@end

