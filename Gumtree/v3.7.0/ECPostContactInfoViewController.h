/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECPostBaseViewController.h>

@class ECActivityIndicatorView;

@interface ECPostContactInfoViewController : ECPostBaseViewController {

	BOOL _loading;
	ECActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) ECActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) BOOL loading;                                             //@synthesize loading=_loading - In the implementation block
-(id)initWithDataProvider:(id)arg1 ;
-(void)submit:(id)arg1 ;
-(void)showDoneScreenWithFeaturesResult:(unsigned long long)arg1 error:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)supportsFeaturePurchaseForAd:(id)arg1 adStateCase:(unsigned long long*)arg2 ;
-(void)showFeaturesScreen;
-(void)showDoneScreenForAdStateCase:(unsigned long long)arg1 ;
-(void)reloadData;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setActivityIndicator:(ECActivityIndicatorView *)arg1 ;
-(ECActivityIndicatorView *)activityIndicator;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)loading;
@end

