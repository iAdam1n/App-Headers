/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/TAGLoadCallback.h>

@protocol TAGContainerCallback;
@class TAGContainer, NSString;

@interface TAGDiskLoadCallback : NSObject <TAGLoadCallback> {

	id<TAGContainerCallback> _callback;
	TAGContainer* _container;

}

@property (retain) id<TAGContainerCallback> callback;               //@synthesize callback=_callback - In the implementation block
@property (retain) TAGContainer * container;                        //@synthesize container=_container - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)failureToRefreshFailure:(long long)arg1 ;
-(void)startLoad;
-(void)onSuccess:(id)arg1 ;
-(void)onFailure:(long long)arg1 ;
-(id)initWithCallback:(id)arg1 container:(id)arg2 ;
-(void)setContainer:(TAGContainer *)arg1 ;
-(TAGContainer *)container;
-(void)close;
-(id<TAGContainerCallback>)callback;
-(void)setCallback:(id<TAGContainerCallback>)arg1 ;
@end

