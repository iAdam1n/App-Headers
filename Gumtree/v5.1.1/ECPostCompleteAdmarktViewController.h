/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECBaseViewController.h>

@class UILabel, ECThemedButton, UIButton, NSLayoutConstraint;

@interface ECPostCompleteAdmarktViewController : ECBaseViewController {

	BOOL _isNewAd;
	/*^block*/id _completionHandler;
	/*^block*/id _trackingHandlerHandler;
	unsigned long long _postState;
	UILabel* _postCompleteTitle;
	UILabel* _postCompleteDetail;
	UILabel* _admarktTeaser;
	UILabel* _admarktDescription;
	ECThemedButton* _learnMoreButton;
	UIButton* _registerButton;
	NSLayoutConstraint* _registerButtonHeightConstraint;

}

@property (assign,nonatomic) unsigned long long postState;                                     //@synthesize postState=_postState - In the implementation block
@property (assign,nonatomic) BOOL isNewAd;                                                     //@synthesize isNewAd=_isNewAd - In the implementation block
@property (nonatomic,retain) UILabel * postCompleteTitle;                                      //@synthesize postCompleteTitle=_postCompleteTitle - In the implementation block
@property (nonatomic,retain) UILabel * postCompleteDetail;                                     //@synthesize postCompleteDetail=_postCompleteDetail - In the implementation block
@property (nonatomic,retain) UILabel * admarktTeaser;                                          //@synthesize admarktTeaser=_admarktTeaser - In the implementation block
@property (nonatomic,retain) UILabel * admarktDescription;                                     //@synthesize admarktDescription=_admarktDescription - In the implementation block
@property (nonatomic,retain) ECThemedButton * learnMoreButton;                                 //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (nonatomic,retain) UIButton * registerButton;                                        //@synthesize registerButton=_registerButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * registerButtonHeightConstraint;              //@synthesize registerButtonHeightConstraint=_registerButtonHeightConstraint - In the implementation block
@property (nonatomic,copy) id completionHandler;                                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id trackingHandlerHandler;                                          //@synthesize trackingHandlerHandler=_trackingHandlerHandler - In the implementation block
-(void)trackPageView;
-(void)setAdmarktTeaser:(UILabel *)arg1 ;
-(id)initWithPostState:(unsigned long long)arg1 isNewAd:(BOOL)arg2 ;
-(void)setTrackingHandlerHandler:(id)arg1 ;
-(void)setIsNewAd:(BOOL)arg1 ;
-(BOOL)isNewAd;
-(void)handleApptentive;
-(id)trackingHandlerHandler;
-(UILabel *)admarktTeaser;
-(void)updateTracking;
-(UILabel *)admarktDescription;
-(UILabel *)postCompleteTitle;
-(UILabel *)postCompleteDetail;
-(void)clickOnDone:(id)arg1 ;
-(UIButton *)registerButton;
-(NSLayoutConstraint *)registerButtonHeightConstraint;
-(void)openLearnMoreLink;
-(void)openRegisterLink;
-(void)clickOnLearnMore:(id)arg1 ;
-(void)clickOnRegister:(id)arg1 ;
-(unsigned long long)postState;
-(void)setPostState:(unsigned long long)arg1 ;
-(void)setPostCompleteTitle:(UILabel *)arg1 ;
-(void)setPostCompleteDetail:(UILabel *)arg1 ;
-(void)setAdmarktDescription:(UILabel *)arg1 ;
-(void)setRegisterButton:(UIButton *)arg1 ;
-(void)setRegisterButtonHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateButtons;
-(void)updateLabels;
-(ECThemedButton *)learnMoreButton;
-(void)setLearnMoreButton:(ECThemedButton *)arg1 ;
@end

