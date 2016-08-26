/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <eBay/EBUInfiniteCollectionViewCell.h>

@protocol EBUPhotoCollectionViewCellDelegate;
@class UIScrollView, EUIImageView, UITapGestureRecognizer, UIColor, NSLayoutConstraint, NSString;

@interface EBUPhotoCollectionViewCell : UICollectionViewCell <UIScrollViewDelegate, EBUInfiniteCollectionViewCell> {

	BOOL _zoomEnabled;
	BOOL _shouldAnimateDuringApplyLayoutAttributes;
	long long _infiniteCellIndex;
	UIScrollView* _scrollView;
	EUIImageView* _imageView;
	UITapGestureRecognizer* _doubleTapRecognizer;
	UIColor* _borderSelectionColor;
	id<EBUPhotoCollectionViewCellDelegate> _delegate;
	double _defaultMaxZoomScale;
	double _defaultMinZoomScale;
	NSLayoutConstraint* _bottomCellContentConstraint;

}

@property (assign,nonatomic) double defaultMaxZoomScale;                                          //@synthesize defaultMaxZoomScale=_defaultMaxZoomScale - In the implementation block
@property (assign,nonatomic) double defaultMinZoomScale;                                          //@synthesize defaultMinZoomScale=_defaultMinZoomScale - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomCellContentConstraint;                    //@synthesize bottomCellContentConstraint=_bottomCellContentConstraint - In the implementation block
@property (assign,nonatomic) long long infiniteCellIndex;                                         //@synthesize infiniteCellIndex=_infiniteCellIndex - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                           //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) EUIImageView * imageView;                                            //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL zoomEnabled;                                                    //@synthesize zoomEnabled=_zoomEnabled - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * doubleTapRecognizer;                        //@synthesize doubleTapRecognizer=_doubleTapRecognizer - In the implementation block
@property (nonatomic,retain) UIColor * borderSelectionColor;                                      //@synthesize borderSelectionColor=_borderSelectionColor - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateDuringApplyLayoutAttributes;                       //@synthesize shouldAnimateDuringApplyLayoutAttributes=_shouldAnimateDuringApplyLayoutAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<EBUPhotoCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBorderSelectionColor:(UIColor *)arg1 ;
-(void)setBottomInset:(double)arg1 animated:(BOOL)arg2 ;
-(void)setShouldAnimateDuringApplyLayoutAttributes:(BOOL)arg1 ;
-(long long)infiniteCellIndex;
-(void)setInfiniteCellIndex:(long long)arg1 ;
-(BOOL)zoomEnabled;
-(UIColor *)borderSelectionColor;
-(BOOL)shouldAnimateDuringApplyLayoutAttributes;
-(CGRect)zoomRectForScale:(float)arg1 withCenter:(CGPoint)arg2 ;
-(void)setZoomEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)defaultMaxZoomScale;
-(double)defaultMinZoomScale;
-(NSLayoutConstraint *)bottomCellContentConstraint;
-(void)setDefaultMaxZoomScale:(double)arg1 ;
-(void)setDefaultMinZoomScale:(double)arg1 ;
-(void)setBottomCellContentConstraint:(NSLayoutConstraint *)arg1 ;
-(id)matteBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<EBUPhotoCollectionViewCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(id<EBUPhotoCollectionViewCellDelegate>)delegate;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(EUIImageView *)imageView;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setImageView:(EUIImageView *)arg1 ;
-(void)handleDoubleTap:(id)arg1 ;
-(UITapGestureRecognizer *)doubleTapRecognizer;
-(void)setDoubleTapRecognizer:(UITapGestureRecognizer *)arg1 ;
@end
