/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <Reddit/BaseView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FeedPostVideoViewDelegate;
@class Post, ContentVideoView, UITapGestureRecognizer, NSString;

@interface FeedPostVideoView : BaseView <UIGestureRecognizerDelegate> {

	id<FeedPostVideoViewDelegate> _delegate;
	Post* _post;
	ContentVideoView* _videoView;
	UITapGestureRecognizer* _tapGesture;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;                        //@synthesize tapGesture=_tapGesture - In the implementation block
@property (assign,nonatomic,__weak) id<FeedPostVideoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) Post * post;                                                //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) ContentVideoView * videoView;                               //@synthesize videoView=_videoView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)calculatedSizeWithData:(id)arg1 ;
+(CGSize)calculatedSizeWithData:(id)arg1 shouldCropPreview:(BOOL)arg2 shouldAlwaysShowVideo:(BOOL)arg3 ;
-(void)willBeginDisplaying;
-(void)didBecomeFullyVisible;
-(void)configureWithData:(id)arg1 andDelegate:(id)arg2 ;
-(Post *)post;
-(void)setPost:(Post *)arg1 ;
-(UITapGestureRecognizer *)tapGesture;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(void)didTapVideo;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FeedPostVideoViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FeedPostVideoViewDelegate>)delegate;
-(void)prepareForReuse;
-(void)setVideoView:(ContentVideoView *)arg1 ;
-(void)didEndDisplaying;
-(ContentVideoView *)videoView;
@end
