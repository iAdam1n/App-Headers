/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTableViewCell.h>

@class TFNTwitterAccount, TFNTwitterScribeContext, T1UserRailView, NSArray;

@interface T1UserRailCell : TFNTableViewCell {

	/*^block*/id _avatarTapBlock;
	/*^block*/id _avatarLongPressBlock;
	TFNTwitterAccount* _account;
	TFNTwitterScribeContext* _scribeContext;
	T1UserRailView* _railView;

}

@property (nonatomic,retain) NSArray * userRepresentations; 
@property (nonatomic,copy) id avatarTapBlock;                                      //@synthesize avatarTapBlock=_avatarTapBlock - In the implementation block
@property (nonatomic,copy) id avatarLongPressBlock;                                //@synthesize avatarLongPressBlock=_avatarLongPressBlock - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) TFNTwitterScribeContext * scribeContext;              //@synthesize scribeContext=_scribeContext - In the implementation block
@property (nonatomic,retain) T1UserRailView * railView;                            //@synthesize railView=_railView - In the implementation block
+(UIEdgeInsets)legacyDefaultContentPadding;
+(double)heightForUserRepresentations:(id)arg1 layoutMetrics:(id)arg2 ;
+(double)heightForUserRepresentations:(id)arg1 tableWidth:(double)arg2 contentInsets:(UIEdgeInsets)arg3 ;
-(id)avatarLongPressBlock;
-(id)avatarTapBlock;
-(TFNTwitterScribeContext *)scribeContext;
-(void)setUserRepresentations:(NSArray *)arg1 ;
-(NSArray *)userRepresentations;
-(void)setAvatarTapBlock:(id)arg1 ;
-(void)setAvatarLongPressBlock:(id)arg1 ;
-(void)setScribeContext:(TFNTwitterScribeContext *)arg1 ;
-(T1UserRailView *)railView;
-(void)setRailView:(T1UserRailView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)cleanup;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end
