/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol ECAdListCellDelegate;
@class ECAd, UIView, UIImageView, UILabel, UIColor, NSLayoutConstraint, ECAdListFlagView, ECAdListNoteView, ECWatchlistButton;

@interface ECAdListBaseViewCell : UICollectionViewCell {

	CGSize _lastFrameSize;
	BOOL _showWatchlistButton;
	ECAd* _ad;
	UIView* _appendageView;
	unsigned long long _cellType;
	id _metadata;
	id<ECAdListCellDelegate> _delegate;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UIColor* _highlightBackgroundColor;
	UIView* _appendageWrapperView;
	NSLayoutConstraint* _appendageWrapperViewHeightConstraint;
	UILabel* _dateLabel;
	ECAdListFlagView* _flagView;
	UILabel* _locationLabel;
	ECAdListNoteView* _noteView;
	UILabel* _priceLabel;
	ECWatchlistButton* _watchlistButton;
	NSLayoutConstraint* _noteViewHeightConstraint;

}

@property (nonatomic,retain) UIView * appendageWrapperView;                                          //@synthesize appendageWrapperView=_appendageWrapperView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * appendageWrapperViewHeightConstraint;              //@synthesize appendageWrapperViewHeightConstraint=_appendageWrapperViewHeightConstraint - In the implementation block
@property (nonatomic,retain) UILabel * dateLabel;                                                    //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) ECAdListFlagView * flagView;                                            //@synthesize flagView=_flagView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * locationLabel;                                                //@synthesize locationLabel=_locationLabel - In the implementation block
@property (nonatomic,retain) ECAdListNoteView * noteView;                                            //@synthesize noteView=_noteView - In the implementation block
@property (nonatomic,retain) UILabel * priceLabel;                                                   //@synthesize priceLabel=_priceLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) ECWatchlistButton * watchlistButton;                                    //@synthesize watchlistButton=_watchlistButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * noteViewHeightConstraint;                          //@synthesize noteViewHeightConstraint=_noteViewHeightConstraint - In the implementation block
@property (nonatomic,readonly) ECAd * ad;                                                            //@synthesize ad=_ad - In the implementation block
@property (nonatomic,retain) UIView * appendageView;                                                 //@synthesize appendageView=_appendageView - In the implementation block
@property (nonatomic,readonly) unsigned long long cellType;                                          //@synthesize cellType=_cellType - In the implementation block
@property (nonatomic,readonly) id metadata;                                                          //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic,__weak) id<ECAdListCellDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showWatchlistButton;                                               //@synthesize showWatchlistButton=_showWatchlistButton - In the implementation block
@property (nonatomic,retain) UIColor * highlightBackgroundColor;                                     //@synthesize highlightBackgroundColor=_highlightBackgroundColor - In the implementation block
+(id)customAppearance;
-(void)_UIAppearance_setHighlightBackgroundColor:(id)arg1 ;
-(BOOL)showWatchlistButton;
-(void)setShowWatchlistButton:(BOOL)arg1 ;
-(void)setAppendageView:(UIView *)arg1 ;
-(void)setAd:(id)arg1 metadata:(id)arg2 cellType:(unsigned long long)arg3 ;
-(void)setImageForAd:(id)arg1 ;
-(void)setWatchlistButton:(ECWatchlistButton *)arg1 ;
-(void)setHighlightBackgroundColor:(UIColor *)arg1 ;
-(ECWatchlistButton *)watchlistButton;
-(id)labelForFeature:(id)arg1 ;
-(void)setIsDirty;
-(void)setUpPriceForAd:(id)arg1 ;
-(void)setUpWatchlistButton:(BOOL)arg1 ;
-(void)setUpAppearanceForCellType:(unsigned long long)arg1 ;
-(UIView *)appendageWrapperView;
-(NSLayoutConstraint *)appendageWrapperViewHeightConstraint;
-(ECAdListNoteView *)noteView;
-(ECAdListFlagView *)flagView;
-(NSLayoutConstraint *)noteViewHeightConstraint;
-(void)setUpNoteAppearance;
-(void)setUpFlagAppearance;
-(UIColor *)highlightBackgroundColor;
-(id)labelForCellType:(unsigned long long)arg1 ;
-(BOOL)ad:(id)arg1 hasTransformableImageForSize:(CGSize)arg2 ;
-(id)transformableImageURLStringForAd:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)shouldCropImageForAd:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)shouldMakeOpaqueBackgroundImageForAd:(id)arg1 size:(CGSize)arg2 ;
-(UIView *)appendageView;
-(void)setAppendageWrapperView:(UIView *)arg1 ;
-(void)setAppendageWrapperViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFlagView:(ECAdListFlagView *)arg1 ;
-(void)setNoteView:(ECAdListNoteView *)arg1 ;
-(void)setNoteViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDelegate:(id<ECAdListCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<ECAdListCellDelegate>)delegate;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)awakeFromNib;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)updateConstraintsIfNeeded;
-(void)setImageView:(UIImageView *)arg1 ;
-(UILabel *)dateLabel;
-(id)metadata;
-(ECAd *)ad;
-(unsigned long long)cellType;
-(void)setDateLabel:(UILabel *)arg1 ;
-(UILabel *)locationLabel;
-(void)setLocationLabel:(UILabel *)arg1 ;
-(UILabel *)priceLabel;
-(void)setPriceLabel:(UILabel *)arg1 ;
@end

