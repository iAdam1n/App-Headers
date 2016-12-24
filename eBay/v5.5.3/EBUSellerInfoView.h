/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUDynamicHeightView.h>

@class UIButton, EPHUserPhotoView, UILabel, UIView, NSMutableArray;

@interface EBUSellerInfoView : EBUDynamicHeightView {

	BOOL _forceFixedHeight;
	BOOL _usesSellerNameButton;
	BOOL _showsFollowButton;
	UIButton* _sellerNameButton;
	EPHUserPhotoView* _sellerPhotoView;
	UILabel* _sellerInfoLabel;
	UIButton* _followButton;
	UIView* _sellerInfoContainer;
	double _minimumFollowButtonHeight;
	NSMutableArray* _sellerInfoContainerLocalConstraints;
	NSMutableArray* _localConstraints;

}

@property (assign,nonatomic,__weak) UIView * sellerInfoContainer;                               //@synthesize sellerInfoContainer=_sellerInfoContainer - In the implementation block
@property (assign,nonatomic) double minimumFollowButtonHeight;                                  //@synthesize minimumFollowButtonHeight=_minimumFollowButtonHeight - In the implementation block
@property (nonatomic,retain) NSMutableArray * sellerInfoContainerLocalConstraints;              //@synthesize sellerInfoContainerLocalConstraints=_sellerInfoContainerLocalConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * localConstraints;                                 //@synthesize localConstraints=_localConstraints - In the implementation block
@property (nonatomic,retain) UIButton * sellerNameButton;                                       //@synthesize sellerNameButton=_sellerNameButton - In the implementation block
@property (assign,nonatomic,__weak) EPHUserPhotoView * sellerPhotoView;                         //@synthesize sellerPhotoView=_sellerPhotoView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * sellerInfoLabel;                                  //@synthesize sellerInfoLabel=_sellerInfoLabel - In the implementation block
@property (nonatomic,retain) UIButton * followButton;                                           //@synthesize followButton=_followButton - In the implementation block
@property (assign,nonatomic) BOOL forceFixedHeight;                                             //@synthesize forceFixedHeight=_forceFixedHeight - In the implementation block
@property (assign,nonatomic) BOOL usesSellerNameButton;                                         //@synthesize usesSellerNameButton=_usesSellerNameButton - In the implementation block
@property (assign,nonatomic) BOOL showsFollowButton;                                            //@synthesize showsFollowButton=_showsFollowButton - In the implementation block
-(void)setTapAction:(SEL)arg1 target:(id)arg2 ;
-(UIButton *)followButton;
-(void)setFollowButton:(UIButton *)arg1 ;
-(void)setTapAction:(SEL)arg1 target:(id)arg2 includeFollowButton:(BOOL)arg3 ;
-(void)updateWithEbayUser:(id)arg1 sellerIDAndFeedbackCount:(id)arg2 feedbackPercent:(id)arg3 following:(BOOL)arg4 ;
-(void)setUsesSellerNameButton:(BOOL)arg1 ;
-(void)setShowsFollowButton:(BOOL)arg1 ;
-(void)setForceFixedHeight:(BOOL)arg1 ;
-(UIView *)sellerInfoContainer;
-(NSMutableArray *)sellerInfoContainerLocalConstraints;
-(BOOL)forceFixedHeight;
-(BOOL)usesSellerNameButton;
-(BOOL)showsFollowButton;
-(EPHUserPhotoView *)sellerPhotoView;
-(UIButton *)sellerNameButton;
-(id)attributesForSellerIDAndFeedbackCount;
-(id)attributesForFeedbackPercent;
-(id)attributesForFollowing;
-(void)setMinimumFollowButtonHeight:(double)arg1 ;
-(UILabel *)sellerInfoLabel;
-(void)setSellerNameButton:(UIButton *)arg1 ;
-(void)setSellerPhotoView:(EPHUserPhotoView *)arg1 ;
-(void)setSellerInfoLabel:(UILabel *)arg1 ;
-(void)setSellerInfoContainer:(UIView *)arg1 ;
-(double)minimumFollowButtonHeight;
-(void)setSellerInfoContainerLocalConstraints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)localConstraints;
-(void)setLocalConstraints:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(double)heightForWidth:(double)arg1 ;
@end
