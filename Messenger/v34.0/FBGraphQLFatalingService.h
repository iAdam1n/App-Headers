/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBGraphQLService.h>

@class NSString;

@interface FBGraphQLFatalingService : NSObject <FBGraphQLService>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sendQueries:(id)arg1 callbackQueue:(id)arg2 successCallback:(/*^block*/id)arg3 failureCallback:(/*^block*/id)arg4 progressCallback:(/*^block*/id)arg5 configurationCallback:(/*^block*/id)arg6 ;
-(id)sendQuery:(id)arg1 callbackQueue:(id)arg2 networkRequestThresholdInSeconds:(unsigned long long)arg3 cachedResponseCallback:(/*^block*/id)arg4 downloadedResponseCallback:(/*^block*/id)arg5 failureCallback:(/*^block*/id)arg6 progressCallback:(/*^block*/id)arg7 configurationCallback:(/*^block*/id)arg8 ;
-(id)sendQuery:(id)arg1 callbackQueue:(id)arg2 successCallback:(/*^block*/id)arg3 failureCallback:(/*^block*/id)arg4 progressCallback:(/*^block*/id)arg5 configurationCallback:(/*^block*/id)arg6 ;
@end

