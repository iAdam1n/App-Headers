/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <Reddit/BaseView.h>

@protocol LiveBannerContentViewDelegate;
@class LiveEvent, AttributedLabelRegular, BaseLabel, BaseImageView;

@interface LiveBannerContentView : BaseView {

	id<LiveBannerContentViewDelegate> _delegate;
	LiveEvent* _liveEvent;
	AttributedLabelRegular* _metadataLabel;
	BaseLabel* _titleLabel;
	BaseImageView* _chevronImageView;

}

@property (nonatomic,retain) AttributedLabelRegular * metadataLabel;                         //@synthesize metadataLabel=_metadataLabel - In the implementation block
@property (nonatomic,retain) BaseLabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) BaseImageView * chevronImageView;                               //@synthesize chevronImageView=_chevronImageView - In the implementation block
@property (nonatomic,retain) LiveEvent * liveEvent;                                          //@synthesize liveEvent=_liveEvent - In the implementation block
@property (assign,nonatomic,__weak) id<LiveBannerContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(CGSize)calculatedSizeWithData:(id)arg1 ;
+(id)metadataStringWithLiveEvent:(id)arg1 ;
+(id)titleLabelFactory;
-(void)setLiveEvent:(LiveEvent *)arg1 ;
-(void)configureWithData:(id)arg1 andDelegate:(id)arg2 ;
-(LiveEvent *)liveEvent;
-(void)didTap:(id)arg1 ;
-(BaseImageView *)chevronImageView;
-(AttributedLabelRegular *)metadataLabel;
-(void)setMetadataLabel:(AttributedLabelRegular *)arg1 ;
-(void)setChevronImageView:(BaseImageView *)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setDelegate:(id<LiveBannerContentViewDelegate>)arg1 ;
-(id<LiveBannerContentViewDelegate>)delegate;
-(BaseLabel *)titleLabel;
-(void)prepareForReuse;
-(void)setTitleLabel:(BaseLabel *)arg1 ;
@end
