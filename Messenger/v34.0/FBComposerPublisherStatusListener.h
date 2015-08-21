/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBComposerPublisherStatusListener <NSObject>
@required
-(void)startedPublishingPublisherData:(id)arg1;
-(void)attemptedPublicationOfPublisherData:(id)arg1;
-(void)failedPublishingPublisherData:(id)arg1 withError:(id)arg2;
-(void)failedPublishingAndWaitingForRetryPublisherData:(id)arg1 withError:(id)arg2;
-(void)retriedPublishingPublisherData:(id)arg1;
-(void)pausedPublishingPublisherData:(id)arg1;
-(void)startedWaitingForConnectivityForPublicationOfPublisherData:(id)arg1;
-(void)scheduledPublicationOfPublisherData:(id)arg1 atDate:(id)arg2;
-(void)publicationProgressedWithProgress:(double)arg1 forPublisherData:(id)arg2;
-(void)startedUploadingItemOfType:(int)arg1 withThumbnailImage:(id)arg2 forPublisherData:(id)arg3;
-(void)canCancelPublishingOfPublisherData:(id)arg1;
-(void)cannotCancelPublishingOfPublisherData:(id)arg1;
-(void)startedServerProcessingForUploadedPublication:(id)arg1;
-(void)terminallyFailedPublishingPublisherData:(id)arg1 withError:(id)arg2;
-(void)successfullyPublishedPublisherData:(id)arg1 withResponse:(id)arg2;
-(void)cancelledPublishingPublisherData:(id)arg1;

@end

