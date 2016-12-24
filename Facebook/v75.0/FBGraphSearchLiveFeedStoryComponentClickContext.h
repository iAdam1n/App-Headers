/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSearchComponentModel, FBSearchResultsContext;

@interface FBGraphSearchLiveFeedStoryComponentClickContext : NSObject {

	FBSearchComponentModel* _storyEdgeModel;
	FBSearchResultsContext* _context;

}

@property (nonatomic,readonly) FBSearchComponentModel * storyEdgeModel;              //@synthesize storyEdgeModel=_storyEdgeModel - In the implementation block
@property (nonatomic,readonly) FBSearchResultsContext * context;                     //@synthesize context=_context - In the implementation block
-(id)initWithStoryEdgeModel:(id)arg1 context:(id)arg2 ;
-(FBSearchComponentModel *)storyEdgeModel;
-(FBSearchResultsContext *)context;
@end
