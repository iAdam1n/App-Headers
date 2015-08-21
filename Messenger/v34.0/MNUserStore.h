/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MNUserRequestListener;
@class NSObject, MNUserStoreRequestCoordinator, MNUserRequestHandlerChain, FBAnalytics;

@interface MNUserStore : NSObject {

	NSObject*<OS_dispatch_queue> _serialDispatchQueue;
	id<MNUserRequestListener> _responderChainDispatcher;
	MNUserStoreRequestCoordinator* _requestCoordinator;
	MNUserRequestHandlerChain* _requestHandlerChainManager;
	FBAnalytics* _analytics;

}
-(void)startWithQueue:(id)arg1 ;
-(void)_cleanUpStartedState;
-(long long)handleSingleUserRequest:(id)arg1 ;
-(long long)handleMultipleUserRequest:(id)arg1 ;
-(id)initWithHandlerChainManager:(id)arg1 analytics:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)cancelRequest:(long long)arg1 ;
@end

