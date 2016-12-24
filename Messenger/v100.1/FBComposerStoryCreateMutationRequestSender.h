/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPublishingRequestSender.h>

@protocol FBPublishingRequestSenderDelegate;
@class FBUserSession, FBGraphQLMutationHandle, NSString;

@interface FBComposerStoryCreateMutationRequestSender : NSObject <FBPublishingRequestSender> {

	FBUserSession* _session;
	unsigned long long _mediaType;
	/*^block*/id _responseParsingBlock;
	FBGraphQLMutationHandle* _handle;
	id<FBPublishingRequestSenderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPublishingRequestSenderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cleanupOutstandingRequests;
-(void)sendRequestWithPublisherData:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 mediaType:(unsigned long long)arg2 responseParsingBlock:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<FBPublishingRequestSenderDelegate>)arg1 ;
-(id<FBPublishingRequestSenderDelegate>)delegate;
@end
