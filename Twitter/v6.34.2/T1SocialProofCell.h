/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTableViewCell.h>
#import <Twitter/TFNLayoutMetricsEnvironment.h>

@class TFNHighlightControl, TFNTwitterUser, TFNTwitterStatus, NSString;

@interface T1SocialProofCell : TFNTableViewCell <TFNLayoutMetricsEnvironment> {

	TFNHighlightControl* _highlightControl;
	TFNTwitterUser* _primarySocialProofUser;
	TFNTwitterStatus* _status;
	long long _avatarSize;
	/*^block*/id _socialProofTapActionBlock;

}

@property (nonatomic,retain) TFNTwitterStatus * status;               //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long avatarSize;                    //@synthesize avatarSize=_avatarSize - In the implementation block
@property (nonatomic,copy) NSString * socialText; 
@property (nonatomic,copy) id socialProofTapActionBlock;              //@synthesize socialProofTapActionBlock=_socialProofTapActionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForStatus:(id)arg1 socialText:(id)arg2 layoutMetrics:(id)arg3 ;
+(double)heightForStatus:(id)arg1 socialText:(id)arg2 tableWidth:(double)arg3 contentPadding:(UIEdgeInsets)arg4 ;
+(void)configureTextLabel:(id)arg1 ;
-(void)setSocialText:(NSString *)arg1 ;
-(long long)avatarSize;
-(void)setAvatarSize:(long long)arg1 ;
-(void)setSocialProofTapActionBlock:(id)arg1 ;
-(void)_legacyLayoutSubviews;
-(void)_tapAction;
-(BOOL)_showHighlightControl;
-(NSString *)socialText;
-(id)socialProofTapActionBlock;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)cleanup;
-(TFNTwitterStatus *)status;
-(void)setStatus:(TFNTwitterStatus *)arg1 ;
@end
