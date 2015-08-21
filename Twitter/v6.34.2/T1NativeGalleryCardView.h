/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterBaseCardView.h>
#import <Twitter/TFNTwitterBaseCardViewUpdater.h>

@class TFNTappableImageView, NSMutableArray, UILabel, TFNAttributedTextView, TFNHighlightControl, T1NativeCardClassicButton, UILongPressGestureRecognizer, T1NativeGalleryCardViewModel, T1NativeGalleryCardViewLayoutDelegate, NSString;

@interface T1NativeGalleryCardView : TFNTwitterBaseCardView <TFNTwitterBaseCardViewUpdater> {

	TFNTappableImageView* _avatarView;
	NSMutableArray* _imageViews;
	UILabel* _fullNameLabel;
	UILabel* _bylineLabel;
	TFNAttributedTextView* _titleLabel;
	TFNHighlightControl* _attributionHighlightControl;
	TFNHighlightControl* _titleHighlightControl;
	TFNHighlightControl* _bylineHighlightControl;
	TFNAttributedTextView* _descriptionLabel;
	TFNHighlightControl* _descriptionHighlightControl;
	T1NativeCardClassicButton* _ctaButton;
	UILongPressGestureRecognizer* _ctaLongPressGestureRecognizer;
	T1NativeGalleryCardViewModel* _viewModel;

}

@property (assign,nonatomic,__weak) T1NativeGalleryCardViewLayoutDelegate * layoutDelegate; 
@property (nonatomic,retain) TFNTappableImageView * avatarView;                                          //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageViews;                                                //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) UILabel * fullNameLabel;                                                    //@synthesize fullNameLabel=_fullNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * bylineLabel;                                                      //@synthesize bylineLabel=_bylineLabel - In the implementation block
@property (nonatomic,retain) TFNAttributedTextView * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) TFNHighlightControl * attributionHighlightControl;                          //@synthesize attributionHighlightControl=_attributionHighlightControl - In the implementation block
@property (nonatomic,retain) TFNHighlightControl * titleHighlightControl;                                //@synthesize titleHighlightControl=_titleHighlightControl - In the implementation block
@property (nonatomic,retain) TFNHighlightControl * bylineHighlightControl;                               //@synthesize bylineHighlightControl=_bylineHighlightControl - In the implementation block
@property (nonatomic,retain) TFNAttributedTextView * descriptionLabel;                                   //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) TFNHighlightControl * descriptionHighlightControl;                          //@synthesize descriptionHighlightControl=_descriptionHighlightControl - In the implementation block
@property (nonatomic,retain) T1NativeCardClassicButton * ctaButton;                                      //@synthesize ctaButton=_ctaButton - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * ctaLongPressGestureRecognizer;               //@synthesize ctaLongPressGestureRecognizer=_ctaLongPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) T1NativeGalleryCardViewModel * viewModel;                                   //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TFNHighlightControl *)titleHighlightControl;
-(TFNHighlightControl *)descriptionHighlightControl;
-(void)setTitleHighlightControl:(TFNHighlightControl *)arg1 ;
-(void)setDescriptionHighlightControl:(TFNHighlightControl *)arg1 ;
-(void)_viewModelDidUpdate:(id)arg1 ;
-(T1NativeGalleryCardViewModel *)viewModel;
-(void)setViewModel:(T1NativeGalleryCardViewModel *)arg1 ;
-(void)cardContextDidChange:(id)arg1 withPreviousCardContext:(id)arg2 ;
-(UILabel *)fullNameLabel;
-(TFNTappableImageView *)avatarView;
-(void)_didTapOnAttributionFullName:(id)arg1 ;
-(void)_didTapOnAttributionAvatarImage:(id)arg1 ;
-(void)_didTapOnLink:(id)arg1 ;
-(void)_didLongPressOnLink:(id)arg1 ;
-(void)_didTapOnByline:(id)arg1 ;
-(void)_didLongPressOnCallToActionWithGestureRecognizer:(id)arg1 ;
-(void)_didTapOnCallToAction:(id)arg1 ;
-(void)_updateUserIfNeeded;
-(void)_updateTitleIfNeeded;
-(void)_updateBylineIfNeeded;
-(void)_updateDescriptionIfNeeded;
-(void)_updateCallToActionIfNeeded;
-(TFNHighlightControl *)attributionHighlightControl;
-(UILabel *)bylineLabel;
-(TFNHighlightControl *)bylineHighlightControl;
-(T1NativeCardClassicButton *)ctaButton;
-(void)setAvatarView:(TFNTappableImageView *)arg1 ;
-(void)setFullNameLabel:(UILabel *)arg1 ;
-(void)setAttributionHighlightControl:(TFNHighlightControl *)arg1 ;
-(void)setBylineLabel:(UILabel *)arg1 ;
-(void)setBylineHighlightControl:(TFNHighlightControl *)arg1 ;
-(void)setCtaButton:(T1NativeCardClassicButton *)arg1 ;
-(UILongPressGestureRecognizer *)ctaLongPressGestureRecognizer;
-(void)setCtaLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)_didTapOnImage:(id)arg1 ;
-(id)_defaultImageViewWithtapSelector:(SEL)arg1 accessibilityIdentifier:(id)arg2 ;
-(void)_updateThumbnailImageIfNeeded;
-(void)updateSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(TFNAttributedTextView *)titleLabel;
-(void)prepareForReuse;
-(void)_cleanup;
-(void)setTitleLabel:(TFNAttributedTextView *)arg1 ;
-(TFNAttributedTextView *)descriptionLabel;
-(void)setDescriptionLabel:(TFNAttributedTextView *)arg1 ;
-(void)setImageViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)imageViews;
@end

