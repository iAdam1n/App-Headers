/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUIViewController.h>

@protocol SearchTipsViewControllerDelegate;
@class UIView;

@interface SearchTipsViewController : EUIViewController {

	BOOL _useFooterButtonTitle;
	UIView* searchTipsView;
	id<SearchTipsViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) UIView * searchTipsView; 
@property (assign,nonatomic,__weak) id<SearchTipsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL useFooterButtonTitle;                                         //@synthesize useFooterButtonTitle=_useFooterButtonTitle - In the implementation block
-(void)closeButtonAction:(id)arg1 ;
-(void)setUseFooterButtonTitle:(BOOL)arg1 ;
-(void)setupSearchTipsView;
-(UIView *)searchTipsView;
-(BOOL)useFooterButtonTitle;
-(void)setSearchTipsView:(UIView *)arg1 ;
-(void)setDelegate:(id<SearchTipsViewControllerDelegate>)arg1 ;
-(id<SearchTipsViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end
