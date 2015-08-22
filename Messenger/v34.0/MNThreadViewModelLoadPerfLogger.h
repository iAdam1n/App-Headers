/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>
#import <Messenger/MNMessagesModelControllerViewModelLoadingListener.h>

@class FBAnalyticsPerfLogger, NSString;

@interface MNThreadViewModelLoadPerfLogger : NSObject <FBSessionClassProvidable, MNMessagesModelControllerViewModelLoadingListener> {

	long long _threadViewModelLoadRequestId;
	BOOL _isLongOperation;
	FBAnalyticsPerfLogger* _perfLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)messagesModelController:(id)arg1 didBeginThreadViewModelLoadingWithRequest:(long long)arg2 ;
-(void)messagesModelController:(id)arg1 didFinishThreadViewModelLoadingWithRequest:(long long)arg2 threadViewModel:(id)arg3 ;
-(void)messagesModelController:(id)arg1 didFinishPropagatingThreadViewModelLoadingWithRequest:(long long)arg2 threadViewModel:(id)arg3 ;
-(void)messagesModelController:(id)arg1 didBeginLongOperationForThreadViewModelLoadingWithRequest:(long long)arg2 ;
-(void)messagesModelController:(id)arg1 didFailThreadViewModelLoadingWithRequest:(long long)arg2 ;
-(void)messagesModelController:(id)arg1 didCancelThreadViewModelLoadingWithRequest:(long long)arg2 ;
-(void)_clearCachedStatus;
@end
