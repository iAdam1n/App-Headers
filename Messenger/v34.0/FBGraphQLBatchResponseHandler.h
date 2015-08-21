/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:15 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBResponseProcessorDelegate.h>
#import <Messenger/FBReceivedDataBufferDelegate.h>
#import <Messenger/FBResponseHandling.h>

@protocol OS_dispatch_queue, FBRequest, FBResponseHandlerDelegate;
@class FBResponseProcessor, FBResponseProcessorConfiguration, NSHTTPURLResponse, NSObject, FBReceivedChunkedDataMemoryBuffer, FBGraphQLResponse, FBGraphQLBatchResponsesBuffer, NSString;

@interface FBGraphQLBatchResponseHandler : NSObject <FBResponseProcessorDelegate, FBReceivedDataBufferDelegate, FBResponseHandling> {

	FBResponseProcessor* _processor;
	FBResponseProcessorConfiguration* _configuration;
	NSHTTPURLResponse* _HTTPURLResponse;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	FBReceivedChunkedDataMemoryBuffer* _receivedDataBuffer;
	FBGraphQLResponse* _previousResponse;
	FBGraphQLBatchResponsesBuffer* _responsesBuffer;
	id<FBRequest> _request;
	id<FBResponseHandlerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBRequest> request;                                    //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<FBResponseHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)responseProcessor:(id)arg1 didProcessResponse:(id)arg2 ;
-(void)responseProcessor:(id)arg1 didFailWithError:(id)arg2 ;
-(void)receivedDataBuffer:(id)arg1 didReceiveData:(id)arg2 ;
-(void)receivedDataBuffer:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithRequest:(id)arg1 HTTPURLResponse:(id)arg2 callbackQueue:(id)arg3 objectFactory:(id)arg4 enableOrdering:(BOOL)arg5 ;
-(void)handleData:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBResponseHandlerDelegate>)arg1 ;
-(id)init;
-(id<FBResponseHandlerDelegate>)delegate;
-(id<FBRequest>)request;
-(void)close;
-(void)open;
-(void)abort;
@end

