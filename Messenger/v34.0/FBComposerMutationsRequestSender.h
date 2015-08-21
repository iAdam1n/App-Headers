/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBPublishingRequestSender.h>

@protocol FBPublishingRequestSenderDelegate;
@class FBUserSession, FBGraphQLMutationHandle, NSString;

@interface FBComposerMutationsRequestSender : NSObject <FBPublishingRequestSender> {

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
-(id)initWithUserSession:(id)arg1 mediaType:(unsigned long long)arg2 responseParsingBlock:(/*^block*/id)arg3 ;
-(void)cleanupOutstandingRequests;
-(void)sendFollowUpRequestAfterFlowSuccessWithResult:(id)arg1 publisherData:(id)arg2 ;
-(void)sendRequestWithPublisherData:(id)arg1 ;
-(void)setDelegate:(id<FBPublishingRequestSenderDelegate>)arg1 ;
-(id<FBPublishingRequestSenderDelegate>)delegate;
@end

