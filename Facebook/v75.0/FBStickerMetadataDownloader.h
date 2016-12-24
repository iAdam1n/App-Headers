/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBServiceTransactionMutating.h>

@protocol FBServiceTransactionMutating;
@class FBUserSession, NSString;

@interface FBStickerMetadataDownloader : NSObject <FBServiceTransactionMutating> {

	unsigned long long _stickerId;
	FBUserSession* _session;
	id<FBServiceTransactionMutating> _graphqlTransaction;
	BOOL _done;
	long long _priority;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStickerId:(unsigned long long)arg1 priority:(long long)arg2 session:(id)arg3 ;
-(void)fetchMetadataWithCompletion:(/*^block*/id)arg1 originalImageSizeEnabled:(BOOL)arg2 ;
-(void)_cancelInMainThread;
-(void)changePriorityToNewPriority:(long long)arg1 ;
-(void)_handleWithSticker:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchMetadataWithCompletion:(/*^block*/id)arg1 ;
-(void)cancel;
@end
