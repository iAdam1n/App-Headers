/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBNativeAdShareContentNodeMetrics.h>

@interface FBNativeAdMultiShareChildContentNodeMetrics : FBNativeAdShareContentNodeMetrics

@property (nonatomic,readonly) double childShareNodeSpacing; 
@property (nonatomic,readonly) double childShareNodePercentage; 
@property (nonatomic,readonly) FBTextMetrics* bodyTextRedesignMetrics; 
@property (nonatomic,readonly) double horizontalSpacePadding; 
@property (nonatomic,readonly) double verticalSpacePadding; 
@property (nonatomic,readonly) double ctaButtonSpacePadding; 
@property (nonatomic,readonly) FBTextMetrics* subtitleTextRedesignMetrics; 
-(CGSize)defaultImageSizeWithConstrainedSize:(CGSize)arg1 ;
-(FBTextMetrics*)subtitleTextRedesignMetrics;
-(double)ctaButtonSpacePadding;
-(double)childShareNodeSpacing;
-(double)childShareNodePercentage;
-(FBTextMetrics*)bodyTextRedesignMetrics;
-(CGSize)calculateNodeSizeWithCallToActionText:(id)arg1 titleText:(id)arg2 subtitleText:(id)arg3 bodyText:(id)arg4 constrainingSize:(CGSize)arg5 ;
-(CGSize)calculateRedesignChildNodeSizeWithSubtitleText:(id)arg1 shareImageURL:(id)arg2 actionButtonText:(id)arg3 constrainedSize:(CGSize)arg4 ;
-(double)horizontalSpacePadding;
-(double)verticalSpacePadding;
-(unsigned long long)bodyMaxLineCount;
@end
