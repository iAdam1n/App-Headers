/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECBaseViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UICollectionView, UIPageControl, ECRoundRectButton, ECIphoneTutorialSkipButton, NSString;

@interface ECiPhoneTutorialViewController : ECBaseViewController <UIScrollViewDelegate> {

	UICollectionView* _collectionview;
	UIPageControl* _pageControl;
	ECRoundRectButton* _nextAndDoneButton;
	ECIphoneTutorialSkipButton* _skipButton;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionview;                    //@synthesize collectionview=_collectionview - In the implementation block
@property (assign,nonatomic,__weak) UIPageControl * pageControl;                          //@synthesize pageControl=_pageControl - In the implementation block
@property (assign,nonatomic,__weak) ECRoundRectButton * nextAndDoneButton;                //@synthesize nextAndDoneButton=_nextAndDoneButton - In the implementation block
@property (assign,nonatomic,__weak) ECIphoneTutorialSkipButton * skipButton;              //@synthesize skipButton=_skipButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateButtons;
-(UICollectionView *)collectionview;
-(void)incrementPageControl:(long long)arg1 ;
-(ECRoundRectButton *)nextAndDoneButton;
-(void)setCollectionview:(UICollectionView *)arg1 ;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(void)setNextAndDoneButton:(ECRoundRectButton *)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)setPage:(id)arg1 ;
-(UIPageControl *)pageControl;
-(void)setSkipButton:(ECIphoneTutorialSkipButton *)arg1 ;
-(ECIphoneTutorialSkipButton *)skipButton;
@end

