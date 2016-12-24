/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBLoadingView.h>
#import <Facebook/FBFeedShimmeringStoriesHeaderWithCustomEdgeInsets.h>

@class FBShimmeringView, UIView, UIImageView, NSMutableArray, FBGroupFeedActionHandler, NSString;

@interface FBGroupsHeaderLoadingView : UIView <FBLoadingView, FBFeedShimmeringStoriesHeaderWithCustomEdgeInsets> {

	FBShimmeringView* _headerViewTitleShimmerView;
	FBShimmeringView* _composerShimmerView;
	UIView* _coverPhotoPlaceholderView;
	UIImageView* _titleLabel;
	UIView* _composerContainerView;
	UIView* _composerView;
	UIView* _profileView;
	NSMutableArray* _shimmeringStoryCardViews;
	BOOL _loading;
	BOOL _includeStories;
	FBGroupFeedActionHandler* _actionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
+(id)newLoadingViewWithStories:(BOOL)arg1 actionHandler:(id)arg2 ;
-(id)_shimmeringViewWithContentView:(id)arg1 ;
-(void)_updateShimmeringStoryContent;
-(id)_dequeueShimmeringStoryCardViewAtIndex:(unsigned long long)arg1 frame:(CGRect)arg2 ;
-(void)_clearUnusedViewsStartingFromIndex:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(BOOL)isLoading;
-(void)setLoading:(BOOL)arg1 ;
@end
