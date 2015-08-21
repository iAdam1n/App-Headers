/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class FBSearchResultsContext;

@interface FBSearchResultsContextEventForwarder : NSObject {

	FBSearchResultsContext* _context;

}

@property (assign,nonatomic,__weak) FBSearchResultsContext * context;              //@synthesize context=_context - In the implementation block
-(void)resultsDidReceiveClickOnResultEdgeModel:(id)arg1 ;
-(void)resultsDidTapSeeMoreOnModuleEdgeModel:(id)arg1 ;
-(void)resultsDidTapExpandOnModuleEdgeModel:(id)arg1 ;
-(void)resultsDidReceiveInlineAction:(unsigned long long)arg1 onResultNode:(id)arg2 ;
-(void)resultsDidTapSeeMoreFriendPostsButton;
-(void)resultsDidReceiveTapOnFilterPivotQuery:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)resultsDidReceiveTapOnSeeMoreMediaEdgeModel:(id)arg1 ;
-(FBSearchResultsContext *)context;
-(void)setContext:(FBSearchResultsContext *)arg1 ;
@end

