/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class NSArray, FBSearchResultsContext, FBSearchComponentModel;

@interface FBGraphSearchLiveFeedStoryComponent : CKCompositeComponent {

	NSArray* _parentTrackingCodes;
	NSArray* _trackingCodes;
	NSArray* _trackingNodes;
	FBSearchResultsContext* _context;
	FBSearchComponentModel* _storyEdgeModel;

}

@property (nonatomic,readonly) FBSearchResultsContext * context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) FBSearchComponentModel * storyEdgeModel;              //@synthesize storyEdgeModel=_storyEdgeModel - In the implementation block
+(id)newWithStyle:(const FBGraphSearchLiveFeedStoryComponentStyle*)arg1 storyEdgeModel:(id)arg2 context:(id)arg3 ;
-(void)didTapComponent;
-(FBSearchComponentModel *)storyEdgeModel;
-(FBSearchResultsContext *)context;
@end
