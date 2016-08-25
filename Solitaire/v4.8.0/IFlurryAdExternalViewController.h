/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController;


@protocol IFlurryAdExternalViewController <NSObject>
@property (nonatomic,retain) UIViewController * parentVC; 
@property (assign,nonatomic) BOOL presentOnLoadCompletion; 
@property (nonatomic,retain) id<IFlurryAd> ad; 
@required
-(void)setAd:(id)arg1;
-(void)removeWindowWithCompletionHandler:(/*^block*/id)arg1;
-(void)loadAd:(id)arg1 withRequest:(id)arg2;
-(UIViewController *)parentVC;
-(BOOL)presentOnLoadCompletion;
-(id)initWithAd:(id)arg1 request:(id)arg2;
-(void)setParentVC:(id)arg1;
-(void)setPresentOnLoadCompletion:(BOOL)arg1;
-(id<IFlurryAd>)ad;

@end

