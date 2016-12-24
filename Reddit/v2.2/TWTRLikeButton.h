/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <UIKit/UIButton.h>
#import <Reddit/TWTRScribableView.h>

@class UIViewController, UIImageView, TWTRTweet, TWTRAPIClient, NSString;

@interface TWTRLikeButton : UIButton <TWTRScribableView> {

	BOOL _isLiked;
	unsigned long long _scribeViewName;
	UIViewController* _presenterViewController;
	UIImageView* _localImageView;
	TWTRTweet* _tweet;
	TWTRAPIClient* _apiClient;
	long long _likeButtonSize;

}

@property (assign,nonatomic) BOOL isLiked;                                                   //@synthesize isLiked=_isLiked - In the implementation block
@property (nonatomic,retain) UIImageView * localImageView;                                   //@synthesize localImageView=_localImageView - In the implementation block
@property (nonatomic,retain) TWTRTweet * tweet;                                              //@synthesize tweet=_tweet - In the implementation block
@property (nonatomic,retain) TWTRAPIClient * apiClient;                                      //@synthesize apiClient=_apiClient - In the implementation block
@property (assign,nonatomic) long long likeButtonSize;                                       //@synthesize likeButtonSize=_likeButtonSize - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presenterViewController;              //@synthesize presenterViewController=_presenterViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long scribeViewName;                              //@synthesize scribeViewName=_scribeViewName - In the implementation block
-(void)configureWithTweet:(id)arg1 ;
-(TWTRTweet *)tweet;
-(void)setTweet:(TWTRTweet *)arg1 ;
-(id)initWithLikeButtonSize:(long long)arg1 ;
-(void)likeButtonCommonInit;
-(id)initWithFrame:(CGRect)arg1 likeButtonSize:(long long)arg2 ;
-(void)createImageViewIfNil;
-(void)updateImageToLiked:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)likeTapped;
-(void)updateToLikedStateWithAnimation;
-(void)updateToLikedState;
-(void)updateToUnlikedState;
-(UIImageView *)localImageView;
-(BOOL)isAlreadyLikedError:(id)arg1 ;
-(unsigned long long)scribeViewName;
-(void)APIClientFromTwitterWithCompletion:(/*^block*/id)arg1 ;
-(TWTRAPIClient *)apiClient;
-(long long)likeButtonSize;
-(void)setLocalImageView:(UIImageView *)arg1 ;
-(void)setIsLiked:(BOOL)arg1 ;
-(void)setApiClient:(TWTRAPIClient *)arg1 ;
-(void)setLikeButtonSize:(long long)arg1 ;
-(BOOL)isLiked;
-(void)setScribeViewName:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)imageView;
-(void)setPresenterViewController:(UIViewController *)arg1 ;
-(UIViewController *)presenterViewController;
@end
