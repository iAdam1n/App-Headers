/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/SRTopLevelFragmentViewControllerBase.h>

@class SRVerticalStackFragmentController, SRCollectionFragmentController;

@interface SRSingleFragmentViewController : SRTopLevelFragmentViewControllerBase {

	SRVerticalStackFragmentController* _containerFragment;
	SRCollectionFragmentController* _fragment;
	BOOL _scrollsToTop;

}

@property (nonatomic,retain) SRCollectionFragmentController * fragment;              //@synthesize fragment=_fragment - In the implementation block
@property (assign,nonatomic) BOOL scrollsToTop;                                      //@synthesize scrollsToTop=_scrollsToTop - In the implementation block
-(id)initWithFragment:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)scrollsToTop;
-(void)setScrollsToTop:(BOOL)arg1 ;
-(void)viewDidLoad;
-(SRCollectionFragmentController *)fragment;
-(void)setFragment:(SRCollectionFragmentController *)arg1 ;
@end
