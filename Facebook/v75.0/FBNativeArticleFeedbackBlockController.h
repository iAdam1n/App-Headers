/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBBackgroundDeallocatedObject.h>
#import <Facebook/FBModalPresentationSource.h>
#import <Facebook/FBNativeArticleFeedbackBlockNodeDelegate.h>
#import <Facebook/FBGestureRecognizingBlockController.h>
#import <Facebook/FBNACommentNavigationControllerActionHandler.h>
#import <Facebook/FBRichStoryBlockController.h>

@class FBRichStoryBlock, NSDictionary, FBUserSession, FBRichStoryBlockDisplayContext, FBRichStoryEntityArticleLevelFeedback, FBMemFeedback, FBNativeArticleFeedbackBlockNode, FBConsistentLookasideCacheObservationHandle, FBFeedToolbox, FBPaperModalViewController, NSString;

@interface FBNativeArticleFeedbackBlockController : FBBackgroundDeallocatedObject <FBModalPresentationSource, FBNativeArticleFeedbackBlockNodeDelegate, FBGestureRecognizingBlockController, FBNACommentNavigationControllerActionHandler, FBRichStoryBlockController> {

	FBRichStoryBlock* _storyBlock;
	NSDictionary* _presentationAttributes;
	FBUserSession* _session;
	FBRichStoryBlockDisplayContext* _displayContext;
	FBRichStoryEntityArticleLevelFeedback* _articleLevelFeedback;
	FBMemFeedback* _feedback;
	FBNativeArticleFeedbackBlockNode* _blockNode;
	FBConsistentLookasideCacheObservationHandle* _clcObservationHandle;
	FBFeedToolbox* _toolbox;
	FBPaperModalViewController* _modalViewController;

}

@property (assign,nonatomic,__weak) FBPaperModalViewController * modalViewController;              //@synthesize modalViewController=_modalViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)layoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
-(id)richStoryRenderable;
-(id)initWithStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
-(BOOL)canRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(id)modalPresentationStackManager;
-(id)clcObservationHandleForFeedback:(id)arg1 ;
-(void)updateLatestFeedback:(id)arg1 ;
-(void)_presentCommentModalViewController:(id)arg1 presentationStyle:(unsigned char)arg2 completion:(/*^block*/id)arg3 ;
-(void)feedbackBlockNodeDidTapComment:(id)arg1 ;
-(void)setModalViewController:(FBPaperModalViewController *)arg1 ;
-(void)feedbackBlockNodeDidTapCounts:(id)arg1 actionType:(unsigned long long)arg2 ;
-(void)feedbackBlockNodeDidTapShare:(id)arg1 ;
-(void)commentNavigationControllerCloseAction:(id)arg1 ;
-(void)dealloc;
-(FBPaperModalViewController *)modalViewController;
-(void)didUpdate:(id)arg1 ;
@end
