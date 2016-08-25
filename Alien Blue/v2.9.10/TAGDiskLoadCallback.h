/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/TAGLoadCallback.h>

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
-(TAGContainer *)container;
-(void)setContainer:(TAGContainer *)arg1 ;
-(void)close;
-(id<TAGContainerCallback>)callback;
-(void)setCallback:(id<TAGContainerCallback>)arg1 ;
@end

