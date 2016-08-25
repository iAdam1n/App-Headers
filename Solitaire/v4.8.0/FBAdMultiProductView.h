/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIView.h>
#import <SolitaireFree/FBAdMultiProductCellDelegate.h>
#import <SolitaireFree/FBAdScrollViewDelegate.h>

@protocol FBAdMultiProductViewDelegate;
@class NSArray, FBAdScrollView, NSString;

@interface FBAdMultiProductView : UIView <FBAdMultiProductCellDelegate, FBAdScrollViewDelegate> {

	id<FBAdMultiProductViewDelegate> _delegate;
	NSArray* _multiProductAds;
	FBAdScrollView* _scrollView;
	/*^block*/id _impressionBlock;
	/*^block*/id _clickBlock;

}

@property (assign,nonatomic,__weak) FBAdScrollView * scrollView;                            //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,copy) id impressionBlock;                                              //@synthesize impressionBlock=_impressionBlock - In the implementation block
@property (nonatomic,copy) id clickBlock;                                                   //@synthesize clickBlock=_clickBlock - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdMultiProductViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSArray * multiProductAds;                              //@synthesize multiProductAds=_multiProductAds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)multiProductCellVisible:(id)arg1 ;
-(void)multiProductCellClicked:(id)arg1 ;
-(void)updateView:(BOOL)arg1 ;
-(id)impressionBlock;
-(NSArray *)multiProductAds;
-(id)clickBlock;
-(void)setMultiProductAds:(NSArray *)arg1 ;
-(void)setImpressionBlock:(id)arg1 ;
-(void)setClickBlock:(id)arg1 ;
-(void)setMultiProductAds:(id)arg1 withImpressionHandler:(/*^block*/id)arg2 withClickHandler:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<FBAdMultiProductViewDelegate>)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id<FBAdMultiProductViewDelegate>)delegate;
-(void)setScrollView:(FBAdScrollView *)arg1 ;
-(FBAdScrollView *)scrollView;
@end

