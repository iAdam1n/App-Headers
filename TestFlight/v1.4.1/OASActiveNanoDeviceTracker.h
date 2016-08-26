/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/197B1B60-1AA0-4A72-98F6-7C55CCB87C93/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OASCachedNanoDevice;

@interface OASActiveNanoDeviceTracker : NSObject {

	BOOL _deviceChanged;
	/*^block*/id _completionBlock;
	OASCachedNanoDevice* _initialNanoDevice;

}

@property (copy) id completionBlock;                                                 //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,readonly) OASCachedNanoDevice * initialNanoDevice;              //@synthesize initialNanoDevice=_initialNanoDevice - In the implementation block
@property (assign) BOOL deviceChanged;                                               //@synthesize deviceChanged=_deviceChanged - In the implementation block
+(id)deviceTrackerWithNanoDevice:(id)arg1 ;
-(BOOL)deviceChanged;
-(BOOL)callCompletionBlockIfDeviceChanged;
-(id)initWithNanoDevice:(id)arg1 ;
-(void)_observeNanoDeviceChangeNotification:(id)arg1 ;
-(OASCachedNanoDevice *)initialNanoDevice;
-(void)setDeviceChanged:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
@end
