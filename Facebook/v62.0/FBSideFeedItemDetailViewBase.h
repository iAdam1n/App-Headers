/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBFeedSideFeedDetailViewBaseDelegate;
@class FBSideFeedStarRatingView, FBRichTextView, UIButton, NSNumber;

@interface FBSideFeedItemDetailViewBase : UIView {

	FBSideFeedStarRatingView* _starRatingView;
	FBRichTextView* _titleTextView;
	FBRichTextView* _subtitleTextView;
	FBRichTextView* _descriptionTextView;
	UIButton* _rightCtaButton;
	BOOL _renderZeroRating;
	id<FBFeedSideFeedDetailViewBaseDelegate> _delegate;
	NSNumber* _rating;

}

@property (assign,nonatomic,__weak) id<FBFeedSideFeedDetailViewBaseDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBRichTextView * titleTextView; 
@property (nonatomic,readonly) FBRichTextView * subtitleTextView; 
@property (nonatomic,readonly) FBRichTextView * descriptionTextView; 
@property (nonatomic,readonly) UIButton * rightCtaButton; 
@property (nonatomic,copy) NSNumber * rating;                                                       //@synthesize rating=_rating - In the implementation block
@property (assign,nonatomic) BOOL renderZeroRating;                                                 //@synthesize renderZeroRating=_renderZeroRating - In the implementation block
+(double)heightConstrainedToSize:(CGSize)arg1 title:(id)arg2 subtitle:(id)arg3 description:(id)arg4 starRatingValue:(id)arg5 ;
-(FBRichTextView *)subtitleTextView;
-(id)createTitleTextViewForBaseClass;
-(id)createSubtitleTextViewForBaseClass;
-(id)createDescriptionTextViewForBaseClass;
-(id)createRightCtaButtonForBaseClass;
-(void)_rightButtonViewTapped:(id)arg1 ;
-(void)setRenderZeroRating:(BOOL)arg1 ;
-(FBRichTextView *)titleTextView;
-(UIButton *)rightCtaButton;
-(void)_resetFrames;
-(BOOL)renderZeroRating;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBFeedSideFeedDetailViewBaseDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBFeedSideFeedDetailViewBaseDelegate>)delegate;
-(void)prepareForReuse;
-(BOOL)isAccessibilityElement;
-(NSNumber *)rating;
-(void)setRating:(NSNumber *)arg1 ;
-(FBRichTextView *)descriptionTextView;
@end

