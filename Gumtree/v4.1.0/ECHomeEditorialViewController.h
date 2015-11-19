/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:18 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UICollectionViewController.h>
#import <Gumtree/ECAdvertisingProviderDelegate.h>

@class NSString, UICollectionViewFlowLayout, NSArray, NSTimer, ECAdvertisingProvider;

@interface ECHomeEditorialViewController : UICollectionViewController <ECAdvertisingProviderDelegate> {

	BOOL _adLoading;
	double _timerDelay;
	unsigned long long _maxNumberOfItems;
	NSString* _defaultLink;
	UICollectionViewFlowLayout* _layout;
	NSArray* _dataArray;
	NSTimer* _timer;
	ECAdvertisingProvider* _adProvider;
	long long _tryCount;

}

@property (assign,nonatomic) double timerDelay;                                       //@synthesize timerDelay=_timerDelay - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfItems;                     //@synthesize maxNumberOfItems=_maxNumberOfItems - In the implementation block
@property (nonatomic,retain) NSString * defaultLink;                                  //@synthesize defaultLink=_defaultLink - In the implementation block
@property (assign,nonatomic,__weak) UICollectionViewFlowLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) NSArray * dataArray;                                     //@synthesize dataArray=_dataArray - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                         //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) ECAdvertisingProvider * adProvider;                      //@synthesize adProvider=_adProvider - In the implementation block
@property (assign,nonatomic) BOOL adLoading;                                          //@synthesize adLoading=_adLoading - In the implementation block
@property (assign,nonatomic) long long tryCount;                                      //@synthesize tryCount=_tryCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)maxNumberOfItems;
-(void)setMaxNumberOfItems:(unsigned long long)arg1 ;
-(void)adProvider:(id)arg1 didReceiveAd:(id)arg2 forBannerType:(unsigned long long)arg3 atPosition:(unsigned long long)arg4 withError:(id)arg5 ;
-(double)timerDelay;
-(void)setTimerDelay:(double)arg1 ;
-(void)setDefaultLink:(NSString *)arg1 ;
-(void)setDataArray:(NSArray *)arg1 ;
-(void)defaultDeepLinkAction:(id)arg1 ;
-(void)loadNextAdIfNeeded;
-(void)startAutocrollTimer;
-(void)stopAutocrollTimer;
-(BOOL)adLoading;
-(void)setAdLoading:(BOOL)arg1 ;
-(ECAdvertisingProvider *)adProvider;
-(id)findDFPBannerView:(id)arg1 ;
-(void)animatedChange;
-(NSString *)defaultLink;
-(void)setAdProvider:(ECAdvertisingProvider *)arg1 ;
-(NSArray *)dataArray;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(UICollectionViewFlowLayout *)layout;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(long long)tryCount;
-(void)setTryCount:(long long)arg1 ;
@end
