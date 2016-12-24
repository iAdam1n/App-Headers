/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSMutableSet, NSMutableArray, Protocol;

@interface FBSetRegistry : NSObject {

	mutex _mutex;
	NSMutableSet* _registeredObjects;
	NSMutableArray* _queuedProviders;
	Protocol* _supportedProtocol;

}

@property (nonatomic,retain) Protocol * supportedProtocol;              //@synthesize supportedProtocol=_supportedProtocol - In the implementation block
-(void)registerObjectProvider:(/*^block*/id)arg1 ;
-(id)handlerForUnit:(id)arg1 entryPoint:(unsigned long long)arg2 ;
-(void)_dispatchFeedAdEventToAllHandlers:(/*^block*/id)arg1 ;
-(void)dispatchFeedAdAppStoreOpenedEvent:(id)arg1 ;
-(void)_dispatchFeedAdEventToFirstReactingHandler:(/*^block*/id)arg1 ;
-(void)dispatchFeedAdAppStoreOpenedEvent:(id)arg1 navigationCoordinator:(id)arg2 ;
-(void)_evaluateProviders;
-(Protocol *)supportedProtocol;
-(void)setSupportedProtocol:(Protocol *)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)allObjects;
@end
