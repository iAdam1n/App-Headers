/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBLocationManagerSubscription.h>

@protocol FBCallPath;
@class FBLocationManager, NSTimer;

@interface FBLocationManagerSubscriptionEntry : NSObject <FBLocationManagerSubscription> {

	BOOL _isLocationListener;
	double _desiredAccuracy;
	/*^block*/id _block;
	FBLocationManager* _manager;
	NSTimer* _accurateFixTimeoutTimer;
	id<FBCallPath> _callPath;

}

@property (assign,nonatomic) double desiredAccuracy;                         //@synthesize desiredAccuracy=_desiredAccuracy - In the implementation block
@property (nonatomic,copy) id block;                                         //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) FBLocationManager * manager;                    //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSTimer * accurateFixTimeoutTimer;              //@synthesize accurateFixTimeoutTimer=_accurateFixTimeoutTimer - In the implementation block
@property (assign,nonatomic) BOOL isLocationListener;                        //@synthesize isLocationListener=_isLocationListener - In the implementation block
@property (nonatomic,retain) id<FBCallPath> callPath;                        //@synthesize callPath=_callPath - In the implementation block
-(id<FBCallPath>)callPath;
-(void)setCallPath:(id<FBCallPath>)arg1 ;
-(BOOL)isLocationListener;
-(void)setIsLocationListener:(BOOL)arg1 ;
-(NSTimer *)accurateFixTimeoutTimer;
-(void)setAccurateFixTimeoutTimer:(NSTimer *)arg1 ;
-(void)unsubscribe;
-(double)desiredAccuracy;
-(FBLocationManager *)manager;
-(void)setManager:(FBLocationManager *)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)setDesiredAccuracy:(double)arg1 ;
@end

