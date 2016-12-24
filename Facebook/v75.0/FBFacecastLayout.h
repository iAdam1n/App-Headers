/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBFacecastLayout : NSObject
+(id)regularFont;
+(BOOL)isLandscapeBounds:(CGSize)arg1 ;
+(BOOL)isPortraitBounds:(CGSize)arg1 ;
+(CGRect)interactionContentFrameForInteractionFrame:(CGRect)arg1 videoFrame:(CGRect)arg2 toolbarFrame:(CGRect)arg3 minimumContentHeight:(double)arg4 withinBounds:(CGSize)arg5 ;
+(UIEdgeInsets)eventsInsetForInteractionFrame:(CGRect)arg1 videoFrame:(CGRect)arg2 ;
+(double)crowdNoiseFireworksMaxYWithParentFrame:(CGRect)arg1 interactionFrame:(CGRect)arg2 interactionContentInset:(UIEdgeInsets)arg3 videoPlayerFrame:(CGRect)arg4 toolbarFrame:(CGRect)arg5 isAudioOnly:(BOOL)arg6 ;
+(CGRect)crowdNoiseFrameWithParentFrame:(CGRect)arg1 interactionFrame:(CGRect)arg2 interactionContentInset:(UIEdgeInsets)arg3 distanceToEvents:(double)arg4 videoPlayerFrame:(CGRect)arg5 toolbarFrame:(CGRect)arg6 isAudioOnly:(BOOL)arg7 ;
+(CGRect)audioOnlyFeedbackFrameWithParentFrame:(CGRect)arg1 crowdNoiseFrame:(CGRect)arg2 videoPlayerFrame:(CGRect)arg3 toolbarFrame:(CGRect)arg4 audioOnlyFeedbackSize:(CGSize)arg5 hasAnimations:(BOOL)arg6 ;
+(unsigned long long)styleFromViewerVideo:(id)arg1 withinBounds:(CGSize)arg2 session:(id)arg3 ;
+(CGRect)frameOfViewerVideo:(id)arg1 withinBounds:(CGSize)arg2 session:(id)arg3 ;
+(CGRect)interactionFrameForVideoFrame:(CGRect)arg1 withinBounds:(CGSize)arg2 ;
+(CGRect)unoccupiedFrameForCoveringFrames:(id)arg1 withinBounds:(CGSize)arg2 ;
+(id)videoGravityWithPlayerSize:(CGSize)arg1 videoSize:(CGSize)arg2 session:(id)arg3 ;
+(BOOL)isFullScreenVideo:(id)arg1 withinBounds:(CGSize)arg2 ;
+(id)regularColorForStyle:(unsigned long long)arg1 ;
+(unsigned long long)styleFromVideoStreamingSize:(CGSize)arg1 withinBounds:(CGSize)arg2 ;
+(BOOL)isFullScreenVideoSize:(CGSize)arg1 withinBounds:(CGSize)arg2 ;
+(BOOL)isFullScreenBroadcastInSession:(id)arg1 ;
+(unsigned long long)biggerVideoDimensionWithSmallerDimension:(unsigned long long)arg1 inSession:(id)arg2 ;
+(CGRect)frameOfVideoWithStreamingSize:(CGSize)arg1 withinBounds:(CGSize)arg2 ;
+(id)toolbarColorForStyle:(unsigned long long)arg1 quietModePercent:(double)arg2 focused:(BOOL)arg3 ;
+(BOOL)canRotateInApplicationWindow;
+(CGRect)frameOfVideoWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 withinBounds:(CGSize)arg3 ;
+(id)importantFont;
+(id)importantColorForStyle:(unsigned long long)arg1 ;
+(id)shadowForStyle:(unsigned long long)arg1 ;
+(id)hyperlinkColorForStyle:(unsigned long long)arg1 ;
+(id)backgroundColorForStyle:(unsigned long long)arg1 isFocal:(BOOL)arg2 ;
+(id)focalFont;
+(id)focalColorForStyle:(unsigned long long)arg1 ;
+(BOOL)isPortraitVideo:(id)arg1 ;
+(BOOL)isLandscapeVideo:(id)arg1 ;
+(double)minimumVideoRemainderWidthForInteraction;
+(BOOL)isSquareBounds:(CGSize)arg1 ;
+(BOOL)_shouldSplitCrowdNoiseAndInteractionFrame:(CGRect)arg1 videoFrame:(CGRect)arg2 ;
+(BOOL)isFullScreenVideoWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 withinBounds:(CGSize)arg3 ;
+(unsigned long long)styleFromVideoWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 withinBounds:(CGSize)arg3 ;
+(BOOL)canRotateInBounds:(CGSize)arg1 ;
+(BOOL)isFullscreenLandscapeBroadcastingEnabledInSession:(id)arg1 ;
+(unsigned long long)styleFromVideo:(id)arg1 withinBounds:(CGSize)arg2 ;
+(BOOL)isSquareVideo:(id)arg1 ;
+(CGRect)frameOfVideo:(id)arg1 withinBounds:(CGSize)arg2 ;
+(id)buttonColorForStyle:(unsigned long long)arg1 ;
@end
