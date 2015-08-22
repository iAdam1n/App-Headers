/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:09 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSThread, NSObject, NSNotificationCenter, FBCarrier, NSString;

@interface FBTelephonyCache : NSObject {

	/*^block*/id _createTelephonyNetworkInfoBlock;
	NSThread* _coreTelephonyThread;
	CFRunLoopSourceRef _threadStopSignal;
	NSObject*<OS_dispatch_queue> _telephonySerialQueue;
	BOOL _supportIOS7;
	id _radioTechnologyObserver;
	NSNotificationCenter* _notificationCenter;
	FBCarrier* _carrier;
	NSString* _radioTechnology;

}

@property (retain) FBCarrier * carrier;                   //@synthesize carrier=_carrier - In the implementation block
@property (copy) NSString * radioTechnology;              //@synthesize radioTechnology=_radioTechnology - In the implementation block
-(id)cachedCarrier_DEPRECATED;
-(void)getCachedCarrier:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)initWithCreateTelephonyNetworkInfoBlock:(/*^block*/id)arg1 andNotificationCenter:(id)arg2 ;
-(void)_telephonyCacheThreadMain:(id)arg1 ;
-(FBCarrier *)carrier;
-(NSString *)radioTechnology;
-(void)_updateFBCarrier:(id)arg1 ;
-(void)setRadioTechnology:(NSString *)arg1 ;
-(void)setCarrier:(FBCarrier *)arg1 ;
-(id)cachedRadioTechnologyOrNoneIfNotInitialized;
-(id)cachedRadioTechnology;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
@end
