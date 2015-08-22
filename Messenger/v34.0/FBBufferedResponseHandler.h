/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBReceivedDataBufferDelegate.h>
#import <Messenger/FBResponseHandling.h>

@protocol FBRequest, FBResponseHandlerDelegate;
@class FBReceivedDataMemoryBuffer, NSString;

@interface FBBufferedResponseHandler : NSObject <FBReceivedDataBufferDelegate, FBResponseHandling> {

	FBReceivedDataMemoryBuffer* _receivedDataBuffer;
	id<FBRequest> _request;
	id<FBResponseHandlerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBRequest> request;                                    //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<FBResponseHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)receivedDataBuffer:(id)arg1 didReceiveData:(id)arg2 ;
-(void)receivedDataBuffer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)handleData:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBResponseHandlerDelegate>)arg1 ;
-(id)init;
-(id<FBResponseHandlerDelegate>)delegate;
-(id<FBRequest>)request;
-(void)close;
-(id)initWithRequest:(id)arg1 ;
-(void)open;
-(void)abort;
@end
