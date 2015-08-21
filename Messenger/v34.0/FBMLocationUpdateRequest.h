/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBMLocationUpdateRequestConfiguration, NSObject;

@interface FBMLocationUpdateRequest : NSObject {

	FBMLocationUpdateRequestConfiguration* _config;
	/*^block*/id _success;
	/*^block*/id _progress;
	/*^block*/id _failure;
	/*^block*/id _authorizationStatus;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) FBMLocationUpdateRequestConfiguration * config;              //@synthesize config=_config - In the implementation block
@property (nonatomic,copy,readonly) id success;                                             //@synthesize success=_success - In the implementation block
@property (nonatomic,copy,readonly) id progress;                                            //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy,readonly) id failure;                                             //@synthesize failure=_failure - In the implementation block
@property (nonatomic,copy,readonly) id authorizationStatus;                                 //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
-(id)initWithConfiguration:(id)arg1 success:(/*^block*/id)arg2 progress:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 authorizationStatus:(/*^block*/id)arg5 queue:(id)arg6 ;
-(id)failure;
-(id)success;
-(id)progress;
-(id)authorizationStatus;
-(NSObject*<OS_dispatch_queue>)queue;
-(FBMLocationUpdateRequestConfiguration *)config;
@end

