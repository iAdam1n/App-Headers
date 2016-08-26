/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Tweetbot/Tweetbot-Structs.h>
@class NSString, NSURL;

@interface PTHTweetbotCard : NSObject {

	long long _type;
	NSString* _creatorScreenName;
	NSString* _title;
	NSString* _summary;
	NSURL* _imageURL;
	NSURL* _playerURL;
	NSURL* _playerStreamURL;
	CGSize _imageSize;
	CGSize _playerSize;

}

@property (assign,nonatomic) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * creatorScreenName;              //@synthesize creatorScreenName=_creatorScreenName - In the implementation block
@property (nonatomic,retain) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * summary;                        //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                          //@synthesize imageURL=_imageURL - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                          //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) NSURL * playerURL;                         //@synthesize playerURL=_playerURL - In the implementation block
@property (nonatomic,retain) NSURL * playerStreamURL;                   //@synthesize playerStreamURL=_playerStreamURL - In the implementation block
@property (assign,nonatomic) CGSize playerSize;                         //@synthesize playerSize=_playerSize - In the implementation block
+(void)createFromURL:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)setCreatorScreenName:(NSString *)arg1 ;
-(void)setPlayerURL:(NSURL *)arg1 ;
-(void)setPlayerStreamURL:(NSURL *)arg1 ;
-(NSURL *)playerStreamURL;
-(void)setPlayerSize:(CGSize)arg1 ;
-(NSString *)creatorScreenName;
-(NSURL *)playerURL;
-(CGSize)playerSize;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)title;
-(CGSize)imageSize;
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
-(void)setImageSize:(CGSize)arg1 ;
@end
