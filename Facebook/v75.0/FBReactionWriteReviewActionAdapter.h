/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBReactionBaseActionAdapter.h>
#import <Facebook/FBComposerFlowDelegate.h>
#import <Facebook/FBPublishingCompletionEventListener.h>

@class UIControl, FBPublishingCompletionEventForwarder, NSString;

@interface FBReactionWriteReviewActionAdapter : FBReactionBaseActionAdapter <FBComposerFlowDelegate, FBPublishingCompletionEventListener> {

	UIControl* _actionView;
	FBPublishingCompletionEventForwarder* _publishingEventForwarder;
	NSString* _style;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)threadsafeActionViewHeightForUnit:(id)arg1 action:(id)arg2 constrainedSize:(CGSize)arg3 ;
-(void)performActionWithExtras:(id)arg1 ;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 action:(id)arg4 ;
-(void)composerCompletedWithResult:(id)arg1 ;
-(void)cleanUpPublicationHandling;
-(void)publicationCompletedThroughTerminalFailureOfPublication:(id)arg1 withError:(id)arg2 ;
-(void)publicationCompletedThroughSuccessOfPublication:(id)arg1 withResponse:(id)arg2 ;
-(void)publicationCompletedThroughCancellationOfPublication:(id)arg1 ;
-(BOOL)performMagicTap;
-(void)actionViewTapped:(id)arg1 ;
-(unsigned long long)actionGlyphName;
-(void)launchReviewComposer;
-(id)actionView;
@end
