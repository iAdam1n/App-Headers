/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBFeedStoryContentRenderingComponent.h>

@class FBMemFeedStory, FBFeedToolbox, FBNativeArticleAttachmentModel, FBAnalyticsInfo, FBFeedEventBus, NSArray, FBTextWithEntitiesHighlightedWordsContext, NSString;

@interface FBDenseFeedLinkStoryComponent : CKCompositeComponent <FBFeedStoryContentRenderingComponent> {

	FBMemFeedStory* _story;
	FBFeedToolbox* _toolbox;
	FBNativeArticleAttachmentModel* _model;
	FBAnalyticsInfo* _analyticsInfo;
	FBFeedEventBus* _eventBus;
	NSArray* _trackingCodes;
	NSArray* _trackingNodes;
	FBTextWithEntitiesHighlightedWordsContext* _highlightedWordsContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithStory:(id)arg1 options:(const FBFeedStoryContentComponentOptions*)arg2 toolbox:(id)arg3 ;
-(void)openInstantArticle:(id)arg1 ;
-(void)openLink:(id)arg1 ;
-(void)openPermalink:(id)arg1 ;
@end
