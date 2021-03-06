/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFeedComposerDataAdaptorDelegate;
@class FBUserSession, FBFeedComposerDataAdaptorAssetFetcher, FBFeedComposerDataAdaptorContext, NSMutableDictionary;

@interface FBFeedComposerDataAdaptor : NSObject {

	FBUserSession* _session;
	id<FBFeedComposerDataAdaptorDelegate> _delegate;
	FBFeedComposerDataAdaptorAssetFetcher* _assetFetcher;
	FBFeedComposerDataAdaptorContext* _context;
	NSMutableDictionary* _publications;

}
-(id)convertAndStartLoadingIfNeeded:(id)arg1 ;
-(BOOL)asyncLoadAttachmentsIfNeeded:(id)arg1 publicationIdentifier:(id)arg2 ;
-(void)finishedLoadingForPublicationWithIdentifier:(id)arg1 ;
-(id)_publications;
-(void)cancelLoadingForPublication:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

