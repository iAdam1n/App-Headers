/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:57 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Tweetbot/Tweetbot-Structs.h>
@class PTHTweetbotStatus, PTHTweetbotEntityTextFontAppearance;

@interface PTHTweetbotStatusViewLayout : NSObject {

	PTHTweetbotStatus* _status;
	double _width;
	double _height;
	CGRect _profileFrame;
	CGRect _profileViolatorFrame;
	CGRect _titleFrame;
	CGRect _bodyFrame;
	CGRect _imageFrame;
	CGRect _retweetFrame;
	CGRect _quoteFrame;
	CGRect _topSeparatorFrame;
	CGRect _bottomSeparatorFrame;
	PTHTweetbotEntityTextFontAppearance* _fontAppearance;
	long long _imageType;

}

@property (nonatomic,__weak,readonly) PTHTweetbotStatus * status;                                 //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) PTHTweetbotEntityTextFontAppearance * fontAppearance;              //@synthesize fontAppearance=_fontAppearance - In the implementation block
@property (nonatomic,readonly) double width;                                                      //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) long long imageType;                                               //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,readonly) double height;                                                     //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) CGRect profileFrame;                                               //@synthesize profileFrame=_profileFrame - In the implementation block
@property (nonatomic,readonly) CGRect profileViolatorFrame;                                       //@synthesize profileViolatorFrame=_profileViolatorFrame - In the implementation block
@property (nonatomic,readonly) CGRect titleFrame;                                                 //@synthesize titleFrame=_titleFrame - In the implementation block
@property (nonatomic,readonly) CGRect bodyFrame;                                                  //@synthesize bodyFrame=_bodyFrame - In the implementation block
@property (nonatomic,readonly) CGRect imageFrame;                                                 //@synthesize imageFrame=_imageFrame - In the implementation block
@property (nonatomic,readonly) CGRect retweetFrame;                                               //@synthesize retweetFrame=_retweetFrame - In the implementation block
@property (nonatomic,readonly) CGRect quoteFrame;                                                 //@synthesize quoteFrame=_quoteFrame - In the implementation block
@property (nonatomic,readonly) CGRect topSeparatorFrame;                                          //@synthesize topSeparatorFrame=_topSeparatorFrame - In the implementation block
@property (nonatomic,readonly) CGRect bottomSeparatorFrame;                                       //@synthesize bottomSeparatorFrame=_bottomSeparatorFrame - In the implementation block
@property (nonatomic,readonly) CGSize smallMediaSize; 
@property (nonatomic,readonly) double quoteHeight; 
+(id)bodyTextForStatus:(id)arg1 ;
+(BOOL)showProfile;
+(BOOL)showTitle;
+(BOOL)showRetweet;
+(id)layoutForStatus:(id)arg1 withWidth:(double)arg2 ;
+(BOOL)showQuote;
+(id)layoutForStatus:(id)arg1 fontAppearance:(id)arg2 imageType:(long long)arg3 withWidth:(double)arg4 ;
-(PTHTweetbotEntityTextFontAppearance *)fontAppearance;
-(CGSize)smallMediaSize;
-(double)heightForBodyWithWidth:(double)arg1 ;
-(double)quoteHeight;
-(CGRect)bottomSeparatorFrame;
-(CGRect)profileFrame;
-(CGRect)titleFrame;
-(CGRect)bodyFrame;
-(CGRect)retweetFrame;
-(CGRect)quoteFrame;
-(CGRect)topSeparatorFrame;
-(id)initWithStatus:(id)arg1 fontAppearance:(id)arg2 imageType:(long long)arg3 width:(double)arg4 ;
-(CGRect)profileViolatorFrame;
-(CGRect)imageFrame;
-(BOOL)isEqual:(id)arg1 ;
-(void)reset;
-(double)width;
-(double)height;
-(PTHTweetbotStatus *)status;
-(long long)imageType;
@end

