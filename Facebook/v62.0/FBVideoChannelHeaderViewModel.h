/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBVideoChannelHeaderViewModel : FBValueObject <NSCopying> {

	BOOL _shouldShowLiveLabel;
	BOOL _isVerified;
	long long _liveVideoCount;
	NSString* _liveLabelText;
	NSString* _profilePictureUri;
	NSString* _videoChannelTitle;
	NSString* _videoChannelSubtitle;
	unsigned long long _videoChannelHeaderStyle;

}

@property (nonatomic,readonly) BOOL shouldShowLiveLabel;                                //@synthesize shouldShowLiveLabel=_shouldShowLiveLabel - In the implementation block
@property (nonatomic,readonly) long long liveVideoCount;                                //@synthesize liveVideoCount=_liveVideoCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * liveLabelText;                           //@synthesize liveLabelText=_liveLabelText - In the implementation block
@property (nonatomic,copy,readonly) NSString * profilePictureUri;                       //@synthesize profilePictureUri=_profilePictureUri - In the implementation block
@property (nonatomic,readonly) BOOL isVerified;                                         //@synthesize isVerified=_isVerified - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoChannelTitle;                       //@synthesize videoChannelTitle=_videoChannelTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoChannelSubtitle;                    //@synthesize videoChannelSubtitle=_videoChannelSubtitle - In the implementation block
@property (nonatomic,readonly) unsigned long long videoChannelHeaderStyle;              //@synthesize videoChannelHeaderStyle=_videoChannelHeaderStyle - In the implementation block
-(NSString *)profilePictureUri;
-(NSString *)videoChannelSubtitle;
-(NSString *)videoChannelTitle;
-(unsigned long long)videoChannelHeaderStyle;
-(BOOL)shouldShowLiveLabel;
-(NSString *)liveLabelText;
-(id)initWithShouldShowLiveLabel:(BOOL)arg1 liveVideoCount:(long long)arg2 liveLabelText:(id)arg3 profilePictureUri:(id)arg4 isVerified:(BOOL)arg5 videoChannelTitle:(id)arg6 videoChannelSubtitle:(id)arg7 videoChannelHeaderStyle:(unsigned long long)arg8 ;
-(long long)liveVideoCount;
-(BOOL)isVerified;
@end
