/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposerVideoTaggingAttachmentAnalysisDelegate.h>
#import <Facebook/FBComposerCompositionStateChangedListener.h>

@protocol FBComposerUpdateHandler;
@class FBUserSession, FBComposerCompositionState, NSMutableDictionary, NSString;

@interface FBComposerVideoTaggingController : NSObject <FBComposerVideoTaggingAttachmentAnalysisDelegate, FBComposerCompositionStateChangedListener> {

	FBUserSession* _session;
	id<FBComposerUpdateHandler> _updateHandler;
	FBComposerCompositionState* _compositionState;
	NSMutableDictionary* _analysisMap;
	BOOL _pushingAnalysisState;
	BOOL _needsToPushAnalysisState;
	double _analysisStartTime;
	double _totalTimeToFaceTime;
	unsigned long long _totalTimeToFaceCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2 ;
-(id)initWithSession:(id)arg1 updateHandler:(id)arg2 ;
-(void)attachmentAnalysisDidComplete:(id)arg1 ;
-(void)_updateAnalysesForVideoAttachments:(id)arg1 ;
-(void)_startStopAnalysesIfRequired;
-(void)_startStopTimeTrackingIfRequired;
-(void)_pushAnalysisStateIntoComposerAttachmentsIfRequired;
-(void)_pushAnalyticsIntoComposerCompositionStateIfRequired;
-(void)dealloc;
@end
