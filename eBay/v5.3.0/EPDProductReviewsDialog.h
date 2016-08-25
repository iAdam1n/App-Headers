/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/ComplexContainerViewController.h>

@class UIView, EBUProductReviewsTableViewController;

@interface EPDProductReviewsDialog : ComplexContainerViewController {

	UIView* _container_reviews;
	EBUProductReviewsTableViewController* _reviewsController;
	CGSize _landscapeSize;

}

@property (assign,nonatomic,__weak) UIView * container_reviews;                                     //@synthesize container_reviews=_container_reviews - In the implementation block
@property (nonatomic,retain) EBUProductReviewsTableViewController * reviewsController;              //@synthesize reviewsController=_reviewsController - In the implementation block
@property (assign,nonatomic) CGSize landscapeSize;                                                  //@synthesize landscapeSize=_landscapeSize - In the implementation block
-(id)initWithDataManager:(id)arg1 item:(id)arg2 ;
-(UIView *)container_reviews;
-(void)setContainer_reviews:(UIView *)arg1 ;
-(EBUProductReviewsTableViewController *)reviewsController;
-(void)setReviewsController:(EBUProductReviewsTableViewController *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)setupForOrientation:(long long)arg1 ;
-(CGSize)landscapeSize;
-(void)setLandscapeSize:(CGSize)arg1 ;
@end

