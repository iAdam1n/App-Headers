/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNItemsDataViewController.h>
#import <Twitter/T1MomentCapsuleCellHost.h>

@protocol T1MomentViewControllerDelegate;
@class NSArray, TFNTwitterAccount, NSString;

@interface T1MomentCapsuleListViewController : TFNItemsDataViewController <T1MomentCapsuleCellHost> {

	NSArray* _capsuleList;
	id<T1MomentViewControllerDelegate> _delegate;
	TFNTwitterAccount* _account;

}

@property (nonatomic,retain) NSArray * capsuleList;                                           //@synthesize capsuleList=_capsuleList - In the implementation block
@property (assign,nonatomic,__weak) id<T1MomentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * account;                                     //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)calculatedLayoutMetrics;
-(void)didTapFollowMomentCapsule:(id)arg1 ;
-(void)didTapMomentCapsule:(id)arg1 ;
-(void)setCapsuleList:(NSArray *)arg1 ;
-(NSArray *)capsuleList;
-(void)setDelegate:(id<T1MomentViewControllerDelegate>)arg1 ;
-(id<T1MomentViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(id)initWithAccount:(id)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end

