/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class TFNTwitterUser, UIImage;


@protocol T1PresentedAccountSwitchTransition <NSObject>
@property (nonatomic,retain) TFNTwitterUser * transitioningUser; 
@property (nonatomic,retain) UIImage * transitioningProfileBannerImage; 
@property (assign,nonatomic) unsigned long long transitioningPages; 
@required
-(TFNTwitterUser *)transitioningUser;
-(void)setTransitioningUser:(id)arg1;
-(UIImage *)transitioningProfileBannerImage;
-(void)setTransitioningProfileBannerImage:(id)arg1;
-(unsigned long long)transitioningPages;
-(void)setTransitioningPages:(unsigned long long)arg1;

@end

