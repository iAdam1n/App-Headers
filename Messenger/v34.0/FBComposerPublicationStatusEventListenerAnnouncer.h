/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/FBComposerPublicationStatusEventListener.h>

@class NSString;

@interface FBComposerPublicationStatusEventListenerAnnouncer : FBAnnouncerBase <FBComposerPublicationStatusEventListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startedPublishingComposerPublication:(id)arg1 ;
-(void)attemptedPublishingComposerPublication:(id)arg1 ;
-(void)failedPublishingComposerPublication:(id)arg1 withError:(id)arg2 ;
-(void)failedPublishingAndWaitingForRetryForComposerPublication:(id)arg1 withError:(id)arg2 ;
-(void)terminallyFailedPublishingComposerPublication:(id)arg1 withError:(id)arg2 ;
-(void)startedServerProcessingForUploadedComposerPublication:(id)arg1 ;
-(void)pausedPublishingComposerPublication:(id)arg1 ;
-(void)successfullyPublishedComposerPublication:(id)arg1 response:(id)arg2 ;
-(void)cancelledPublishingComposerPublication:(id)arg1 ;
-(void)retriedPublishingComposerPublication:(id)arg1 ;
-(void)startedWaitingForConnectivityForComposerPublication:(id)arg1 ;
-(void)scheduledPublishingComposerPublication:(id)arg1 atDate:(id)arg2 ;
-(void)publicationProgressedWithProgress:(double)arg1 forComposerPublication:(id)arg2 ;
-(void)startedUploadingItemOfType:(int)arg1 withThumbnailImage:(id)arg2 forComposerPublication:(id)arg3 ;
-(void)canCancelComposerPublication:(id)arg1 ;
-(void)cannotCancelComposerPublication:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
