/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIControl.h>

@class UIColor, UICollectionView, UIImageView;

@interface ECIpadRefreshControl : UIControl {

	BOOL _animating;
	UIColor* _tintColor;
	UICollectionView* _collectionView;
	UIImageView* _imageView;

}

@property (getter=isRefreshing,nonatomic,readonly) BOOL refreshing; 
@property (nonatomic,retain) UIColor * tintColor;                                   //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) BOOL animating;                                        //@synthesize animating=_animating - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                               //@synthesize imageView=_imageView - In the implementation block
-(void)changeStateToRefreshing;
-(void)changeStateToPulling;
-(void)changeStateToReadyToRefresh;
-(void)dealloc;
-(id)init;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)beginRefreshing;
-(void)endRefreshing;
-(UICollectionView *)collectionView;
-(UIImageView *)imageView;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)animating;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(BOOL)isRefreshing;
@end

