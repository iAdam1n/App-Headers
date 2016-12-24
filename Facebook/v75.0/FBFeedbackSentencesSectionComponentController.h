/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSectionComponentController.h>
#import <Facebook/FBFeedbackUpdateListener.h>
#import <Facebook/FBFeedbackObserverDelegate.h>
#import <Facebook/FBFeedbackViewStateListener.h>

@class FBFeedbackObserver, FBFeedbackUpdateListenerAnnouncer, NSString;

@interface FBFeedbackSentencesSectionComponentController : FBSectionComponentController <FBFeedbackUpdateListener, FBFeedbackObserverDelegate, FBFeedbackViewStateListener> {

	FBFeedbackObserver* _feedbackObserver;
	FBFeedbackUpdateListenerAnnouncer* _feedbackUpdateAnnouncer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didLoad;
-(void)feedbackObserver:(id)arg1 didUpdateFeedback:(id)arg2 ;
-(id)_toolboxFromComponent;
-(void)disableViews;
-(void)reenableViews;
-(void)didUpdateFeedback:(id)arg1 ;
-(void)dimViewsForCommentEditing;
-(void)undimViewsForCommentEditing;
-(void)_startViewStateListening;
-(id)_feedbackFromComponent;
-(void)_startFeedbackObservationWith:(id)arg1 ;
-(void)_stopFeedbackObservation;
-(void)_stopViewStateListening;
-(void)dealloc;
@end
