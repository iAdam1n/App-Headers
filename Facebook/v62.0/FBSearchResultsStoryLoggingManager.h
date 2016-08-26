/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSearchResultsStoryLoggingHandlerProtocol.h>

@class NSMapTable, FBSearchResultsStoryProxyingIntentHandler, FBSearchResultsFeedEventBusProvider, FBSearchResultsStoryFeedComponentEventListener, FBSearchResultsContext;

@interface FBSearchResultsStoryLoggingManager : NSObject <FBSearchResultsStoryLoggingHandlerProtocol> {

	NSMapTable* _storyIdToStoryEdgeModelMapTable;
	FBSearchResultsStoryProxyingIntentHandler* _proxyingIntentHandler;
	FBSearchResultsFeedEventBusProvider* _eventBusProvider;
	FBSearchResultsStoryFeedComponentEventListener* _feedComponentEventListener;
	FBSearchResultsContext* _searchResultsContext;

}

@property (nonatomic,readonly) FBSearchResultsStoryProxyingIntentHandler * proxyingIntentHandler;                        //@synthesize proxyingIntentHandler=_proxyingIntentHandler - In the implementation block
@property (nonatomic,readonly) FBSearchResultsFeedEventBusProvider * eventBusProvider;                                   //@synthesize eventBusProvider=_eventBusProvider - In the implementation block
@property (nonatomic,readonly) FBSearchResultsStoryFeedComponentEventListener * feedComponentEventListener;              //@synthesize feedComponentEventListener=_feedComponentEventListener - In the implementation block
@property (assign,nonatomic,__weak) FBSearchResultsContext * searchResultsContext;                                       //@synthesize searchResultsContext=_searchResultsContext - In the implementation block
-(void)storyEdgeModel:(id)arg1 didTriggerAction:(id)arg2 ;
-(id)_storyIdForStoryEdgeModel:(id)arg1 ;
-(void)_logStoryEdgeModel:(id)arg1 action:(id)arg2 extra:(id)arg3 ;
-(void)storyWithAnalyticsInfo:(id)arg1 didTriggerAction:(id)arg2 extra:(id)arg3 debugInfo:(id)arg4 ;
-(FBSearchResultsContext *)searchResultsContext;
-(void)setSearchResultsContext:(FBSearchResultsContext *)arg1 ;
-(FBSearchResultsFeedEventBusProvider *)eventBusProvider;
-(id)feedStoryTrackingDataForStoryEdgeModel:(id)arg1 ;
-(FBSearchResultsStoryFeedComponentEventListener *)feedComponentEventListener;
-(id)initWithTargetIntentHandler:(id)arg1 ;
-(FBSearchResultsStoryProxyingIntentHandler *)proxyingIntentHandler;
@end
