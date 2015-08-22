/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class TFNTwitterAccount;

@interface T1AdaptiveMediaParameters : NSObject {

	TFNTwitterAccount* _account;

}

@property (nonatomic,retain) TFNTwitterAccount * account;                             //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) BOOL showMediaFirst; 
@property (nonatomic,readonly) BOOL useAdaptiveMediaGrid; 
@property (nonatomic,readonly) BOOL useAuthorMultiLineLayout; 
@property (nonatomic,readonly) BOOL useFullSizeMedia; 
@property (nonatomic,readonly) double gutterWidth; 
@property (nonatomic,readonly) double mediaCornerRadius; 
@property (nonatomic,readonly) long long avatarSize; 
@property (nonatomic,readonly) NSRange singlePhotoMaxAspectRatio; 
@property (nonatomic,readonly) NSRange videoMaxAspectRatio; 
@property (nonatomic,readonly) BOOL useFullBleedMediaInTweetDetails; 
@property (nonatomic,readonly) long long userCellStyleInTweetDetails; 
@property (nonatomic,readonly) unsigned long long inlineActionStyle; 
@property (nonatomic,readonly) BOOL isFavoriteActionAnimationEnabled; 
@property (nonatomic,readonly) BOOL isInlineActionsTappingAreaIncreased; 
+(id)parametersForAccount:(id)arg1 ;
+(double)singlePhotoBorderOpacity;
+(double)multiPhotoBorderOpacity;
+(CGSize)inlineActionMinimumTappingSize;
-(long long)avatarSize;
-(NSRange)videoMaxAspectRatio;
-(NSRange)singlePhotoMaxAspectRatio;
-(BOOL)useAdaptiveMediaGrid;
-(unsigned long long)inlineActionStyle;
-(BOOL)isFavoriteActionAnimationEnabled;
-(BOOL)useAuthorMultiLineLayout;
-(long long)userCellStyleInTweetDetails;
-(BOOL)showMediaFirst;
-(BOOL)useFullBleedMediaInTweetDetails;
-(double)mediaCornerRadius;
-(BOOL)_isInAdaptiveMediaExperimentExcludingVideoOnlyBucket;
-(BOOL)useFullSizeMedia;
-(BOOL)isInlineActionsTappingAreaIncreased;
-(double)gutterWidth;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end
