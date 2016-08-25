/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface UnityAdsCampaign : NSObject {

	BOOL _shouldCacheVideo;
	BOOL _allowedToCacheVideo;
	BOOL _viewed;
	BOOL _bypassAppSheet;
	BOOL _isValidCampaign;
	BOOL _nativeTrackingQuerySent;
	BOOL _allowStreaming;
	NSURL* _endScreenURL;
	NSURL* _endScreenPortraitURL;
	NSURL* _clickURL;
	NSURL* _pictureURL;
	NSURL* _trailerDownloadableURL;
	NSURL* _trailerStreamingURL;
	NSURL* _gameIconURL;
	NSURL* _customClickURL;
	NSString* _gameID;
	NSString* _gameName;
	NSString* _id;
	NSString* _tagLine;
	NSString* _itunesID;
	long long _expectedTrailerSize;
	long long _videoCachingStartTime;
	long long _videoCachingEndTime;
	long long _videoBufferingStartTime;
	long long _videoBufferingEndTime;

}

@property (nonatomic,retain) NSURL * endScreenURL;                           //@synthesize endScreenURL=_endScreenURL - In the implementation block
@property (nonatomic,retain) NSURL * endScreenPortraitURL;                   //@synthesize endScreenPortraitURL=_endScreenPortraitURL - In the implementation block
@property (nonatomic,retain) NSURL * clickURL;                               //@synthesize clickURL=_clickURL - In the implementation block
@property (nonatomic,retain) NSURL * pictureURL;                             //@synthesize pictureURL=_pictureURL - In the implementation block
@property (nonatomic,retain) NSURL * trailerDownloadableURL;                 //@synthesize trailerDownloadableURL=_trailerDownloadableURL - In the implementation block
@property (nonatomic,retain) NSURL * trailerStreamingURL;                    //@synthesize trailerStreamingURL=_trailerStreamingURL - In the implementation block
@property (nonatomic,retain) NSURL * gameIconURL;                            //@synthesize gameIconURL=_gameIconURL - In the implementation block
@property (nonatomic,retain) NSURL * customClickURL;                         //@synthesize customClickURL=_customClickURL - In the implementation block
@property (nonatomic,retain) NSString * gameID;                              //@synthesize gameID=_gameID - In the implementation block
@property (nonatomic,retain) NSString * gameName;                            //@synthesize gameName=_gameName - In the implementation block
@property (nonatomic,retain) NSString * id;                                  //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSString * tagLine;                             //@synthesize tagLine=_tagLine - In the implementation block
@property (nonatomic,retain) NSString * itunesID;                            //@synthesize itunesID=_itunesID - In the implementation block
@property (assign,nonatomic) BOOL shouldCacheVideo;                          //@synthesize shouldCacheVideo=_shouldCacheVideo - In the implementation block
@property (assign,nonatomic) BOOL allowedToCacheVideo;                       //@synthesize allowedToCacheVideo=_allowedToCacheVideo - In the implementation block
@property (assign,nonatomic) BOOL viewed;                                    //@synthesize viewed=_viewed - In the implementation block
@property (assign,nonatomic) BOOL bypassAppSheet;                            //@synthesize bypassAppSheet=_bypassAppSheet - In the implementation block
@property (assign,nonatomic) long long expectedTrailerSize;                  //@synthesize expectedTrailerSize=_expectedTrailerSize - In the implementation block
@property (assign,nonatomic) BOOL isValidCampaign;                           //@synthesize isValidCampaign=_isValidCampaign - In the implementation block
@property (assign,nonatomic) long long videoCachingStartTime;                //@synthesize videoCachingStartTime=_videoCachingStartTime - In the implementation block
@property (assign,nonatomic) long long videoCachingEndTime;                  //@synthesize videoCachingEndTime=_videoCachingEndTime - In the implementation block
@property (assign,nonatomic) long long videoBufferingStartTime;              //@synthesize videoBufferingStartTime=_videoBufferingStartTime - In the implementation block
@property (assign,nonatomic) long long videoBufferingEndTime;                //@synthesize videoBufferingEndTime=_videoBufferingEndTime - In the implementation block
@property (assign,nonatomic) BOOL nativeTrackingQuerySent;                   //@synthesize nativeTrackingQuerySent=_nativeTrackingQuerySent - In the implementation block
@property (assign,nonatomic) BOOL allowStreaming;                            //@synthesize allowStreaming=_allowStreaming - In the implementation block
-(void)setIsValidCampaign:(BOOL)arg1 ;
-(void)setupFromData:(id)arg1 ;
-(long long)videoBufferingEndTime;
-(void)setVideoBufferingEndTime:(long long)arg1 ;
-(long long)videoBufferingStartTime;
-(void)setNativeTrackingQuerySent:(BOOL)arg1 ;
-(void)setVideoBufferingStartTime:(long long)arg1 ;
-(void)setEndScreenURL:(NSURL *)arg1 ;
-(void)setEndScreenPortraitURL:(NSURL *)arg1 ;
-(void)setClickURL:(NSURL *)arg1 ;
-(void)setTrailerDownloadableURL:(NSURL *)arg1 ;
-(void)setTrailerStreamingURL:(NSURL *)arg1 ;
-(void)setGameIconURL:(NSURL *)arg1 ;
-(void)setGameID:(NSString *)arg1 ;
-(void)setItunesID:(NSString *)arg1 ;
-(void)setAllowedToCacheVideo:(BOOL)arg1 ;
-(void)setShouldCacheVideo:(BOOL)arg1 ;
-(void)setBypassAppSheet:(BOOL)arg1 ;
-(void)setExpectedTrailerSize:(long long)arg1 ;
-(void)setCustomClickURL:(NSURL *)arg1 ;
-(void)setAllowStreaming:(BOOL)arg1 ;
-(long long)geBufferingDuration;
-(NSURL *)endScreenURL;
-(NSURL *)endScreenPortraitURL;
-(NSURL *)clickURL;
-(NSURL *)trailerDownloadableURL;
-(NSURL *)trailerStreamingURL;
-(NSURL *)gameIconURL;
-(NSURL *)customClickURL;
-(NSString *)gameID;
-(NSString *)itunesID;
-(BOOL)shouldCacheVideo;
-(BOOL)allowedToCacheVideo;
-(BOOL)viewed;
-(BOOL)bypassAppSheet;
-(long long)expectedTrailerSize;
-(BOOL)isValidCampaign;
-(long long)videoCachingStartTime;
-(void)setVideoCachingStartTime:(long long)arg1 ;
-(long long)videoCachingEndTime;
-(void)setVideoCachingEndTime:(long long)arg1 ;
-(BOOL)nativeTrackingQuerySent;
-(BOOL)allowStreaming;
-(id)initWithData:(id)arg1 ;
-(void)setTagLine:(NSString *)arg1 ;
-(NSString *)tagLine;
-(NSURL *)pictureURL;
-(void)setPictureURL:(NSURL *)arg1 ;
-(void)setGameName:(NSString *)arg1 ;
-(NSString *)gameName;
-(void)setViewed:(BOOL)arg1 ;
-(NSString *)id;
-(void)setId:(NSString *)arg1 ;
@end

