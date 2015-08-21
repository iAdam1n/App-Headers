/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBServiceTransactionMutating.h>

@protocol FBNetworkDispatch, OS_dispatch_queue;
@class FBNetworkerRequest, FBMStickerResourceManager, NSURL, NSObject, NSData, NSError, NSString;

@interface FBStickerResourceDownloadOperation : NSOperation <FBNetworkerRequestDelegate, FBServiceTransactionMutating> {

	FBNetworkerRequest* _resourceNetworkerRequest;
	FBMStickerResourceManager* _resourceManager;
	NSURL* _url;
	id<FBNetworkDispatch> _networkDispatcher;
	unsigned long long _fbId;
	unsigned long long _resourceType;
	unsigned long long _stickerPackFbId;
	BOOL _ofOwnedStickerPack;
	double _requestBeginTime;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _operationExecuting;
	BOOL _operationFinished;
	NSData* _data;
	NSError* _error;

}

@property (nonatomic,readonly) NSData * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (assign) BOOL operationExecuting;                         //@synthesize operationExecuting=_operationExecuting - In the implementation block
@property (assign) BOOL operationFinished;                          //@synthesize operationFinished=_operationFinished - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)changePriorityToNewPriority:(long long)arg1 ;
-(id)initWithStickerResourceManager:(id)arg1 networkDispatcher:(id)arg2 resourceURL:(id)arg3 fbId:(unsigned long long)arg4 resourceType:(unsigned long long)arg5 stickerPackFbId:(unsigned long long)arg6 ofOwnedStickerPack:(BOOL)arg7 priority:(long long)arg8 ;
-(void)_startOperation;
-(void)_cancelOperation;
-(BOOL)operationExecuting;
-(BOOL)operationFinished;
-(void)_finishOperation;
-(void)setOperationExecuting:(BOOL)arg1 ;
-(void)setOperationFinished:(BOOL)arg1 ;
-(BOOL)isAsynchronous;
-(void)cancel;
-(NSData *)data;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

